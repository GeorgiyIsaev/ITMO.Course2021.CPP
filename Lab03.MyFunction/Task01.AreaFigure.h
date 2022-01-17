#pragma once
#include "MyInclude.h"
#include "Task01.Point.h"
#include "Task01.Triangle.h"

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


Point* getPoints(const int size) {
	Point* ponts = new Point[size];

	for (int i = 0; i < size; i++) {
		ponts[i].cinPoint(i + 1);
	}
	return ponts;
}


Triangle* getTriangles(const int size, Point* points) {

	Triangle* triangles = new Triangle[size - 2];

	for (int i = 0; i < size - 2; i++) {
		triangles[i].SetTriangle(points[i], points[i + 1], points[i + 2]);		
	}
	return triangles;
}

		

double AreaFull(const int size, Triangle* triangle) {
	double area = 0;
	for (int i = 0; i < size - 2; i++) {
		area += triangle[i].AreaTriangle();

		//std::cout << "Площадь фигуры ful = " << area << std::endl;
	}
	return area;
}
void AreaFigure() {
	int countPoints = 5;
	//Получаем точки
	Point* ponts = getPoints(countPoints);
	//Собираем из точек триугольники
	Triangle* triangles = getTriangles(countPoints, ponts);
	//Проверяем триугольник
	for (int i = 0; i < countPoints - 2; i++)
		triangles[i].PrintInfo();

		

	double area = AreaFull(countPoints, triangles);

	std::cout << "Площадь фигуры = " << area << std::endl;
	


}