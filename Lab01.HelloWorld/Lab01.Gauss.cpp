#pragma once
#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>
/*Задание 1. Расчет площади многоугольника*/

struct Point{
	int x;
	int y;
};

int getSize() {
	while (true) {
		int size = 0;
		std::cout << "Введите колличество углов >> ";
		std::cin >> size;
		if(size>0)
			return size;
		std::cout << "ERROR: колличество углов не может быть отрицательным!   ";
	}
	return 0;
}

//Point getPoint(int i) {
//	std::cout << "Введите x и y для точки " << i << " >> ";
//	Point point;
//	std::cin >> point.x >> point.y;
//	return point;
//}
//
//Point* getPoints(const int size) {
//	Point* ponts = new Point[size];
//
//	for (int i=0; i < size; i++) {
//		ponts[i] = getPoint(i);
//	}
//	return ponts;
//}

//void printPonts(const int size, Point* ponts) {
//	std::cout << "Многоугольник из " << size << " углов.\n";
//	for (int i=0; i < size; i++) {
//		std::cout << "Угол " << i <<
//			": {" << ponts[i].x << ", "
//			<< ponts[i].y << "}\n";
//	}
//	std::cout << std::endl;
//}


void AreaPolygon() {
	/*Задание 1. Расчет площади многоугольника*/

	int size = getSize();
	//Point* ponts = getPoints(size);
	//printPonts(size, ponts);

	//delete[] ponts;
}