#pragma once
#include "IncludeFile.h"
#include "ControlWASD.h"

class Game {
private:

public:
	void loop() {
		while (true) {
			std::cout << "Обработка нажатия: ";
			int clik1 = controlWASD();
			std::cout << "Успех : " << clik1 << std::endl;
			std::cout << "Обработка нажатия2: ";
			int clik2 = controlWASD();
			std::cout << "Успех : " << clik2 <<std::endl;

			std::cout << "Обработка ввода1: ";
			int val1 = GetValue();
			std::cout << "Успех : " << val1 << std::endl;
			std::cout << "Обработка ввода2: ";
			int val2 = GetValue();
			std::cout << "Успех : " << val2 << std::endl;
		}
	}


};