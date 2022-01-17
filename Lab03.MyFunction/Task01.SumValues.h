#pragma once
#include "MyInclude.h"

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