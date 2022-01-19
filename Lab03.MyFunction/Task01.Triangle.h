#pragma once
#include "MyInclude.h"
#include "Task01.Point.h"


class Triangle {

public:
	void SetTriangle(Point a, Point b, Point c) {
		this->a = a;
		this->b = b;
		this->c = c;
		Dist(); //������
		area = AreaTriangle(); //�������
	}
	double AreaTriangle() {	
		/*������ ������� ������������*/
		double p = (ab + bc + ca) / 2; //������������		
		double area = sqrt(p * (p - ab) * (p - bc) * (p - ca));	
		return area;
	}
	void PrintInfo() {
		std::cout << "����� ������������: "
			<< a.PrintInfo() << " "
			<< b.PrintInfo() << " "
			<< c.PrintInfo() << "\n";
		std::cout << "������� ab=" << ab 
			<< " bc= "<< bc
			<< " ca=" << ca << "";
		std::cout << " �������: " << area << "\n";
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