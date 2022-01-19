#pragma once
#include "MyInclude.h"

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



void AlgEuclid() {
	int  m = GetValue("Введите число m: ");
	int  n = GetValue("Введите число n: ");
	int result = gcd(m, n);
	std::cout << "Результат: " << result;
}