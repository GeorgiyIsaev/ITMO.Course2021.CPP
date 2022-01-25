#pragma once
#include "MyInclude.h"

/*����������� �������.
������� 1. ��������� ������� ��������� �������
�������� ������ �������, ������������ �������
�������������� ���� ��������� �������.
����������� ������� ������ ���� ��� � ������ ������� (���� int).
� ������� main() ��������� ������ � ��������� ���� int, long, double � char.*/

template<class T>
T Averge(int size, T* array) {
	T sum=0;
	for (int i = 0; i < size; i++) {
		sum += array[i];
	}
	return sum / size;
}

template<class T>
std::string StrArr(int size, T* array) {
	std::ostringstream ost;
	ost << std::fixed << std::setprecision(1) <<"[";
	for (int i = 0; i < size; i++) {
		ost << array[i] << ";";
	}
	ost << "]";
	return ost.str();
}

void MainTemplateArray() {	
	int size = 10;
	std::cout << "������ Int:\n";
	int* arrInt = new int[size];
	for (int i = 0; i < size; i++)
		arrInt[i] = (rand() % 10 + 1);
	std::cout << StrArr(size, arrInt) << std::endl;
	std::cout << "������� ��������������: " << Averge(size, arrInt) << std::endl;
	delete[]arrInt;


	std::cout << "\n������ long:\n";
	long* arrLong = new long[size];
	for (int i = 0; i < size; i++)
		arrLong[i] = (rand() % 100000000000 + 1);
	std::cout << StrArr(size, arrLong) << std::endl;
	std::cout << "������� ��������������: " << Averge(size, arrLong) << std::endl;
	delete[]arrLong;

	std::cout << "\n������ Double:\n";
	double* arrDouble = new double[size];
	for (int i = 0; i < size; i++)
		arrDouble[i] = (rand() % 10 + 1) / double((rand() % 10 + 1));
	std::cout << StrArr(size, arrDouble) << std::endl;
	std::cout << "������� ��������������: " << Averge(size, arrDouble) << std::endl;
	delete[]arrDouble;

	std::cout << "\n������ char:\n";
	char* arrChar = new char[size];
	for (int i = 0; i < size; i++)
		arrChar[i] = (char)(rand() % 200 + 1);
	std::cout << StrArr(size, arrChar) << std::endl;
	std::cout << "������� ��������������: " << Averge(size, arrChar) << std::endl;
	delete[]arrChar;


}