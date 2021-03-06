#pragma once
#include <math.h>

class Dot
{
private:
	double x;
	double y;
public:
	Dot();
	Dot(double x, double y);
	double distanceTo(Dot point);
	double distanceTo(Dot* point);
};

