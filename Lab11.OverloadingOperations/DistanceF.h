#pragma once
#include "MyInclude.h"

class DistanceF
{
private:
	int feet;
	float inches;
	const float MTF;
public:
	// конструктор по умолчанию
	DistanceF() : feet(0), inches(0.0), MTF(3.280833F) { }
	// конструктор с двум€ параметрами	
	DistanceF(int ft, float in) : feet(ft), inches(in), MTF(3.280833F)
	{ }
	DistanceF(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters; // перевод в футы
		feet = int(fltfeet); // число полных футов
		inches = 12 * (fltfeet-feet); // остаток - это дюймы
	}
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
	DistanceF operator+ (const Distance& d2) const
	{
		int f = feet + d2.feet;
		float i = inches + d2.inches;
		if (i >= 12.0)
		{
			i -= 12.0;
			f++;
		}
		return DistanceF(f, i);
	}
	DistanceF operator- (const DistanceF& d2) const
	{
		int f = feet - d2.feet;
		float i = inches - d2.inches;
		if (i <= 0.0)
		{
			i += 12.0;
			f--;
		}
		return DistanceF(f, i);
	}
	operator float() const
	{ //преобразовывает его в значение типа float
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}
	friend std::ostream& operator<< (std::ostream& out, const DistanceF& dist);
};



std::ostream& operator<< (std::ostream& out, const DistanceF& dist)
{
	out << dist.feet << "\" - " << dist.inches << "\"\n";
	return out;
}