#pragma once
#include "MyInclude.h"

class Point {
	int x;
	int y;
	Point() { RandomPoint(-10, 10); }
	Point(int x1 , int y1) : x(x1), y(y1) {}
	void CinPoint(int i = 0) {
		std::cout << "Введите x и y для точки " << i << " >> ";
		Point point;
		std::cin >> x >> y;
	}
	void RandomPoint(int start, int end) {
		x = GetRandomInt(start, end);
		y = GetRandomInt(start, end);
	}
	/*Дли на до точки*/
	double LengthPoints(Point p) {	
		return sqrt(pow((x - p.x), 2) + pow((y - p.y), 2));
	}
	/*Длина  до центра*/
	double ToCenter() {	
		return sqrt(pow((x - 0), 2) + pow((y - 0), 2));
	}
	/*Вернуть строку с инфо о точке*/
	std::string StrInfo() {
		std::string str = "{" + std::to_string(x) + ": " +
			std::to_string(y) + "}";
		return str;
	}
};