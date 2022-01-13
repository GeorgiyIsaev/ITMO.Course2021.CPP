#pragma once
#include <iostream>
#include <string>
#include <ctime>


void ValidPoint(int x = 2, int y = 2) {
	/*Упражнение 1. Реализация операторов выбора
	Задание 1. Определение принадлежности точки заданной фигуре*/
	/*x {-3;3}; y={0;3}*/
	std::string point = "Точка {" + std::to_string(x) + "; " + std::to_string(y) + "}";
	if (x * x + y * y < 9 && y > 0)
	{
		std::cout << point << " находится внутри" << std::endl;
	}
	else if (x * x + y * y > 9 || y < 0)
	{
		std::cout << point << " находится снаружи" << std::endl;
	}
	else {
		std::cout << point << " находится на границе" << std::endl;
	}
}


void SwitchUse() {
	/*Упражнение 1. Реализация операторов выбора
	Задание 2. Использование оператора switch при реализации выбора*/
	char op;
	std::cout << "Сделай свой выбор, собери авто свой мечты (S или V): ";
	std::cin >> op;
	switch (op)
	{
	case 'S':
		std::cout << "Радио играть должно\n";
		std::cout << "Колеса круглые\n";
		std::cout << "Мощный двигатель\n";
		break;
	case 'V':
		std::cout << "Кондиционер хочу\n";
		std::cout << "Радио играть должно\n";
		std::cout << "Колеса круглые\n";
		std::cout << "Мощный двигатель\n";
		break;
	default:
		std::cout << "Колеса круглые\n";
		std::cout << "Мощный двигатель\n";
	}
}

void SwitchUse02() {
	/*Упражнение 1. Реализация операторов выбора
	Задание 2. Использование оператора switch при реализации выбора*/
	char op;
	std::cout << "Сделай свой выбор, собери авто свой мечты (S или V): ";
	std::cin >> op;
	switch (op)
	{
	case 'V':
		std::cout << "Кондиционер хочу\n";
	case 'S':
		std::cout << "Радио играть должно\n";
	default:
		std::cout << "Колеса круглые\n";
		std::cout << "Мощный двигатель\n";
	}
}

void DoWhileUse() {
	/*Упражнение 2. Использование циклов при реализации алгоритмов*/
    /*Задание 1. Использование цикла с постусловием*/
	double x, x1, x2, y;

	std::cout << "x1 = "; std::cin >> x1;
	std::cout << "x2 = "; std::cin >> x2;
	std::cout << "\tx\tsin(x)\n";
	x = x1;
	do
	{
		y = sin(x);
		std::cout << "\t" << x << "\t" << y << std::endl;
		x = x + 0.01;
	} while (x <= x2);
}



void WhileUse() {
	/*Упражнение 2. Использование циклов при реализации алгоритмов*/
	/*Задание 2. Использование цикла с предусловием*/
	int a, b, temp;
	std::cout << "a = "; std::cin >> a;
	std::cout << "b = "; std::cin >> b;
	while (a != b)
	{
		if (a > b)
			a -= b; // аналогично выражению a = a - b
		else
			b -= a;
	}
	std::cout << "НОД = " << a << std::endl;
}

void ForUse() {
	/*Упражнение 3. Применение цикла с параметром (for) для итерации*/
	srand(time(NULL));
	int a, b, c;
	int k = 0, n = 10;
	for (int i = 1; i <= n; i++) {
		// инициализация операндов случайными числами от 1 до 101 
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		std::cout << a << " * " << b << " = ";
		std::cin >> c;
		if (a * b != c)
		{
			k++; // операция «инкремент», аналогично: k = k + 1
			std::cout << "Error! ";
			std::cout << a << " * " << b << " = " << a * b << std::endl;
		}
	}
	std::cout << "Count error: " << k << std::endl;
}


void SumOnInterval(int k = 1, int m = 99 ) {
	/*Упражнение 4. Расчет суммы чисел на заданном интервале*/
	/*для i, находящихся от 1 до k и от m до 100.*/
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if ((i > k) && (i < m))
			continue;
		sum += i;
	}
	std::cout << "sum: " << sum << std::endl;
}