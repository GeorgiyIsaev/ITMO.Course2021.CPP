#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <time.h>

int GetValue(std::string text = "������� �����: ") {
	std::cout << text;
	std::string textValue;
	std::cin >> textValue;
	int value = 0;
	try {
		value = stoi(textValue);
	}
	catch (int ex)
	{
		std::cout << "ERROR: �������� �������� �� �����! ";
		GetValue(text);
	}
	return value;
}