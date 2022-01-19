#pragma once
#include "MyInclude.h"

/*������� 2. ���������� �������� ���������� �������
��������� ����������� ������� ���������� ����������� ����� � 
���� ���������: � ������, ��������� ����������� ������� pow(a,1.0/3),
� �� ������ � ������������ �������:
� ������� main() ������������� ������ ��������� �������.*/




double WhileCubeSqrt(double sq) {
    double x = 0, // ��������� �������� x
        x1 = sq; // �������� x-1

    while (true)
    {
        x = (1 / 3) * ((sq / (x1 * x1)) + (2 * x1));
        if (abs(x1 - x) < pow(10.0, -5.0)) //
        {
            // cout << pow(10.0, -5.0);
            break;
        }
    }
    return x;
}


void CubeSqrt() {
    double x = 5; //getValue("������� �������� ��� ������"); 
    double sq = WhileCubeSqrt(x);
    double sq2 = pow(x, 1.0 / 3);

    std::cout << sq << " " << sq2 << std::endl;
}