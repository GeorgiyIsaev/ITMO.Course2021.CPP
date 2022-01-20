#pragma once
#include "MyInclude.h"

/*Задание 1. Вычисление корней квадратного уравнения
Требуется реализовать функцию вычисления корней квадратного
уравнения.
• Функция должна возвращать значение 1, если корни найдены,
значение нуля, если оба корня совпадают, и значение -1,
если корней не существует.
• Значения корней уравнений должны возвращаться в качестве
аргументов функции, передаваемых по ссылке.
Прототип функции должен выглядеть следующим образом:
int Myroot(double, double, double, double&, double&);*/


int Myroot(double, double, double, double&, double&);
std::string SquareRootStr(double a, double b, double c) {
	std::string text = std::to_string(a) + "x^2 + "+
		std::to_string(b) +"x + "+ std::to_string(c) +" = 0";
	return text;
}

void MainSquareRoot() {


	std::cout << "Значения для квадратного уравнения ax^2+bx+c=0" << std::endl;
	double a = GetValue("a= ");
	double	b = GetValue("b= ");
	double	c = GetValue("c= ");
	std::cout << "Уравнения " << SquareRootStr(a,b,c) << std::endl;

	double	x1, x2; //корни

	int result = Myroot(a, b, c, x1, x2);
	switch (result)
	{
	case 1:
		std::cout << "x1 = " << x1 << "\nx2 = " << x2 << std::endl;
		break;
	case 0:
		std::cout << "x1 = x2 = " << x1 << std::endl;
		break;
	case (-1):
		std::cout << "У данного уравнения корней нет.";
		break;
	}	
}

int Myroot(double a, double b, double c, double& x1, double& x2)
{
	double D = b * b - 4 * a * c;
	if (D > 0)
	{
		x1 = ((-1) * b + sqrt(D)) / (2 * a);
		x2 = ((-1) * b - sqrt(D)) / (2 * a);;
		return 1;
	}
	else if (D == 0)
	{
		x1 = (-1) * b / (2 * a);
		x2 = x1;
		return 0;
	}
	else
		return -1;
}