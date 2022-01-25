#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>
#include <list>
#include <algorithm>
#include "Student.h"
class Group
{
private:
	std::string name;
	std::list <Student> masSt;
	std::list <Student>::iterator iter;

public:
	int getSize();
	void addStudent(Student newStudent);
	void delStudent(Student oldStudent);
	/*Поиск студента*/
	Student findStudent(std::string, std::string);
	/*Сортировка*/
	void GroupSort();
	/*Инофрмация о содержиом*/
	void GroupOut();

	
	Group(std::string name);
	Group();

	void setName(std::string newName);
	std::string getName();
};