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
	//Возвращает массив с точками
	Point* ponts = new Point[size];

	for (int i = 0; i < size; i++) {
		ponts[i].cinPoint(i + 1);
	}
	return ponts;
}


Triangle* getTriangles(const int size, Point* points) {
	//Собирает из точек треугльники
	Triangle* triangles = new Triangle[size - 2];

	for (int i = 0; i < size - 2; i++) {
		triangles[i].SetTriangle(points[i], points[i + 1], points[i + 2]);		
	}
	return triangles;
}

		

double AreaFull(const int size, Triangle* triangle) {
	//Подсчитвает сумму всех площадей всех трекгольников
	double area = 0;
	for (int i = 0; i < size - 2; i++) {
		area += triangle[i].AreaTriangle();
	}
	return area;
}

void printFigure(int countPoints, Triangle* triangles) {
	//Показвает информацию о треугольниках
	for (int i = 0; i < countPoints - 2; i++)
		triangles[i].PrintInfo();
}

void AreaFigure() {
	int countPoints = 5;
	//Получаем точки
	Point* ponts = getPoints(countPoints);
	//Собираем из точек триугольники
	Triangle* triangles = getTriangles(countPoints, ponts);
	//Проверяем триугольник
	printFigure(countPoints, triangles);

		
	//Подсчитываем площадь фигуры
	double area = AreaFull(countPoints, triangles);
	std::cout << "Площадь фигуры = " << area << std::endl;
	


}