#pragma once
#include "MyInclude.h"
#include "Task01.Point.h"


class Triangle {

public:
	void SetTriangle(Point a, Point b, Point c) {
		this->a = a;
		this->b = b;
		this->c = c;
		Dist(); //строны
		area = AreaTriangle(); //площадь
	}
	double AreaTriangle() {	
		/*Расчет площади треугольника*/
		double p = (ab + bc + ca) / 2; //полупериметр		
		double area = sqrt(p * (p - ab) * (p - bc) * (p - ca));	
		return area;
	}
	void PrintInfo() {
		std::cout << "Точки триугольника: "
			<< a.PrintInfo() << " "
			<< b.PrintInfo() << " "
			<< c.PrintInfo() << "\n";
		std::cout << "Сторона ab=" << ab 
			<< " bc= "<< bc
			<< " ca=" << ca << "";
		std::cout << " Площадь: " << area << "\n";
	}
private:
	Point a;
	Point b;
	Point c;
	double ab;
	double bc;
	double ca;
	double area;
	void Dist() {
		ab = a.lengthPoints(b);
		bc = b.lengthPoints(c);
		ca = c.lengthPoints(a);
	}
};