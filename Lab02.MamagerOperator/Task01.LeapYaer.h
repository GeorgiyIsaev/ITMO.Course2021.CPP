#pragma once
#include <iostream>
#include <string>



/*
Задание 1. Определение високосного года
Дано натуральное число.
Требуется определить, является ли год с данным номером високосным. Если год
является високосным, то выведите YES, иначе выведите NO.
• Год является високосным, если его номер кратен 4, но не кратен 100, а
также, если он кратен 400.
*/




int getYear() {
	std::cout << "Введите год >> ";
	std::string textYaer;
	std::cin >> textYaer;
	int year = 0;
	try {
		year = stoi(textYaer);
	}
	catch(int ex)
	{
		std::cout << "ERROR: Введеное значение не число! ";
		getYear();
	}
	return year;
}


std::string IsLeap(int yaer) {
	std::string text = std::to_string(yaer) + ": ";
	//Если делится на 4 и не делится на 100
	//Или если делится на 400, то условие выше не важно!
	if ((yaer % 4 == 0 && yaer % 100 != 0) || yaer % 400 == 0)
	{
		text += "Високосный год";
	}
	else
	{
		text += "Не високосный год";
	}
	return text;
}

void LeapYaer() {
	/*Контрольные задания.
	/*Задание 1. Определение високосного года*/
	int yaer = getYear();
	std::string text = IsLeap(yaer);
	std::cout << text << std::endl;
}