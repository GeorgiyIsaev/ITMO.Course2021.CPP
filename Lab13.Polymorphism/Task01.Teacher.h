#pragma once
#pragma once
#include "MyInclude.h"
#include "Task01.Human.h"

class Teacher : public Human {
	// Конструктор класса teacher
public:
	// Конструктор класса Student (Ф,И,О, учебные часы)
	Teacher(
		std::string last_name,
		std::string name,
		std::string second_name,
		// Количество учебных часов за семестр у преподавателя
		unsigned int work_time
	) : Human(
		last_name,
		name,
		second_name
	) {
		this->work_time = work_time;
	}
	// Получение количества учебных часов
	unsigned int GetWorkTime()
	{
		return this->work_time;
	}
	virtual std::string GetInfo() {
		std::ostringstream workTime;
		workTime << std::fixed << std::setprecision(1) << GetWorkTime();
		return "УЧИТЕЛЬ: [" + last_name + " " + name + " " + second_name + "] Учебных часов:" + workTime.str();
	}
private:
	// Учебные часы
	unsigned int work_time;
};