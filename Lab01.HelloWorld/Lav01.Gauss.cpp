/*������� 1. ������ ������� ��������������*/
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
		std::cout << "������� ����������� ����� >> ";
		std::cin >> size;
		if(size>0)
			return 0;
		std::cout << "ERROR: ����������� ����� �� ����� ���� �������������!   ";
	}
}

Point getPoint(int i) {
	std::cout << "������� x � y ��� ����� " << i << " >> ";
	int x, y;
	std::cin >> x >> y;
	return Point(x, y);
}



void AreaPolygon() {
	/*������� 1. ������ ������� ��������������*/

	int size = getSize();
	Point ponts[] = getPoints();




}