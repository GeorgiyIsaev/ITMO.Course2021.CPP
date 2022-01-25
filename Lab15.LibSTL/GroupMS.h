#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>
#include <list>
#include <algorithm>
#include "Student.h"
#include <set>

class GroupMS
{
private:
	std::string name;
	std::multiset<Student*, compareStudent> masSt;
	std::multiset<Student*, compareStudent>::iterator iter;

public:
	int getSize();
	void addStudent(Student* newStudent);
	void delStudent(Student* oldStudent);
	/*Поиск студента*/
	Student* findStudent(std::string, std::string);
	/*Инофрмация о содержиом*/
	void GroupOut();

	
	GroupMS(std::string name);
	GroupMS();

	void setName(std::string newName);
	std::string getName();
};