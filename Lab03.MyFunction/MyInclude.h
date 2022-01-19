#pragma once
#include <iostream>
#include <string>
#include <cmath>

int GetValue(std::string text = "¬ведите число: ") {
	std::cout << text;
	std::string textValue;
	std::cin >> textValue;
	int value = 0;
	try {
		value = stoi(textValue);
	}
	catch (int ex)
	{
		std::cout << "ERROR: ¬веденое значение не число! ";
		GetValue(text);
	}
	return value;
}