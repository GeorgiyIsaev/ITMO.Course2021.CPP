#pragma once /* ������ �� �������� ����������� ������������� ����� */
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
	/*����� ��������*/
	Student* findStudent(std::string, std::string);
	/*���������� � ���������*/
	void GroupOut();

	
	GroupMS(std::string name);
	GroupMS();

	void setName(std::string newName);
	std::string getName();
};