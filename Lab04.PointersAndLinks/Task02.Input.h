#pragma once
#include "MyInclude.h"

/*������� 2. ���������� ����� ������
��������� ����������� ������� Input(a,b) ���, ����� ��� ����
������������ � ��������� ��������� �������:
	int main()
	{
	int a, b;
	if(Input(a,b)== false) // if(!Input(a,b))
	{
	cerr << "error";
	return 1;
	}
	int s = a + b;
	return 0;
	}
� ������� Input(a,b) ������ ���� ���������� ���� ������ � ����������
� ��������� ������������ ����� (������� �������� ������������ ����
���������� �� ���� ����������).
*/



int MainInput()
{
	int a, b;
	if (Input(a, b) == false) // if(!Input(a,b))
	{
		cerr << "error";
		return 1;
	}
	int s = a + b;
	return 0;
}

