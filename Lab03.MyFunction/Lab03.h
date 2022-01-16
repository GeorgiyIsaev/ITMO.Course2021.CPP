#pragma once
#include <iostream>
#include <string>
#include <cmath>

void privetPrint(std::string name)
{
	/*Задание 1. Реализация процедуры*/
	std::cout << name << ", " << "hello!" << std::endl;
}

std::string privet(std::string name)
{
	/*Задание 2. Реализация возвращения значения функции*/
	std::string str = name + ", " + "hello!\n";
	return str;
}

void privet(std::string name, int k)
{
	std::cout << name << ", " << "hello! " << "you input " << k << std::endl;
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

}

