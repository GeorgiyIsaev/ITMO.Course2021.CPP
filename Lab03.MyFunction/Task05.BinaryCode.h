#pragma once
#include "MyInclude.h"

/*������� 5. ���������� �������� ��� �������� ������ �����
� �������� ���
��������� �������� ����������� ������� �������� ������ 
�������������� ����� �� ���������� ������� ���������� � ��������.
������������ �������� ��������: ����� ������� �������� num 
������ �� 2 �� ��� ���, ���� num>2. ��� ������ ������� �����
�������� ������� � ������� ��������� num%2.*/


int ConvertToBinary(int num)
{
    if (num < 2)
        return num;
    else
        return (10 * ConvertToBinary(num / 2) + num % 2);
}


void TestBinaryCode() {
    int input = GetValue("������� �����: ");
    long inBinary = ConvertToBinary(input);
    std::cout  << "�������� �������� ��� ����� " << input << " : " << inBinary << "\n";
 
}