#pragma once
#include "IncludeFile.h"
#include "ControlWASD.h"

class Game {
private:

public:
	void loop() {
		while (true) {
			std::cout << "��������� �������: ";
			int clik1 = controlWASD();
			std::cout << "����� : " << clik1 << std::endl;
			std::cout << "��������� �������2: ";
			int clik2 = controlWASD();
			std::cout << "����� : " << clik2 <<std::endl;

			std::cout << "��������� �����1: ";
			int val1 = GetValue();
			std::cout << "����� : " << val1 << std::endl;
			std::cout << "��������� �����2: ";
			int val2 = GetValue();
			std::cout << "����� : " << val2 << std::endl;
		}
	}


};