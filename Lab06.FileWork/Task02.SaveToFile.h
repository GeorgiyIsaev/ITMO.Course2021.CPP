#pragma once
#include "MyInclude.h"

/*Задание 2. Сохранение данных в текстовый файл
В решении упражнения 2 занятия 5 создайте текстовый файл
и запишите в него два массива: исходный и отсортированный.*/


/*Функции для работы с массивом*/
int* GetRandomArray(const int size)
{
	srand(time(NULL));
	int* arr = new int[size];
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
void SortArray(const int size, int* arr)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {				
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;				
			}
		}	
	}
}

/*Функции для работы с файлом*/
bool WriteArrayToFile(const int size, int* arr, std::string nameFile = "ArrFile.txt") {
	//std::ios::app - опция для дозаписи в файл
	std::ofstream out(nameFile);
	if (!out)
	{
		std::cout << "Файл открыть невозможно\n";
		return false;
	}
	if (out.is_open())
	{
		for (int i = 0; i < size; i++) {
			out << arr[i]<< std::endl;
		}		
	}
	out.close();
	return true;
}

int* ReadArrayFromFile(std::string nameFile = "ArrFile.txt") {
	std::string temp;
	int size = 0; 
	int* arr = new int[size]; 
	int* tempArr;

	std::ifstream in(nameFile); // окрываем файл для чтения
	if (in.is_open())
	{
		while (getline(in, temp))
		{
			size++;
			tempArr = new int[size];
			for (int i = 0; i < size-1; i++) {
				tempArr[i] = arr[i];
			}
			tempArr[size - 1] = stoi(temp);
			arr = tempArr;
		}
	}
	in.close();     // закрываем файл
	return arr;
}




void SaveToFile() {
	const int size = 10;
	int *array = GetRandomArray(size);
	WriteArrayToFile(size, array, "ArrFile.txt");
	PrintArray(size, array);
	SortArray(size, array);
	WriteArrayToFile(size, array, "ArrSortFile.txt");
	PrintArray(size, array);
	delete[] array;

	/*Чтение*/
	int* arrayFromFile = ReadArrayFromFile("ArrFile.txt");
	PrintArray(size, arrayFromFile);
	int* arraySortFromFile = ReadArrayFromFile("ArrSortFile.txt");
	PrintArray(size, arraySortFromFile);
	delete[] arrayFromFile;
	delete[] arraySortFromFile;	
}

