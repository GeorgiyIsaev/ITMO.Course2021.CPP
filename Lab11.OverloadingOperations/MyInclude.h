#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <time.h>
#include <fstream> //�������� ������
#include <windows.h>
#include <tuple> //�������
#include <vector> //�������
#include <iomanip> //ostringstream
#include <sstream>
#include <algorithm>  // sort

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

int GetRandomInt(int start=0, int end=10) {
	//srand(time(0)); // �������������� ������������
	int step = end - start +1;
	int val = start + rand() % step;
	return val;
}