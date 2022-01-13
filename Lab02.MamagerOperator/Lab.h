#pragma once
#include <iostream>
#include <string>


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