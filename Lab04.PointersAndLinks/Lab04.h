#pragma once
#include "MyInclude.h"


/*���������� 1. �������� ����������*/
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
	/*���������� 1. �������� ����������*/
	double k = 2.5;
	double xv = 10;
	double yv = 10;
	print(xv, yv);
	fum_value(k, xv, yv); // �������� � ������� �������� ���������
	print(xv, yv);
	fum_ptr(k, &xv, &yv); // �������� � ������� ��������� ���������
	print(xv, yv);
	fum_ref(k, xv, yv); // �������� � ������� ��������� ������
	print(xv, yv);	
}



/////////////////////////////////////////
/*���������� 2. ���������� ������� ������ ��������*/
void swap(int*, int*);
void swap(int&, int&);

void Task02() {
	int x = 5, y = 10;
	swap(&x, &y);
	swap(x, y);
}


void Lab04Main() {
	/*������������ ������� 4. ������������� ���������� � ������*/
	/*���������� 1. �������� ����������*/
	Task01();

	/*���������� 2. ���������� ������� ������ ��������*/
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