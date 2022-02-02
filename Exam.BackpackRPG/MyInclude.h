#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <time.h>
#include <fstream> //Файловые потоки
#include <windows.h>
#include <tuple> //кортежи
#include <vector> //вектора
#include <iomanip> //ostringstream
#include <sstream>
#include <conio.h> // подключаем getch




int GetValue(std::string text = "Введите число: ") {
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
		GetValue(text);
	}
	return value;
}

int GetRandomInt(int start=0, int end=10) {
	//srand(time(0)); // автоматическая рандомизация
	int step = end - start +1;
	int val = start + rand() % step;
	return val;
}