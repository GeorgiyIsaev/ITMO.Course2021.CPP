#pragma once
#include "MyInclude.h"

/*������� 3. ������ � ���������� ��������������
��������� �������� ���������, �������������� ������� �������������
���� �����: ��������������� � ���������������.
��� ������� ������ ���������� ������������� �������: ������ ������
��������� ���� �������� � ������� � ��������� ������� ���������������
23
������������, ������ � ��������� ��� ���������-������� ������������
��� ���������� ������� ��������������� ������������.
����� ���� ������������ ���������� � ������� ������� � �������������.*/


double calculateTriangleArea(double side) { 
    double halfPerim = (side * 3) / 2;
    return sqrt((halfPerim * (halfPerim - side) * (halfPerim - side) * (halfPerim - side)));
}

double calculateTriangleArea(double side, double side2, double side3) { 
    double halfPerim = (side + side2 + side3) / 2;
    return sqrt((halfPerim * (halfPerim - side) * (halfPerim - side2) * (halfPerim - side3)));
}


double EquilateralTriangleMenu() {
    //��� ������������� ������������
    double side = getValue("������� �������� ������� ������������: ");
    double area = calculateTriangleArea(side);
    return area;
}
double VersatileTriangleMenu() {
    //��� ��������������� ������������
    double side1 = getValue("������� ������� 1: ");
    double side2 = getValue("������� ������� 2: ");
    double side3 = getValue("������� ������� 3: ");
    double area = calculateTriangleArea(side1, side2, side3);
    return area;
}


void TriangleMenu() {
    while (true) {
        std::cout << "����:\n";
        std::cout << "1-�������������� �����������\n";
        std::cout << "2-�������������� �����������\n";
        std::cout << "0-�����\n>>";
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
        std::cout << "������� ����������� =" << area << std::endl;
    }
}