#include "GroupMS.h"


GroupMS::GroupMS(std::string name)
{
	this->name = name;
}
GroupMS::GroupMS()
{
	name = "Не определена";
}
void GroupMS::setName(std::string newName)
{
    name = newName;
}

std::string GroupMS::getName()
{
    return name;
}

int GroupMS::getSize()
{
	return masSt.size();
}
void GroupMS::addStudent(Student* newStudent)
{
	masSt.insert(newStudent);
}
void GroupMS::delStudent(Student* oldStudent)
{
	masSt.erase(oldStudent);
}
void GroupMS::GroupOut()
{
	iter = masSt.begin();
	while (iter != masSt.end())
		(*iter++)->display();
}
Student* GroupMS::findStudent(std::string searchName, std::string searchLastName)
{
	Student* temp = new Student(searchName, searchLastName, new IdCard());
	iter = masSt.lower_bound(temp);
	delete temp;
	return (*iter);
}







