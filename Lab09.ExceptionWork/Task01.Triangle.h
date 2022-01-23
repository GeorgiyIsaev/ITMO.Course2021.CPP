#pragma once
#include "MyInclude.h"



class Triangle {
private:
	double ab;
	double bc;
	double ca;
public:
	Triangle(double ab, double bc, double ca) {
		if (isExists(ab, bc, ca)) throw "�� ����������";
		this->ab = ab; this->bc = ab; this->ab = ca;
	}	
	double AreaTriangle() {
		/*������ ������� ������������*/
		double p = (ab + bc + ca) / 2; //������������		
		double area = sqrt(p * (p - ab) * (p - bc) * (p - ca));
		return area;
	}
	bool isExists(double ab, double bc, double ca) {
		return (((ab + bc) < ca) || ((ab + ca) < bc) || ((ca + bc) < ab));
	}
}




