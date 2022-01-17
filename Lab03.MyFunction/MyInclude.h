#pragma once
#include <iostream>
#include <string>
#include <cmath>

int getValue(std::string text = "������� �����: ") {
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
		getValue(text);
	}
	return value;
}