#include "Lab08.StudentCPP.h"
// Установка имени студента
void StudentCPP::set_name(std::string student_name)
{
	StudentCPP::name = student_name;
}
// Получение имени студента
std::string StudentCPP::get_name()
{
	return StudentCPP::name;
}
// Установка фамилии студента
void StudentCPP::set_last_name(std::string student_last_name)
{
	StudentCPP::last_name = student_last_name;
}
// Получение фамилии студента
std::string StudentCPP::get_last_name()
{
	return StudentCPP::last_name;
}
// Установка промежуточных оценок
void StudentCPP::set_scores(int scores[])
{
	for (int i = 0; i < 5; ++i) {
		StudentCPP::scores[i] = scores[i];
	}
}
// Установка среднего балла
void StudentCPP::set_average_score(double ball)
{
	StudentCPP::average_score = ball;
}
// Получение среднего балла
double StudentCPP::get_average_score()
{
	return StudentCPP::average_score;
}