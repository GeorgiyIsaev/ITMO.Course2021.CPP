#include "Group.h"


Group::Group(std::string name)
{
	this->name = name;
}
Group::Group()
{
	name = "Не определена";
}
void Group::setName(std::string newName)
{
    name = newName;
}

std::string Group::getName()
{
    return name;
}

int Group::getSize()
{
	return masSt.size();
}
void Group::addStudent(Student newStudent)
{
	masSt.push_back(newStudent);
}
void Group::delStudent(Student oldStudent)
{
	masSt.remove(oldStudent);
}
void Group::GroupOut()
{
	iter = masSt.begin();
	while (iter != masSt.end())
		(*iter++).display();
}
Student Group::findStudent(std::string searchName, std::string searchLastName)
{
	Student temp(searchName, searchLastName, new IdCard());
	iter = find(masSt.begin(), masSt.end(), temp);
	return(*iter);
}

void Group::GroupSort()
{
	masSt.sort();
}






