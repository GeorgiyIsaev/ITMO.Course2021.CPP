#pragma once
#include "MyInclude.h"


struct Point {
	int x;
	int y;
	void cinPoint(int i = 0) {
		std::cout << "¬ведите x и y дл€ точки " << i << " >> ";
		Point point;
		std::cin >> x >> y;
	}
	int lengthPoints(Point p) {
		//ƒлина между это и другой точками
		return sqrt(pow((x - p.x), 2) + pow((x - p.x), 2));
	}
	std::string printStr() {
		std::string str= "{" + std::to_string(x) + ": " +
			std::to_string(y) + "}";
		return str;	
	}
};


