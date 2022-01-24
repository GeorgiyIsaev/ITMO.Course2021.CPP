#pragma once
#include "Distance.h"
#include "DistanceF.h"
#include "StudentGrade.h"

void Task01() {
	/*���������� 1. ���������� �������� ��������*/
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

	/*����� ����� �������*/
	std::cout << "\ndist1 = " << dist1;
}

void Task02() {
	/*���������� 2. �������������� �������� � �������� ���� � ��������*/
	DistanceF dist1 = 2.35F;
	std::cout << "\ndist1 = " << dist1;
	float mtrs;
	mtrs = static_cast<float>(dist1);
	mtrs = dist1;
	std::cout << "\nmtrs = " << mtrs;
}

void Task03() {
	/*���������� 3. ���������� �������� ��������� ��������� �����*/
	/*���������� ���������� �������� ���������� �������� 
	� ��������� ��� ������ � ���������� ������ �����, 
	��������, �������� (���������) ������� 
	���������� � ������������� ��������*/
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
	/*���������� 4. ���������� ��������� ����������*/
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
	/*������������ ������� 11. ���������� ��������
	/*���������� 1. ���������� �������� ��������*/
	//Task01();

	/*���������� 2. �������������� �������� � �������� ���� � ��������*/	
	//Task02();

	/*���������� 3. ���������� �������� ��������� ��������� �����*/
	//Task03();

	/*���������� 4. ���������� ��������� ����������*/
	Task04();
}