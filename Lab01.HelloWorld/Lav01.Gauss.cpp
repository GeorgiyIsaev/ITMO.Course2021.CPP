/*������� 1. ������ ������� ��������������*/
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
		std::cout << "������� ����������� ����� >> ";
		std::cin >> size;
		if(size>0)
			return 0;
		std::cout << "ERROR: ����������� ����� �� ����� ���� �������������!   ";
	}
}


void AreaPolygon() {
	/*������� 1. ������ ������� ��������������*/

	int size = getSize();
	Point[] ponts = getpoints();




}