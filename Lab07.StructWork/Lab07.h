#pragma once
#include "MyInclude.h"

/*Упражнение 1. Реализация структуры Distance*/
struct Distance
{
	int feet;
	double inches;
	void ShowDist()
	{
		cout << feet << "\'-" << inches << "\"\n";
	}
};
Distance AddDist(Distance d1, Distance d2)
{
	Distance d;
	d.feet = d1.feet + d2.feet;
	d.inches = d1.inches + d2.inches;
	if (d.inches >= 12.0)
	{
		d.inches -= 12.0;
		d.feet++;
	}
	return d;
}
Distance InputDist()
{
	Distance d;
	std::cout << "\nВведите число футов: ";
	std::cin >> d.feet;
	std::cout << "Введите число дюймов: ";
	std::cin >> d.inches;
	return d;
}
void ShowDist(Distance d)
{
	std::cout << d.feet << "\'-" << d.inches << "\"\n";
}

void MainLab07() {
	

	/*Практическое занятие 7. Применение структур и кортежей */
	/*Упражнение 1. Реализация структуры Distance*/
	Distance d1 = InputDist();
	Distance d2 = { 1, 6.25 };
	Distance d3 = AddDist(d1, d2);
	ShowDist(d1);
	ShowDist(d2);
	ShowDist(d3);
}