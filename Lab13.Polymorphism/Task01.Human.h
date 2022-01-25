#pragma once
#include "MyInclude.h"

class Human {
public:
	// Конструктор класса human
	Human(std::string last_name, std::string name, std::string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	// Получение ФИО человека
	std::string GetFullName()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}
	virtual std::string GetInfo() { return ""; }
protected:
	std::string name; // имя
	std::string last_name; // фамилия
	std::string second_name; // отчество
};
