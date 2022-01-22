#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <time.h>
#include <fstream> //�������� ������
#include <windows.h>
#include <tuple> //�������
#include <vector> //�������

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