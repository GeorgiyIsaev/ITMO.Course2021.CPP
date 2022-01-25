#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>
#include "Student.h"
#include <list>
#include <algorithm>

class Group
{
private:
	string name;
	list <Student> masSt;
	list <Student>::iterator iter;

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
	string getName();
};