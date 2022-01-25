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

	Group(string name);
	Group();

	void setName(string newName);
	string getName();
};