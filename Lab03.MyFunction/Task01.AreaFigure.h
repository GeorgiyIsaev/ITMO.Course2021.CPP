#pragma once
#include "MyInclude.h"

/*Задание 1. Расчет площади сложной фигуры
Требуется написать программу для вычисления площади выпуклого 
пятиугольника, примерный вид изображен ран рисунке:
Исходные данные: координаты вершин пятиугольника (значения задайте 
самостоятельно).
Для решения задачи следует использовать метод декомпозиции: сначала 
получить площадь треугольников, а затем их сложить.
Для расчета сторон и площади треугольника использовать отдельные
соответствующие функции. Длину каждой стороны можно определить 
по формуле:
где xb, yb и xc, yc координаты двух точек отрезка.
*/

struct Point {
	int x;
	int y;
};

Point getPoint(int i) {
	std::cout << "Введите x и y для точки " << i << " >> ";
	Point point;
	std::cin >> point.x >> point.y;
	return point;
}

Point* getPoints(const int size) {
	Point* ponts = new Point[size];

	for (int i = 0; i < size; i++) {
		ponts[i] = getPoint(i);
	}
	return ponts;
}

int lengthPoints(Point p1, Point p2) {
	//Длина между точками
	return sqrt(pow((p1.x - p2.x),2) + pow((p1.x - p2.x), 2));
}

bool isTriangle(double a, double b, double c) {
	if (((a + b) < c) || ((a + c) < b) || ((c + b) < a)) {
		//треугольнику не существуйте	
		return false;
	}
	return true;
}

double AreaTriangle(double a, double b, double c) {
	/*Расчет площади треугольника*/
	double p = (a + b + c) / 2; //полупериметр
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
	/*Расчет площади треугольника*/
	double AB = lengthPoints(triangle.a, triangle.b);
	double BC = lengthPoints(triangle.b, triangle.c);
	double CA = lengthPoints(triangle.c, triangle.a);
	double area = AreaTriangle(AB, BC, CA);

	std::cout << "Площадь фигуры th = " << area << std::endl;
	return area;
}

double AreaFull(const int size, Triangle* triangle) {
	double area = 0;
	for (int i = 0; i < size - 2; i++) {
		area += AreaTriangle(triangle[i]);

		std::cout << "Площадь фигуры ful = " << area << std::endl;
	}
	return area;
}
void AreaFigure() {
	int countPoints = 5;
	Point* ponts = getPoints(countPoints);
	Triangle* triangles = getTriangles(countPoints, ponts);
	double area = AreaFull(countPoints, triangles);

	std::cout << "Площадь фигуры = " << area << std::endl;
	


}