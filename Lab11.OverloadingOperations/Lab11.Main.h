#pragma once
#include "Distance.h"
#include "DistanceF.h"

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


void MainLab11() {
	/*������������ ������� 11. ���������� ��������
	/*���������� 1. ���������� �������� ��������*/
	Task01();

	/*���������� 2. �������������� �������� � �������� ���� � ��������*/	

	DistanceF dist1 = 2.35F;
	std::cout << "\ndist1 = " << dist1;
	float mtrs;
	mtrs = static_cast<float>(dist1);
	mtrs = dist1;
	std::cout << "\nmtrs = " << mtrs;
}