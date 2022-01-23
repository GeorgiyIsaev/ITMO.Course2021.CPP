#pragma once
#include "MyInclude.h"

/*Упражнение 1. Безопасная функция деления*/
class DivideByZeroError {
public:

	DivideByZeroError() : message("Деление на нуль") { }
	void printMessage() const {
		std::cout << message << std::endl;
	}
private:
	std::string message;
};

float quotient(int numl, int num2) { 
	if (num2 == 0) 
		throw DivideByZeroError(); 
	return (float)numl / num2; 
}

void Task01() {
	/*Упражнение 1. Безопасная функция деления*/
	std::cout << "Введите два целых числа для расчета их частного:\n";
	int number1, number2;
	std::cin >> number1;
	std::cin >> number2;
	try {
		float result = quotient(number1, number2);
		std::cout << "Частное равно " << result << std::endl;
	}
	catch (DivideByZeroError& error) {
		std::cout << "ОШИБКА: ";
		error.printMessage();		
	}
}

void Task02() {
	/*Упражнение 2. Безопасное деление в цикле*/
	std::cout << "Введите целое числа для расчета их частного:\n";
	int number1;
	std::cin >> number1;
	for (int i = -10; i < 10; i++) {
		try {
			float result = quotient(number1, i);
			std::cout << "Частное равно " << result << std::endl;
		}
		catch (DivideByZeroError& error){
			std::cout << "ОШИБКА: ";
			error.printMessage();
		}
	}
}
void Task03() {}

void MainLab09() {
	/*Практическое занятие 9. Обработка исключительных операций*/
	/*Упражнение 1. Безопасная функция деления*/
	Task01();
	/*Упражнение 2. Безопасное деление в цикле*/
	Task02();
	/*Упражнение 3. Реализация исключения с параметрами*/
	Task03();
}