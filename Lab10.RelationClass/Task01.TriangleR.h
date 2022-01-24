#pragma once
#include "Task01.Dot.h"
#include <string>
#include <iomanip> //ostringstream
#include <sstream>

class TriangleR
{
private:
	/*Точки*/
	Dot* dotA;
	Dot* dotB;
	Dot* dotC;
	/*Стороны*/
	double ab;
	double bc;
	double ca;
	void ResetSide();
public:
	TriangleR(Dot* a, Dot* b, Dot* c) :dotA(a), dotB(b), dotC(c) { ResetSide(); }
	/*вывести длины сторон треугольника;*/
	std::string StrLengthSides();
	/*− расчитать периметр треугольника;*/
	double Perimeter();
	/*− расчитать площадь треугольника*/
	double Area();
};

