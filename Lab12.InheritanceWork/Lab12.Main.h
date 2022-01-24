#pragma once
#include "MyInclude.h"
#include "Human.h"


void Task01() {
	/*Упражнение 1. Создание иерархии классов*/
	human hum("Лешка", "Картошка", "Антошкин");
	std::vector<int> scores{ 1,2,3,4,5,2,5,3,2,5 };
	student stud("Лешка", "Картошка", "Антошкин", scores);
	std::cout<<	hum.get_full_name() <<std::endl;
	std::cout << stud.get_full_name() << std::endl;
	std::cout <<"Средняя оценка: "<< stud.get_average_score() << std::endl;

}

void Task02() {
	/*Упражнение 2. Создание объекта класса student*/
	// Оценкистудента	
	std::vector<int> scores;
	// Добавление оценок студента в вектор
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	student* stud = new student("Петров", "Иван", "Алексеевич", scores);
	std::cout << stud->get_full_name() << std::endl;
	std::cout << "Средний балл : " << stud->get_average_score() << std::endl;
}

void MainLab12() {
	/*Практическое занятие 12. Реализация наследования*/
	/*Упражнение 1. Создание иерархии классов*/
	Task01();
	/*Упражнение 2. Создание объекта класса student*/
	Task02()

}
