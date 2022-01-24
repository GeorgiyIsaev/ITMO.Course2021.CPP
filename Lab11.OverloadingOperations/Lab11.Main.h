#pragma once
#include "Distance.h"



void MainLab11() {
	/*Практическое занятие 11. Перегрузка операций
	/*Упражнение 1. Перегрузка бинарных операций*/
	Distance dist1, dist2, dist3, dist4;

	dist1.getdist();
	dist2.getdist();
	dist3.getdist();
	dist4.getdist();
	dist3 = dist1 + dist2;
	dist4 = dist1 + dist2 + dist3;
	std::cout << "\ndist1 = ";
	dist1.showdist();
	std::cout << "\ndist2 = ";
	dist2.showdist();
	std::cout << "\ndist3 = ";
	dist3.showdist();
	std::cout << "\ndist4 = ";
	dist4.showdist();
	dist3 = dist1 - dist2;
	std::cout << "\ndist3 = ";
	dist3.showdist();
}