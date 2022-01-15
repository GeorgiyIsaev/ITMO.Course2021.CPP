#pragma once
#include <iostream>
#include <string>

/*������� 2. ����������� ����������� �� ���� �����
���� ��� �����.
��������� ���������� ���������� �� ��� � ������� �� �����.*/

int MaxValue(int val01, int val02) {
	if (val01 >= val02) return val01;	
	else return val02;
}

int MaxValue(int size, int *array) {
	int max = 0;
	for (int i = 0; i < size - 1; i++) {
		max = MaxValue(array[i], array[i + 1]);
	}
	return max;
}

int* getValueArr(int size) {
	std::cout << "�������  " << size << " �����: ";
	int* array = new int [size];
	for (int i = 0; i < size; i++) {
		std::cin >> array[i];
	}
	return array;
}


void MaxValue() {
	int size = 3;
	int* array = getValueArr(size);
	int maxValue = MaxValue(size, array);
	std::cout << "������������ �����: " << maxValue << std::endl;
}