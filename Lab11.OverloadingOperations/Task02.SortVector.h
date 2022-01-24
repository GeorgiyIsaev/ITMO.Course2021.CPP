#pragma once
#include "MyInclude.h"
#include "Task02.Point.h"
/*������� 2. ���������� ���������� ����� � �������
������������ ����� Point � ����� ������ �������������
���� � x � y � ������������� � �����������, � ����� �
�������� ������� ���������� �� ������ ���������.
���������� ��� ������ Point ���������� ���������� 
�������� � ����� ������ (<<) � ��������� (<) ��� ����, 
����� ��������� �������� ���� ������� (������������ 
����������� �������� ����������):
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // ��� ��������� ����������
int main()
{
std::vector<Point> v;
v.push_back(Point(1,2));
70
v.push_back(Point(10,12));
v.push_back(Point(21,7));
v.push_back(Point(4,8));
std::sort(v.begin(), v.end()); // ��������� 
���������� ��������� < ��� // ������ Point
for (auto &point : v)
std::cout << point << '\n'; // ��������� 
���������� ��������� << ��� // ������ Point
return 0;
}
��������: ��� ���������� ��������� ��������� 
����������� �� ���������� �� ������ ���������,
����� ���������� ������� ����� ����� ���������
�� ����� ��������.*/


void MainSortVector() {
	std::vector<Point> v;
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	for (auto& point : v)
		std::cout << point << '\n';
	std::cout << std::endl;
	std::sort(v.begin(), v.end()); // ��������� 
	//���������� ��������� < ��� // ������ Point
	for (auto& point : v)
		std::cout << point << '\n'; // ��������� 
	//���������� ��������� << ��� // ������ Point
}
