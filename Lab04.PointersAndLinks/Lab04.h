#pragma once
#include "MyInclude.h"


/*Упражнение 1. Передача параметров*/
void fum_value(double k, double x, double y)
{
	x = x + k;
	y = y + k;
}
void fum_ptr(double k, double* x, double* y)
{
	*x = *x + k;
	*y = *y + k;
}
void fum_ref(double k, double& x, double& y)
{
	x = x + k;
	y = y + k;
}
void print(double x, double y)
{
	std::cout << "x = " << x << "; y = " << y << std::endl;
}
void Task01() {
	/*Упражнение 1. Передача параметров*/
	double k = 2.5;
	double xv = 10;
	double yv = 10;
	print(xv, yv);
	fum_value(k, xv, yv); // Передача в функцию обычного параметра
	print(xv, yv);
	fum_ptr(k, &xv, &yv); // Передача в функцию параметра указателя
	print(xv, yv);
	fum_ref(k, xv, yv); // Передача в функцию параметра ссылки
	print(xv, yv);	
}



/////////////////////////////////////////
/*Упражнение 2. Реализация функции обмена значений*/
void swap(int*, int*);
void swap(int&, int&);

void Task02() {
	int x = 5, y = 10;
	swap(&x, &y);
	swap(x, y);
}


void Lab04Main() {
	/*Практическое занятие 4. Использование указателей и ссылок*/
	/*Упражнение 1. Передача параметров*/
	Task01();

	/*Упражнение 2. Реализация функции обмена значений*/
	Task02();
}


void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
}