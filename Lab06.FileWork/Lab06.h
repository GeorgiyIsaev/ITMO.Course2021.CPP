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
	/*Создаим объект <fstream>*/
	std::ofstream out("test", std::ios::out | std::ios::binary);
	if (!out) {
		std::cout << "Файл открыть невозможно\n";		
	}
	/*Сохраним поток в буфер*/
	out.write((char*)nums, sizeof(nums));
	/*Закроем поток*/
	out.close();

	/// /// ///
	/*Откроем файл*/
	std::ifstream in("test", std::ios::in | std::ios::binary);
	if (!in) {
		std::cout << "Файл открыть невозможно";		
	}
	/*Прочтем данные из файла*/
	in.read((char*)&nums, sizeof(nums));
	int k = sizeof(nums) / sizeof(double);
	for (int i = 0; i < k; i++)
	{
		sum = sum + nums[i];
		std::cout << nums[i] << ' ';
	}
	std::cout << "\nsum = " << sum << std::endl;
	in.close(); //Закроем поток!
}
