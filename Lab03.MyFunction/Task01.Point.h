#pragma once
#include "MyInclude.h"


struct Point {
	int x;
	int y;
	void cinPoint(int i = 0) {
		std::cout << "������� x � y ��� ����� " << i << " >> ";
		Point point;
		std::cin >> x >> y;
	}
	int lengthPoints(Point p) {
		//����� ����� ��� � ������ �������
		return sqrt(pow((x - p.x), 2) + pow((x - p.x), 2));
	}

};


