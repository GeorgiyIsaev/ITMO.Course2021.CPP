#pragma once
#include "MyInclude.h"

/*������� 2. ���������� �������� ���������� �������
��������� ����������� ������� ���������� ����������� ����� � 
���� ���������: � ������, ��������� ����������� ������� pow(a,1.0/3),
� �� ������ � ������������ �������:
� ������� main() ������������� ������ ��������� �������.*/




double WhileCubeSqrt(double value) {
    double x1 = value, // ��������� �������� x
        x = 0; // �������� x-1

    while (true)
    {
        x = (1.0 / 3) * ((value / (x1 * x1)) + (2 * x1));
       // std::cout << x << " " << x1 << std::endl;
        if (abs(x1 - x) < pow(10.0, -5.0))
        {
            break;
        }
        x1 = x;
    }
    return x;
}


void CubeSqrt() {  
    std::cout << pow(10.0, -5.0) << std::endl;
    double x = 8; //getValue("������� �������� ��� ������");    
    double sq_standart = pow(x, 1.0 / 3); //����������� �����
    double sq = WhileCubeSqrt(x); //������������ �����������
    std::cout << "8 sq= " << sq << "sq_st= " << sq_standart << std::endl;

    x = 27; //getValue("������� �������� ��� ������");    
    sq_standart = pow(x, 1.0 / 3); //����������� �����
    sq = WhileCubeSqrt(x); //������������ �����������
    std::cout << "27 sq= " << sq << "sq_st= " << sq_standart << std::endl;

    x = 255; //getValue("������� �������� ��� ������");    
    sq_standart = pow(x, 1.0 / 3); //����������� �����
    sq = WhileCubeSqrt(x); //������������ �����������
    std::cout << "255 sq= " << sq << "sq_st= " << sq_standart << std::endl;
}