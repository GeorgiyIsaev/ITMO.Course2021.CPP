/*Задание 1. Расчет площади многоугольника*/
#pragma once
#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

struct Point {
	int x;
	int y;
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

int getSize() {
	while (true) {
		int size = 0;
		std::cout << "Введите колличество углов >> ";
		std::cin >> size;
		if(size>0)
			return 0;
		std::cout << "ERROR: колличество углов не может быть отрицательным!   ";
	}
}


void AreaPolygon() {
	/*Задание 1. Расчет площади многоугольника*/

	int size = getSize();
	Point[] ponts = getpoints();




}