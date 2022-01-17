#pragma once
#include "MyInclude.h"

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



void AlgEuclid() {
	int  m = getValue("������� ����� m: ");
	int  n = getValue("������� ����� n: ");
	int result = gcd(m, n);
	std::cout << "���������: " << result;
}