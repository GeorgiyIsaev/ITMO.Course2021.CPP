#pragma once
#include "MyInclude.h"

/*����������� �������.
������� 1. ��������� ������� ��������� �������
�������� ������ �������, ������������ �������
�������������� ���� ��������� �������.
����������� ������� ������ ���� ��� � ������ ������� (���� int).
� ������� main() ��������� ������ � ��������� ���� int, long, double � char.*/


int Averge(int size, int* array) {
	int sum=0;
	for (int i = 0; i < size; i++) {
		sum += array[i];
	}
	return sum / size;
}

void MainTemplateArray() {
	int size = 10;
	int* arrInt = new int[size];


	arrInt = { 1,2,3,4,5,6,7,8,9,0 };

	delete[]arrInt;
}