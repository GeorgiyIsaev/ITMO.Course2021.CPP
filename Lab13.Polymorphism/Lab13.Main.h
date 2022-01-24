#pragma once
#include "MyInclude.h"
#include "Item.h"
#include "Paperbook.h"
#include "AudioBook.h"


void Task01(){
	/*Упражнение 1. Реализация полиморфного вызова*/
	Item* pubarr[100];
	int n = 0;
	char choice;
	do
	{
		std::cout << "\nВводить данные для книги или звукового файла(b/a) ? ";
		std::cin >> choice;
		if (choice == 'b')
			pubarr[n] = new Paperbook;
		else
			pubarr[n] = new AudioBook;
		pubarr[n++]->getdata();
		std::cout << "Продолжать(у/n) ? ";
		std::cin >> choice;
	} while (choice == 'y');

	for (int j = 0; j < n; j++) //цикл по всем объектам
		pubarr[j]->putdata(); //вывести данные о публикации
	std::cout << std::endl;
}

void MainLab13() {
	/*Практическое занятие 13. Применение полиморфизма*/
	/*Упражнение 1. Реализация полиморфного вызова*/
	Task01();
}

