#pragma once /* ������ �� �������� ����������� ������������� ����� */
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
	/*����� ��������*/
	Student findStudent(std::string, std::string);
	/*����������*/
	void GroupSort();
	/*���������� � ���������*/
	void GroupOut();

	
	Group(std::string name);
	Group();

	void setName(std::string newName);
	string getName();
};