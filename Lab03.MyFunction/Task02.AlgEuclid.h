#pragma once
#include <iostream>
#include <string>
#include <cmath>

/*������� 2. �������� �������
1. � ���� �� ������� �������� �������, �����������
�������� �������: ����������� ����������� ������ ��������
� �������������� �������� ���������� ������� �� �������:
int gcd(int m, int n)
{
if (n == 0) return m;
return gcd(n, m % n);
}
22
2. � ������� main() ���������� ���� ���� �����, ����� �������
� ����� �� ����� ����������.*/

int gcd(int m, int n)
{
	if (n == 0) return m;
	return gcd(n, m % n);
}

int getValue(std::string text = "������� ����� >> " ) {
	std::cout << text;
	std::string textValue;
	std::cin >> textValue;
	int value = 0;
	try {
		value = stoi(textValue);
	}
	catch (int ex)
	{
		std::cout << "ERROR: �������� �������� �� �����! ";
		getValue(text);
	}
	return value;
}

void AlgEuclid() {
	int  m = getValue("������� ����� m: ");
	int  n = getValue("������� ����� n: ");
	int result = gcd(m, n);
	std::cout << "���������: " << result;
}