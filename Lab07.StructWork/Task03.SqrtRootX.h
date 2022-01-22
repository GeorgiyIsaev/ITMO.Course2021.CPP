#pragma once
#include "MyInclude.h"

/*������� 3. ������� ����������� ���������
����� ������� �� ������� ��������� �����������
��� ���������� ������ ���� (������ ��� ���������),
����� ���������� �� � ������. 
������ tuple (�� ������������� ����� <tuple>) ���������
������� ��������� ��������� ����� � ���������� ��������
� ������� ������ ���� �������� �� ����� ����������.
���������� ������� ����������� ��������� � ������� �������, 
������������ ���������� ���� ������, ���������� 
������� ����� ��������� (����� ���������) � ����, 
������������ ������� ������.*/

std::string SquareRootStr(double a, double b, double c) {
	std::string text = std::to_string(a) + "x^2 + " +
		std::to_string(b) + "x + " + std::to_string(c) + " = 0";
	return text;
}

std::tuple<int, double, double> RootSqrt(double a, double b, double c)
{
	double x1, double x2;
	double D = b * b - 4 * a * c;
	int flag;
	if (D > 0)
	{
		x1 = ((-1) * b + sqrt(D)) / (2 * a);
		x2 = ((-1) * b - sqrt(D)) / (2 * a);
		flag = 1;
	}
	else if (D == 0)
	{
		x1 = (-1) * b / (2 * a);
		x2 = x1;	
		flag = 0;
	}
	else {
		flag = -1;
		x2 = x1 = 0.0;
	}
	return std::make_tuple(flag, x1, x2);
		
}

void MainTupleSqrtRoot() {
	std::cout << "�������� ��� ����������� ��������� ax^2+bx+c=0" << std::endl;
	double a = GetValue("a= ");
	double	b = GetValue("b= ");
	double	c = GetValue("c= ");
	std::cout << "���������: " << SquareRootStr(a, b, c) << std::endl;

	double	x1, x2; //�����

	//std::tie(a, b) -  ������������� ������ � ���������� ();
	std::tuple<int, double, double> result = RootSqrt(a, b, c);
	int flag = result.get<1>();
	int flag = result.get<1>();
	switch ()
	{
	case 1:
		std::cout << "x1 = " << x1 << "\nx2 = " << x2 << std::endl;
		break;
	case 0:
		std::cout << "x1 = x2 = " << x1 << std::endl;
		break;
	case (-1):
		std::cout << "� ������� ��������� ������ ���.";
		break;
	}
}