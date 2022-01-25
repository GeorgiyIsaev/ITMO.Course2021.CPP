#pragma once
#include "MyInclude.h"

/*Упражнение 1. Создание шаблонной функции сортировки массива*/
void sortingNT(int arr[], int size) {
	int j = 0;
	for (int i = 0; i < size; i++) {
		int x = arr[i];
		for (j = i - 1; j >= 0 && x < arr[j]; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = x;
	}
}

template<class T>
void sorting(T arr[], int size) {
	int j = 0;
	for (int i = 0; i < size; i++) {
		T x = arr[i];
		for (j = i - 1; j >= 0 && x < arr[j]; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = x;
	}
}
void Task01() {
	/*Упражнение 1. Создание шаблонной функции сортировки массива*/
	int arr[] = { 9,3,17,6,5,4,31,2,12 };
	int k1 = sizeof(arr) / sizeof(arr[0]);
	sortingNT(arr, k1);
	for (int i = 0; i < k1; i++) std::cout << arr[i] << ";";	
}

void Task01Template() {
	/*Упражнение 1. Создание шаблонной функции сортировки массива*/
	int arr[] = { 9,3,17,6,5,4,31,2,12 };
	double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
	char arrc[] = "Hello, word";
	int k1 = sizeof(arr) / sizeof(arr[0]);
	int k2 = sizeof(arrd) / sizeof(arrd[0]);
	int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
	sorting(arr, k1);
	for (int i = 0; i < k1; i++) std::cout << arr[i] << ";";
	std::cout << std::endl;
	sorting(arrd, k2);
	for (int i = 0; i < k2; i++) std::cout << arrd[i] << ";";
	std::cout << std::endl;
	sorting(arrc, k3);
	for (int i = 0; i < k3; i++) std::cout << arrc[i] << ";";
	std::cout << std::endl;
}

void Task02() {
	/*Упражнение 2. Создание шаблонной функции для работы с кортежем*/

}

void MainLab14() {
	/*Практическое занятие 14. Использование шаблонных функций и классов*/
	/*Упражнение 1. Создание шаблонной функции сортировки массива*/
	Task01();
	Task01Template();

	/*Упражнение 2. Создание шаблонной функции для работы с кортежем*/
	Task02();

}

