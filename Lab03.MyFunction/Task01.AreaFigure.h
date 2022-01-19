#pragma once
#include "MyInclude.h"
#include "Task01.Point.h"
#include "Task01.Triangle.h"

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
	//���������� ������ � �������
	Point* ponts = new Point[size];

	for (int i = 0; i < size; i++) {
		ponts[i].cinPoint(i + 1);
	}
	return ponts;
}


Triangle* getTriangles(const int size, Point* points) {
	//�������� �� ����� �����������
	Triangle* triangles = new Triangle[size - 2];

	for (int i = 0; i < size - 2; i++) {
		triangles[i].SetTriangle(points[i], points[i + 1], points[i + 2]);		
	}
	return triangles;
}

		

double AreaFull(const int size, Triangle* triangle) {
	//����������� ����� ���� �������� ���� �������������
	double area = 0;
	for (int i = 0; i < size - 2; i++) {
		area += triangle[i].AreaTriangle();
	}
	return area;
}

void printFigure(int countPoints, Triangle* triangles) {
	//��������� ���������� � �������������
	for (int i = 0; i < countPoints - 2; i++)
		triangles[i].PrintInfo();
}

void AreaFigure() {
	int countPoints = 5;
	//�������� �����
	Point* ponts = getPoints(countPoints);
	//�������� �� ����� ������������
	Triangle* triangles = getTriangles(countPoints, ponts);
	//��������� �����������
	printFigure(countPoints, triangles);

		
	//������������ ������� ������
	double area = AreaFull(countPoints, triangles);
	std::cout << "������� ������ = " << area << std::endl;
	


}