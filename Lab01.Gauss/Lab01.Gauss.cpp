#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>
/*Задание 1. Расчет площади многоугольника
Заданы координаты вершин пятиугольника на плоскости.
Требуется составить программу для расчета площади данного пятиугольника.
Определите типы данных, используемые в расчетах.
Расчет площади проведите по формуле площади Гаусса, непосредственно
использующей координаты вершин.
Координаты вершин пользователь должен вводить с клавиатуры.
*/

struct Point {
	int x;
	int y;
};


int getSize() {
	while (true) {
		int size = 0;
		std::cout << "Введите колличество углов >> ";
		std::cin >> size;
		if (size > 0)
			return size;
		std::cout << "ERROR: колличество углов не может быть отрицательным!   ";
	}
	return 0;
}

Point getPoint(int i) {
	std::cout << "Введите x и y для точки " << i << " >> ";
	Point point;
	std::cin >> point.x >> point.y;
	return point;
}

Point* getPoints(const int size) {
	Point* ponts = new Point[size];

	for (int i=0; i < size; i++) {
		ponts[i] = getPoint(i);
	}
	return ponts;
}

void printPonts(const int size, Point* ponts) {
	std::cout << "Многоугольник из " << size << " углов.\n";
	for (int i=0; i < size; i++) {
		std::cout << "Угол " << i <<
			": {" << ponts[i].x << ", "
			<< ponts[i].y << "}\n";
	}
	std::cout << std::endl;
}

int AreaMath(const int size, Point* ponts) {
	int area = 0;
	for (int i = 0; i < size-1; i++) {
		area = area +
			(ponts[i].x + ponts[i + 1].x) *
			(ponts[i].y - ponts[i + 1].y);		
	}
	area = abs(area) / 2;
	return area;
}



void AreaPolygon() {
	/*Задание 1. Расчет площади многоугольника*/
	int size = getSize();
	Point* ponts = getPoints(size);
	printPonts(size, ponts);
	double area = AreaMath(size, ponts);
	std::cout<<"Площадь многоугольника: "<< area << std::endl;

	delete[] ponts;
}


int main()
{
	SetConsoleOutputCP(1251); 
	SetConsoleCP(1251);
   	AreaPolygon();
}

