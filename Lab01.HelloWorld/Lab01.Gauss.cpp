#pragma once
#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>
/*������� 1. ������ ������� ��������������*/

struct Point{
	int x;
	int y;
};

int getSize() {
	while (true) {
		int size = 0;
		std::cout << "������� ����������� ����� >> ";
		std::cin >> size;
		if(size>0)
			return size;
		std::cout << "ERROR: ����������� ����� �� ����� ���� �������������!   ";
	}
	return 0;
}

//Point getPoint(int i) {
//	std::cout << "������� x � y ��� ����� " << i << " >> ";
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
//	std::cout << "������������� �� " << size << " �����.\n";
//	for (int i=0; i < size; i++) {
//		std::cout << "���� " << i <<
//			": {" << ponts[i].x << ", "
//			<< ponts[i].y << "}\n";
//	}
//	std::cout << std::endl;
//}


void AreaPolygon() {
	/*������� 1. ������ ������� ��������������*/

	int size = getSize();
	//Point* ponts = getPoints(size);
	//printPonts(size, ponts);

	//delete[] ponts;
}