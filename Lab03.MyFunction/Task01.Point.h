#pragma once
#include "MyInclude.h"


struct Point {
	int x;
	int y;
	void cinPoint(int i = 0) {
		std::cout << "??????? x ? y ??? ????? " << i << " >> ";
		Point point;
		std::cin >> x >> y;
	}
	double lengthPoints(Point p) {
		//????? ????? ??? ? ?????? ???????
		return sqrt(pow((x - p.x), 2) + pow((y - p.y), 2));
	}
	std::string PrintInfo() {
		std::string str= "{" + std::to_string(x) + ": " +
			std::to_string(y) + "}";
		return str;	
	}
};


