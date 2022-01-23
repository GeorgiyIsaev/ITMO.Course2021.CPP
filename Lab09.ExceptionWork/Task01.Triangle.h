#pragma once
#include "MyInclude.h"
#include "Task01.NoExistsException.h"

/*Контрольные задания
Задание 1. Безопасная реализация класса Triangle
Требуется разработать класс Triangle, представляющий
треугольник, который задается тремя сторонами.
Для класса определить функцию, вычисляющую площадь 
треугольника по трем сторонам (см. практическое занятие 1).
Реализовать генерацию исключительной ситуации при попытке
задать стороны недопустимой длины – если хотя бы одна
из сторон имеет длину большую, чем сумма двух других сторон.*/


class Triangle {
private:
	double ab;
	double bc;
	double ca;
public:	
	Triangle(double ab, double bc, double ca) {
		isExistsException(ab, bc, ca);
		this->ab = ab; this->bc = ab; this->ab = ca;
	}
	double AreaTriangle() {
		/*Расчет площади треугольника*/
		double p = (ab + bc + ca) / 2; //полупериметр		
		double area = sqrt(p * (p - ab) * (p - bc) * (p - ca));
		return area;
	}
	void isExistsException(double ab, double bc, double ca) {
		if (ab < 0 || bc < 0 || ca < 0)
			throw NoExistsException("Одна из сторон получила отрицальное значений!");
		if ((ab + bc) < ca) throw NoExistsException(ca);
		if ((ab + ca) < bc) throw NoExistsException(bc);
		if ((ca + bc) < ab) throw NoExistsException(ab);
	}
};


void Task01Triangle() {
	Triangle tr1(1,2,3);


	double ab;
	double bc;
	double ca;
	int size = 10;
	Triangle* triangles = new Triangle[size];
	for (int i = 0; i < size; i++) {

	}
}



