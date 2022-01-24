#pragma once
#include "Distance.h"
#include "DistanceF.h"
#include "StudentGrade.h"

void Task01() {
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

	/*Через френд функцию*/
	std::cout << "\ndist1 = " << dist1;
}

void Task02() {
	/*Упражнение 2. Преобразования объектов в основные типы и наоборот*/
	DistanceF dist1 = 2.35F;
	std::cout << "\ndist1 = " << dist1;
	float mtrs;
	mtrs = static_cast<float>(dist1);
	mtrs = dist1;
	std::cout << "\nmtrs = " << mtrs;
}

void Task03() {
	/*Упражнение 3. Перегрузка операций операндов различных типов*/
	/*реализуйте перегрузку бинарных операторов сложения 
	и вычитания для работы с операндами разных типов, 
	например, сложения (вычитания) объекта 
	расстояния и вещественного значения*/
	DistanceF dist1, dist2;
	dist1.getRandomDist();
	dist2.getRandomDist();
	std::cout << "\ndist1 = " << dist1;
	std::cout << "\ndist2 = " << dist2;

	DistanceF dist3 = dist2 + 22.5;
	DistanceF dist4 = dist2 - 22.5;
	std::cout << "\ndist3 = " << dist3;
	std::cout << "\ndist4 = " << dist4;
}

void Task04() {
	/*Упражнение 4. Перегрузка оператора индексации*/
	GradeMap grades;
	grades["John"] = 'A';
	grades["Martin"] = 'B';
	std::cout << "John has a grade of " << grades["John"] << std::endl;
	std::cout << "Martin has a grade of " << grades["Martin"] << std::endl;
	std::cout << "New name and grade?" << std::endl;
	
	std::string name;
	char grade;
	std::cin >> name >> grade;
	grades[name] = grade;
	std::cout << name << " has a grade of " << grades[name] << std::endl;
}

void MainLab11() {
	/*Практическое занятие 11. Перегрузка операций
	/*Упражнение 1. Перегрузка бинарных операций*/
	//Task01();

	/*Упражнение 2. Преобразования объектов в основные типы и наоборот*/	
	//Task02();

	/*Упражнение 3. Перегрузка операций операндов различных типов*/
	//Task03();

	/*Упражнение 4. Перегрузка оператора индексации*/
	Task04();
}