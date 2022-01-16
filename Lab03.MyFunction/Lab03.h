#pragma once
#include <iostream>
#include <string>
#include <cmath>

void privetPrint(std::string name)
{
	/*��� 01.������� 1. ���������� ���������*/
	std::cout << name << ", " << "hello!" << std::endl;
}

std::string privet(std::string name)
{
	/*��� 01.������� 2. ���������� ����������� �������� �������*/
	std::string str = name + ", " + "hello!\n";
	return str;
}

void privet(std::string name, int k)
{
	/*���������� 2. ���������� �������*/
	std::cout << name << ", " << "hello! " << "you input " << k << std::endl;
}

long double firBinSearch(double a, int n)
{
	/*���������� 3. ���������� ������� ���������� � ������� �������*/
	double L = 0;
	double R = a;
	while (R - L > 1e-10)
	{
		double M = (L + R) / 2;
		if (pow(M, n) < a)
		{
			L = M;
		}
		else
		{
			R = M;
		}
	}
	return R;
}



void mainLab03() {
	/*���������� 1. ������������� ������� ��� ����������� ���������*/
	/*������� 1. ���������� ���������*/
	std::string name = "��������";
	privetPrint(name);

	/*������� 2. ���������� ����������� �������� �������*/
	std::string nameOut = privet(name);
	std::cout << nameOut << std::endl;

	/*���������� 2. ���������� �������*/
	int k;
	std::cout << "Input number:" << std::endl;
	std::cin >> k;
	privet(name);
	privet(name, k);

	/*���������� 3. ���������� ������� ���������� � ������� �������*/
	double a = 0.2;
	int n = 3;	
	int R = firBinSearch(a,n);
	std::cout <<"R: "<< R << std::endl;
}

