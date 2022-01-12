/*Задание 1. Расчет площади многоугольника*/
#pragma once
#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>
#include "Lav01.Gauss.h"

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

Point getPoint(int i) {
	std::cout << "Введите x и y для точки " << i << " >> ";
	int x, y;
	std::cin >> x >> y;
	return Point(x, y);
}



void AreaPolygon() {
	/*Задание 1. Расчет площади многоугольника*/

	int size = getSize();
	Point ponts[] = getPoints();




}