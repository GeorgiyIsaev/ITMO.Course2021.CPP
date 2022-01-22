#pragma once
#include "MyInclude.h"

/*«адание 2. –ешение квадратного уравнени€
—оздайте структуру Ц решение квадратного уравнени€,
содержащей два вещественных пол€ Ц корни квадратного уравнени€.
–еализуйте решение квадратного уравнени€ с помощью функции,
возвращающей переменную типа структуры Ц решение
этого уравнени€ с пол€ми Ц корн€ми уравнени€.*/

struct Equation {
	double x1;
	double x2;
	void SetABC(int a, int b, int c) {
		double D = b * b - 4 * a * c;
		if (D > 0)
		{
			x1 = ((-1) * b + sqrt(D)) / (2 * a);
			x2 = ((-1) * b - sqrt(D)) / (2 * a);;			
		}
		else if (D == 0)
		{
			x1 = (-1) * b / (2 * a);
			x2 = x1;			
		}
		else throw "Ќет корней! D<0";			
	}
	std::string StrRoots() {
		return "["+std::to_string(x1)+" "+
			std::to_string(x2) +"]";
	}
};

std::string SquareRootStr(double a, double b, double c) {
	std::string text = std::to_string(a) + "x^2 + " +
		std::to_string(b) + "x + " + std::to_string(c) + " = 0";
	return text;
}


Equation GetRoots(int a, int b, int c) {
	Equation eq;
	eq.SetABC(a, b, c);
	return eq;
}


void MainRootEquation() {
	int a = GetValue("¬ведите а: ");
	int b = GetValue("¬ведите b: ");
	int c = GetValue("¬ведите c: ");
	std::cout << SquareRootStr(a, b, c) << std::endl;
	try {
		Equation myEquation = GetRoots(a, b, c);
		std::cout << " орни уравнени€: "<< myEquation.StrRoots() << std::endl;
	}
	catch (const char* exception)
	{
		std::cout << "Error: " << exception << std::endl;
	}


}