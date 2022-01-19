#pragma once
#include "MyInclude.h"

/*������� 4. ����������� ������� ����� ����
������������ ����������� ������� ���������� ����� ����
S = 5 + 10 + 15 + � + 5�n,
��� n>0.*/

int SumSeries(int start, int end, int mult, int step) {
    if (end >= start) {
        return start * mult + SumSeries(start + step, end, mult, step);
    }
    else {
        return 0;
    }
}


void TestRecFunction() {

    int start = GetValue("������� ������ ����: ");
    int end = GetValue("������� ����� ����: ");
    int mult = GetValue("������� ����� ��� ��������� ����: ");
    int step = GetValue("�������� ��� ����: ");

    int result = SumSeries(start, end, mult, step);
    std::cout <<"���������: " << result << "\n";



}