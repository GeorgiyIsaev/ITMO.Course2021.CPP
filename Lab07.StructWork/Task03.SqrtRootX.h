#pragma once
#include "MyInclude.h"

/*Задание 3. Решение квадратного уравнения
Чтобы вернуть из функции несколько результатов
без реализации нового типа (класса или структуры),
можно объединить их в кортеж. 
Кортеж tuple (из заголовочного файла <tuple>) допускает
наличие элементов различных типов и количество объектов
в кортеже должно быть известно во время компиляции.
Реализуйте решение квадратного уравнения с помощью функции, 
возвращающей переменную типа кортеж, содержащую 
решение этого уравнения (корни уравнения) и флаг, 
показывающий наличие корней.*/

std::string SqRootStr(double a, double b, double c) {
	std::string text = std::to_string(a) + "x^2 + " +
		std::to_string(b) + "x + " + std::to_string(c) + " = 0";
	return text;
}

std::tuple<int, double, double> RootSqrt(double a, double b, double c)
{
	double x1 = 0; double x2 = 0;
	double D = b * b - 4 * a * c;
	int flag=0;
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
	/*Задание 3. Решение квадратного уравнения*/
	std::cout << "Значения для квадратного уравнения ax^2+bx+c=0" << std::endl;
	double a = GetValue("a= ");
	double	b = GetValue("b= ");
	double	c = GetValue("c= ");
	std::cout << "Уравнения: " << SqRootStr(a, b, c) << std::endl;

	//std::tie(a, b) -  распкаовавыет кортеж в переменные ();
	double	x1, x2; //корни
	int flag;
	std::tie(flag, x1, x2) = RootSqrt(a, b, c);
	switch (flag){
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