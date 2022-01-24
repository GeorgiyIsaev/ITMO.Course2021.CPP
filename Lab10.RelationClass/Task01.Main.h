#pragma once
#include "Task01.Dot.h"
#include "Task01.Triangle.h"
#include "Task01.TriangleR.h"

/*Контрольные задания
Задание 1. Реализация класса Triangle
В этом задании требуется создать класс Triangle, 
определяемый тремя точками – объектами соответсвующего класса Dot.
Элементы класса Triangle:
• Три точки – объекты класса Dot.
• Конструктор.
• Методы, позволяющие:
− вывести длины сторон треугольника;
− расчитать периметр треугольника;
− расчитать площадь треугольника
Класс Dot:
Определяется двумя координатами и функцией – расстоянием между точками.

Реализуйте два варианта отношений между треугольником (целое) 
и точкой (часть) – как композиция (целое отвечает
за жизненный цикл части) и как агрегация 
(часть и целое могут существовать по-отдельности).*/


void MainTaskTriangle() {

	/*(целое отвечает за жизненный цикл части) и как агрегация 
	(часть и целое могут существовать по-отдельности)*/
	Dot dotA(2,2);
	Dot dotB(2, 0);
	Dot dotC(5, 2);
	Triangle tringle(dotA, dotB, dotC);
	std::cout << tringle.StrLengthSides() << " P = "
		<< tringle.Perimeter() << "; S = " << tringle.Area() << std::endl;


	/*целое) и точкой (часть) – как композиция*/
	Dot* dotAt = new Dot(2, 2);
	Dot* dotBt = new Dot(2, 0);
	Dot* dotCt = new Dot(5, 2);
	TriangleR* tringleR = new TriangleR(dotAt, dotBt, dotCt);
	std::cout << tringleR->StrLengthSides() 
		<< " P = " << tringleR->Perimeter() 
		<< "; S = " << tringleR->Area() << std::endl;
}