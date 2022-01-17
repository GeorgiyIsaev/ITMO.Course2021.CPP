#pragma once
#include "MyInclude.h"
#include "Task01.Point.h"


struct Triangle {


	void SetTriangle(Point a, Point b, Point c;) {
		this.a = a;
		this.b = b;
		this.c = c;
		Dist(); //строны
		AreaTriangle(); //площадь
	}



	double AreaTriangle() {	
		/*Расчет площади треугольника*/
		double p = (ab + bc + ca) / 2; //полупериметр
		double area;
		area = sqrt(p * (p - ab) * (p - bc) * (p - ca));
		return area;
	}
	void PrintInfo() {
		std::cout << "Точки триугольника: "
			<< a.printStr() << " "
			<< b.printStr() << " "
			<< c.printStr() << "\n";
		std::cout << "Сторона ab=" << ab 
			<< " bc= "<< bc
			<< " ca=" << ca << "\n";
	}
private:
	Point a;
	Point b;
	Point c;
	double ab;
	double bc;
	double ca;
	void Dist() {
		ab = a.lengthPoints(b);
		bc = b.lengthPoints(c);
		ca = c.lengthPoints(a);
	}
};