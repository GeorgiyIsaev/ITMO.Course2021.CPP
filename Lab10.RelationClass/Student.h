#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <time.h>
#include <fstream> //Файловые потоки
#include <windows.h>
#include <tuple> //кортежи
#include <vector> //вектора
#include <iomanip>
#include <sstream>
#include "IdCard.h"


class Student
{
public:
	//конструктор
	//Student(std::string name, std::string last_name);
	Student(std::string name, std::string last_name, IdCard* id);

	// Установка имени студента
	void set_name(std::string student_name);
	// Получение имени студента
	std::string get_name();
	// Установка фамилии студента
	void set_last_name(std::string student_last_name);
	// Получение фамилии студента
	std::string get_last_name();
	// Установка промежуточных оценок
	void set_scores(int student_scores[]);
	// Установка среднего балла
	void set_average_score(double ball);
	// Получение среднего балла
	double get_average_score();

	// Запись данных о студенте в файл
	void save();
	// Деструктор класса Student
	~Student();

	void setIdCard(IdCard* c);
	IdCard getIdCard();
private:
	int scores[5]; // Промежуточные оценки
	double average_score; // Средний балл
	std::string name; // Имя
	std::string last_name; // Фамилия
	IdCard* iCard;
};



