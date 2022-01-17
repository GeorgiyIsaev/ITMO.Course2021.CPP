#pragma once
#include "MyInclude.h"
#include "Task01.Point.h"


/*������� 1. ������ ������� ������� ������
��������� �������� ��������� ��� ���������� ������� ��������� 
�������������, ��������� ��� ��������� ��� �������:
�������� ������: ���������� ������ ������������� (�������� ������� 
��������������).
��� ������� ������ ������� ������������ ����� ������������: ������� 
�������� ������� �������������, � ����� �� �������.
��� ������� ������ � ������� ������������ ������������ ���������
��������������� �������. ����� ������ ������� ����� ���������� 
�� �������:
��� xb, yb � xc, yc ���������� ���� ����� �������.
*/


Point* getPoints(const int size) {
	Point* ponts = new Point[size];

	for (int i = 0; i < size; i++) {
		ponts[i].cinPoint(i + 1);
	}
	return ponts;
}



bool isTriangle(double a, double b, double c) {
	if (((a + b) < c) || ((a + c) < b) || ((c + b) < a)) {
		//������������ �� �����������	
		return false;
	}
	return true;
}

double AreaTriangle(double a, double b, double c) {
	/*������ ������� ������������*/
	double p = (a + b + c) / 2; //������������
	double area;
	area = sqrt(p * (p - a) * (p - b) * (p - c));
	return area;
}

struct Triangle {
	Point a;
	Point b;
	Point c;
};

Triangle* getTriangles(const int size, Point* points) {
	
	Triangle* triangles = new Triangle[size - 2];

	for (int i = 0; i < size-2; i++) {
		triangles[i].a = points[i];
		triangles[i].b = points[i+1];
		triangles[i].b = points[i + 2];
	}
	return triangles;
}

double AreaTriangle(Triangle triangle) {
	/*������ ������� ������������*/
	double AB = lengthPoints(triangle.a, triangle.b);
	double BC = lengthPoints(triangle.b, triangle.c);
	double CA = lengthPoints(triangle.c, triangle.a);
	double area = AreaTriangle(AB, BC, CA);

	std::cout << "������� ������ th = " << area << std::endl;
	return area;
}

double AreaFull(const int size, Triangle* triangle) {
	double area = 0;
	for (int i = 0; i < size - 2; i++) {
		area += AreaTriangle(triangle[i]);

		std::cout << "������� ������ ful = " << area << std::endl;
	}
	return area;
}
void AreaFigure() {
	int countPoints = 5;
	Point* ponts = getPoints(countPoints);
	Triangle* triangles = getTriangles(countPoints, ponts);
	double area = AreaFull(countPoints, triangles);

	std::cout << "������� ������ = " << area << std::endl;
	


}