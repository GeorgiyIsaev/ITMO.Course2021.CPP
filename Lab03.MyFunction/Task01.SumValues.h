#pragma once
#include <iostream>
#include <string>
#include <cmath>
/*������� 1. ����� �����
1. �������� ����� ������ � �������� �������, ����������� ��������
���������� ����� ����� �� 1 �� ������ ������ �������������� ����� n:
int addNumders(int n)
{
if (n == 1) return 1; // ����� �� ��������
else return (n + addNumders(n - 1));
}
2. � ������� main() ���������� ���� ���������� �����, ����� ������� � 
����� �� ����� ����������.
3. �������� ������ ������� � ��� �� ������ (��� ����� �������������), 
������� ����� ����������� ����� �� ��������� �� ������� ����� �� �������.
4. � ������� main() ���������� ���� ���� ���������� � ���������
��� �������� ����������� ����� �����, �����, ����� ������� � 
����� �� ����� ����������.*/

int addNumders(int n)
{
	if (n == 1) return 1; // ����� �� ��������
	else return (n + addNumders(n - 1));
}

int addNumders(int start, int end)
{
	if (end == start) return 1; // ����� �� ��������
	else return (end + addNumders(end - 1));
}


int getValue() {
	std::cout << "������� ����� >> ";
	std::string textValue;
	std::cin >> textValue;
	int value = 0;
	try {
		value = stoi(textValue);
	}
	catch (int ex)
	{
		std::cout << "ERROR: �������� �������� �� �����! ";
		getValue();
	}
	return value;
}

void SumValue() {
	
	int value = getValue();
	int sum = addNumders(value);
	std::cout << "����� ��� " << value <<
		":  " << sum << std::endl;
	
	/*������������*/
	sum = addNumders(value, value + value);
	std::cout << "����� ��� ����� �� " << value << " �� " <<
		value + value << ": " << sum << std::endl;
}