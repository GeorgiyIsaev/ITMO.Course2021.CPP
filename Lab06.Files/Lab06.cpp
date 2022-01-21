#pragma once
#include "MyInclude.h"



void MainLab06() {
	/*Практическое занятие 6. Работа с файлами*/
	/*Упражнение 1. Запись и чтение данных из бинарного файла*/
	double sum = 0;
	int const n = 100;
	double nums[n];
	for (int i = 0; i < n; i++)
	{
		nums[i] = (rand() % 100);
	}	
	std::ofstream out("test", std::ios::out | std::ios::binary);
	if (!out) {
		std::cout << "Файл открыть невозможно\n";		
	}
}