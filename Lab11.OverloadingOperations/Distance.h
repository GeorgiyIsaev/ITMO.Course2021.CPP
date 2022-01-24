#pragma once
#include "MyInclude.h"

class Distance
{
private:
	int feet;
	float inches;
public:
	// конструктор по умолчанию
	Distance() : feet(0), inches(0.0) { }
	// конструктор с двум€ параметрами
	Distance(int ft, float in) : feet(ft), inches(in) { }
	void getdist()
	{
		std::cout << "\n¬ведите число футов : ";
		std::cin >> feet;
		std::cout << "\n¬ведите число дюймов : ";
		std::cin >> inches;
	}
	void showdist()
	{
		std::cout << feet << "\" - " << inches << "\"\n";
	}
	Distance operator+ (const Distance& d2) const
	{
		int f = feet + d2.feet;
		float i = inches + d2.inches;
		if (i >= 12.0)
		{
			i -= 12.0;
			f++;
		}
		return Distance(f, i);
	}
	Distance operator- (const Distance& d2) const
	{
		int f = feet - d2.feet;
		float i = inches - d2.inches;
		if (i <= 0.0)
		{
			i += 12.0;
			f--;
		}
		return Distance(f, i);
	}
	friend std::ostream& operator<< (std::ostream& out, const Distance& dist);
};



std::ostream& operator<< (std::ostream& out, const Distance& dist)
{
	out << dist.feet << "\" - " << dist.inches << "\"\n";
	return out;
}