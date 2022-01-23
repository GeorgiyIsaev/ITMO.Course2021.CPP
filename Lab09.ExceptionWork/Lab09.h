#pragma once
#include "MyInclude.h"

/*���������� 1. ���������� ������� �������*/
class DivideByZeroError {
public:

	DivideByZeroError() : message("������� �� ����") { }
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
	/*���������� 1. ���������� ������� �������*/
	std::cout << "������� ��� ����� ����� ��� ������� �� ��������:\n";
	int number1, number2;
	std::cin >> number1;
	std::cin >> number2;
	try {
		float result = quotient(number1, number2);
		std::cout << "������� ����� " << result << std::endl;
	}
	catch (DivideByZeroError& error) {
		std::cout << "������: ";
		error.printMessage();		
	}
}

void Task02() {
	/*���������� 2. ���������� ������� � �����*/
	std::cout << "������� ����� ����� ��� ������� �� ��������:\n";
	int number1;
	std::cin >> number1;
	for (int i = -10; i < 10; i++) {
		try {
			float result = quotient(number1, i);
			std::cout << "������� ����� " << result << std::endl;
		}
		catch (DivideByZeroError& error){
			std::cout << "������: ";
			error.printMessage();
		}
	}
}
void Task03() {}

void MainLab09() {
	/*������������ ������� 9. ��������� �������������� ��������*/
	/*���������� 1. ���������� ������� �������*/
	Task01();
	/*���������� 2. ���������� ������� � �����*/
	Task02();
	/*���������� 3. ���������� ���������� � �����������*/
	Task03();
}