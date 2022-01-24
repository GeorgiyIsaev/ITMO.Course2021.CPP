#pragma once
#include "MyInclude.h"
/*Задание 2. Реализация сортировки точек в векторе
Разработайте класс Point с двумя полями вещественного
типа – x и y и конструктором с параметрами, а также с
функцией расчета расстояния до центра координат.
Реализуйте для класса Point перегрузку операторов 
передать в поток вывода (<<) и сравнения (<) для того, 
чтобы следующий фрагмент кода работал (используется 
стандартный алгоритм сортировки):
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // для алгоритма сортировки
int main()
{
std::vector<Point> v;
v.push_back(Point(1,2));
70
v.push_back(Point(10,12));
v.push_back(Point(21,7));
v.push_back(Point(4,8));
std::sort(v.begin(), v.end()); // требуется 
перегрузка оператора < для // класса Point
for (auto &point : v)
std::cout << point << '\n'; // требуется 
перегрузка оператора << для // класса Point
return 0;
}
Указание: при перегрузке оператора сравнения 
сравнивайте по расстоянию до центра координат,
тогда сортировка вектора точек будет проходить
по этому признаку.*/


void MainSortVector() {
	std::vector<Point> v;
	v.push_back(Point(1, 2));
	70
		v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	std::sort(v.begin(), v.end()); // требуется 
	перегрузка оператора < для // класса Point
		for (auto& point : v)
			std::cout << point << '\n'; // требуется 
	перегрузка оператора << для // класса Point
}
