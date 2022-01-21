#pragma once
#include "MyInclude.h"

/*Контрольные задания
Задание 1. Передача массива в функцию
Реализуйте созданный вами функционал в упражнениях 1 и 2 в виде
соответствующих функций, которые будут принимать массив
и возвращать требуемые результаты.
Функция должна принимать два параметра: целочисленное значение
– размер массива и сам массив.*/


int* GetRandomArray(const int size)
{
	srand(time(NULL));
	int *arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = 1 + rand() % 10;
	}
	return arr;
}


void PrintArray(const int size, int* arr) {
	//Показвает информацию о треугольниках
	for (int i = 0; i < size - 2; i++)
		std::cout << arr[i] << " ";
	std::cout << "\n";		
}

int SumArray(const int size, int* arr)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}


void SortArray(const int size, int* arr)
{	
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size-1; j++) {
			if (arr[j] > arr[j + 1]) {
				int b = arr[j]; 
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
		}
	}
}



void ArrayToFunc() {
	/*Контрольные задания
	Задание 1. Передача массива в функцию*/
	const int size = 10;
	int* arr = GetRandomArray(size);
	std::cout << "Массив: ";
	PrintArray(size, arr);
	std::cout << "Сумма значений:" << SumArray(size, arr) << std::endl;
	SortArray(size, arr);
	std::cout << "Сортировка: ";
	PrintArray(size, arr);
}