#pragma once
#include "MyInclude.h"



class NoExistsException {
public:
	NoExistsException() : message("����������� �� ����������!") { }
	NoExistsException(std::string text) : message(text) { }
	NoExistsException(double ab) {
		message = "������� � ������ " + std::to_string(ab) + " ������ ��� ����� ���� ������!";
	}
	void printMessage() const {
		std::cout << message << std::endl;
	}
private:
	std::string message;
};


