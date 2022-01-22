#pragma once
#include "MyInclude.h"

class Student
{
public:
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
private:
	int scores[5]; // Промежуточные оценки
	double average_score; // Средний балл
	std::string name; // Имя
	std::string last_name; // Фамилия
};

// Установка имени студента
void Student::set_name(std::string student_name)
{
	Student::name = student_name;
}
// Получение имени студента
std::string Student::get_name()
{
	return Student::name;
}
// Установка фамилии студента
void Student::set_last_name(std::string student_last_name)
{
	Student::last_name = student_last_name;
}
// Получение фамилии студента
std::string Student::get_last_name()
{
	return Student::last_name;
}
// Установка промежуточных оценок
void Student::set_scores(int scores[])
{
	for (int i = 0; i < 5; ++i) {
		Student::scores[i] = scores[i];
	}
}
// Установка среднего балла
void Student::set_average_score(double ball)
{
	Student::average_score = ball;
}
// Получение среднего балла
double Student::get_average_score()
{
	return Student::average_score;
}



void MainStudentHCPP() {
	// Создание объекта класса Student
	Student student01;
	std::string name;
	std::string last_name;
	int scores[5];
	// Ввод имени с клавиатуры
	std::cout << "Name: ";
	getline(std::cin, name);
	// Ввод фамилии
	std::cout << "Last name: ";
	getline(std::cin, last_name);
	// Сумма всех оценок
	int sum = 0;
	// Ввод промежуточных оценок
	for (int i = 0; i < 5; ++i) {
		std::cout << "Score " << i + 1 << ": ";
		std::cin >> scores[i];
		// суммирование
		sum += scores[i];
	}
	// Сохранение имени и фамилии в объект класса Student
	student01.set_name(name);
	student01.set_last_name(last_name);
	// Сохранение промежуточных оценок в объект класса Student
	student01.set_scores(scores);
	double average_score = sum / 5.0;
	// Сохранение среднего балла в объект класса Student
	student01.set_average_score(average_score);
	std::cout << "Average ball for " << student01.get_name() << " "
		<< student01.get_last_name() << " is "
		<< student01.get_average_score() << std::endl;
}