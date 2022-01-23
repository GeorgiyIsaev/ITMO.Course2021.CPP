#pragma once
#include "MyInclude.h"



class NoExistsException {
public:
	NoExistsException() : message("Треугольник не существует!") { }
	NoExistsException(std::string text) : message(text) { }
	NoExistsException(double ab) {
		message = "Сторона с длиной " + std::to_string(ab) + " больше чем сумму двух других!";
	}
	void printMessage() const {
		std::cout << message << std::endl;
	}
private:
	std::string message;
};


