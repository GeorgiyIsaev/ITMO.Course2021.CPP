#pragma once
#include <iostream>
#include <string>
#include <cmath>

/*Задание 2. Алгоритм Евклида
1. В этом же проекте объявите функцию, реализующую
алгоритм Евклида: определение наибольшего общего делителя
с использованием операции вычисления остатка от деления:
int gcd(int m, int n)
{
if (n == 0) return m;
return gcd(n, m % n);
}
22
2. В функции main() реализуйте ввод двух чисел, вызов функции
и вывод на экран результата.*/

int gcd(int m, int n)
{
	if (n == 0) return m;
	return gcd(n, m % n);
}

int getValue(std::string text = "Введите число >> " ) {
	std::cout << text;
	std::string textValue;
	std::cin >> textValue;
	int value = 0;
	try {
		value = stoi(textValue);
	}
	catch (int ex)
	{
		std::cout << "ERROR: Введеное значение не число! ";
		getValue(text);
	}
	return value;
}

void AlgEuclid() {
	int  m = getValue("Введите число m: ");
	int  n = getValue("Введите число n: ");
	int result = gcd(m, n);
	std::cout << "Результат: " << result;
}