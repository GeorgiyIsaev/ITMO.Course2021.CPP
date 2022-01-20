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

bool Input(int& a, int& b)
{
	std::cout << "������� ��� �����: ";
	std::string tempA, tempB;
	std::cin >> tempA >> tempB;
	int value = 0;
	try {
		a = stoi(tempA);
		b = stoi(tempB);
		return true;
	}
	catch (int ex)
	{
		std::cout << "ERROR: �������� �������� �� �����! ";
	}
	return false;
}



void MainInput()
{
	int a, b;
	if (Input(a, b) == false)
	{
		std::cout << "��������� ������ �� ���������!" << std::endl;	
	}
	else {	
		int s = a + b;
		std::cout << "������ ������� ��������" << std::endl;
		std::cout << "�������� � = " << a << ", b = " << b << ";" <<std::endl;
		std::cout << "����� = " << s << std::endl;
	}
}

