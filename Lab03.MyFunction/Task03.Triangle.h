#pragma once
#include "MyInclude.h"

/*Задание 3. Работа с различными треугольниками
Требуется написать программу, рассчитывающее площадь треугольников
двух типов: равностороннего и разностороннего.
Для решения задачи реализуйте перегруженные функции: первая должна
принимать один параметр – сторону и вычислять площадь равностороннего
23
треугольника, вторая – принимать три параметра-стороны треугольника
для вычисления площади разностороннего треугольника.
Выбор типа треугольника реализуйте с помощью диалога с пользователем.*/


double calculateTriangleArea(double side) { 
    double halfPerim = (side * 3) / 2;
    return sqrt((halfPerim * (halfPerim - side) * (halfPerim - side) * (halfPerim - side)));
}

double calculateTriangleArea(double side, double side2, double side3) { 
    double halfPerim = (side + side2 + side3) / 2;
    return sqrt((halfPerim * (halfPerim - side) * (halfPerim - side2) * (halfPerim - side3)));
}


double EquilateralTriangleMenu() {
    //для равносторнего треугольника
    double side = getValue("Введите значение стороны треугольника: ");
    double area = calculateTriangleArea(side);
    return area;
}
double VersatileTriangleMenu() {
    //для разносторонеего треугольника
    double side1 = getValue("Введите сторону 1: ");
    double side2 = getValue("Введите сторону 2: ");
    double side3 = getValue("Введите сторону 3: ");
    double area = calculateTriangleArea(side1, side2, side3);
    return area;
}


void TriangleMenu() {
    while (true) {
        std::cout << "МЕНЮ:\n";
        std::cout << "1-Равносторонний треугольник\n";
        std::cout << "2-РАЗНОсторонний треугольник\n";
        std::cout << "0-Выход\n>>";
        std::string str = "";
        std::cin >> str;
        if (str == "0") {
            break;
        }
        double area;
        if (str == "1") {
            area = EquilateralTriangleMenu();
        }
        else if (str == "2") {
            area = VersatileTriangleMenu();
        }
        std::cout << "Площадь треугольник =" << area << std::endl;
    }
}