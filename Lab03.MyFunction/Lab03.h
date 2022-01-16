#pragma once
#include <iostream>
#include <string>
#include <cmath>

void privetPrint(std::string name)
{
	/*Упр 01.Задание 1. Реализация процедуры*/
	std::cout << name << ", " << "hello!" << std::endl;
}

std::string privet(std::string name)
{
	/*Упр 01.Задание 2. Реализация возвращения значения функции*/
	std::string str = name + ", " + "hello!\n";
	return str;
}

void privet(std::string name, int k)
{
	/*Упражнение 2. Перегрузка функций*/
	std::cout << name << ", " << "hello! " << "you input " << k << std::endl;
}

long double firBinSearch(double a, int n)
{
	/*Упражнение 3. Реализация сложных алгоритмов с помощью функций*/
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
	/*Упражнение 1. Использование функции при организации программы*/
	/*Задание 1. Реализация процедуры*/
	std::string name = "Чупакбра";
	privetPrint(name);

	/*Задание 2. Реализация возвращения значения функции*/
	std::string nameOut = privet(name);
	std::cout << nameOut << std::endl;

	/*Упражнение 2. Перегрузка функций*/
	int k;
	std::cout << "Input number:" << std::endl;
	std::cin >> k;
	privet(name);
	privet(name, k);

	/*Упражнение 3. Реализация сложных алгоритмов с помощью функций*/
	double a = 0.2;
	int n = 3;	
	int R = firBinSearch(a,n);
	std::cout <<"R: "<< R << std::endl;
}

