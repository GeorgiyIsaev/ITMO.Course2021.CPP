#pragma once
#include "MyInclude.h"
#include "Task01.NoExistsException.h"

/*����������� �������
������� 1. ���������� ���������� ������ Triangle
��������� ����������� ����� Triangle, ��������������
�����������, ������� �������� ����� ���������.
��� ������ ���������� �������, ����������� ������� 
������������ �� ���� �������� (��. ������������ ������� 1).
����������� ��������� �������������� �������� ��� �������
������ ������� ������������ ����� � ���� ���� �� ����
�� ������ ����� ����� �������, ��� ����� ���� ������ ������.*/


class Triangle {
private:
	double ab;
	double bc;
	double ca;
	void isExistsException(double ab, double bc, double ca) {
		if (ab < 0 || bc < 0 || ca < 0)
			throw NoExistsException("���� �� ������ �������� ����������� ��������!");
		if ((ab + bc) < ca) throw NoExistsException(ca);
		if ((ab + ca) < bc) throw NoExistsException(bc);
		if ((ca + bc) < ab) throw NoExistsException(ab);
	}
public:	
	Triangle(double ab, double bc, double ca) {
		isExistsException(ab, bc, ca);
		this->ab = ab; this->bc = ab; this->ca = ca;
	}
	double AreaTriangle() {
		/*������ ������� ������������*/
		double p = (ab + bc + ca) / 2; //������������		
		double area = sqrt(p * (p - ab) * (p - bc) * (p - ca));
		return area;
	}	
	std::string strInfo() {
		std::ostringstream osrt;
		osrt << std::fixed << std::setprecision(1) <<
			"�����������: [" << ab << ":" << bc
			<< ":" <<	ca << "]; S = " <<AreaTriangle();
		return osrt.str();


		/*return "�����������: [" + std::to_string(ab) + ":" +
			std::to_string(bc) + ":" +
			std::to_string(ca) + "]; S = " + 
			std::to_string(AreaTriangle());*/
	}
};


void printTR(double ab, double bc, double ca) {
	std::cout << "��������� ������������ �� ������: " << std::fixed << std::setprecision(1) <<
		ab << ": " << bc << ": " << ca << "\n";
}

void Task01Triangle() {

	for (int i = 0; i < 10; i++) {
		double ab = GetRandomInt(1, 10);
		double bc = GetRandomInt(1, 10);
		double ca = GetRandomInt(-5, 5);
		printTR(ab, bc, ca);
		try {
			Triangle tr1(ab, bc, ca);
			std::cout << tr1.strInfo() << std::endl;
		}
		catch (NoExistsException& error) {
			std::cout << "\t������: ";
			error.printMessage();
		}
	}

}
	




