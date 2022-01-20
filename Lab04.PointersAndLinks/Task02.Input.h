#pragma once
#include "MyInclude.h"

/*Задание 2. Реализация ввода данных
Требуется реализовать функцию Input(a,b) так, чтобы она была
использована в программе следующим образом:
	int main()
	{
	int a, b;
	if(Input(a,b)== false) // if(!Input(a,b))
	{
	cerr << "error";
	return 1;
	}
	int s = a + b;
	return 0;
	}
В функции Input(a,b) должен быть реализован ввод данных с клавиатуры
с проверкой корректности ввода (правила проверки корректности кода
установите на ваше усмотрение).
*/

bool Input(int& a, int& b)
{
	std::cout << "Введите два числа: ";
	std::string tempA, tempB;
	std::cin >> tempA >> tempB;
	int value = 0;
	try {
		a = stoi(tempA);
		b = stoi(tempB);
		return true;
	}
	catch (int ex)
	{
		std::cout << "ERROR: Введеное значение не число! ";
	}
	return false;
}



void MainInput()
{
	int a, b;
	if (Input(a, b) == false)
	{
		std::cout << "Введенные данные не корректны!" << std::endl;	
	}
	else {	
		int s = a + b;
		std::cout << "Данные успешно получены" << std::endl;
		std::cout << "Значение а = " << a << ", b = " << b << ";" <<std::endl;
		std::cout << "Сумма = " << s << std::endl;
	}
}

