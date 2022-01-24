#include "Task01.Triangle.h"

void Triangle::ResetSide()
{
	ab = dotA.distanceTo(dotB);
	bc = dotB.distanceTo(dotC);
	ca = dotC.distanceTo(dotA);
}

std::string Triangle::strLengthSides()
{
	std::ostringstream osrt;
	osrt << std::fixed << std::setprecision(1) <<
		"Треугольник: [" << ab << ":" << bc
		<< ":" << ca << "];";
	return osrt.str();	
}

double Triangle::Perimeter()
{
	double p = (ab + bc + ca); 
	p = (p * 100) / 100;
	return p;
}

double Triangle::Area()
{
	/*Расчет площади треугольника*/
	double p = Perimeter() / 2; //полупериметр		
	double area = sqrt(p * (p - ab) * (p - bc) * (p - ca));
	area = (area * 100) / 100;
	return area;
}
