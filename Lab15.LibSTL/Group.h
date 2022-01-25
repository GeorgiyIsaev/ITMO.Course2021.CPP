#pragma once /* ������ �� �������� ����������� ������������� ����� */
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
	/*����� ��������*/
	Student findStudent(std::string, std::string);
	/*����������*/
	void GroupSort();
	/*���������� � ���������*/
	void GroupOut();

	
	Group(std::string name);
	Group();

	void setName(std::string newName);
	std::string getName();
};