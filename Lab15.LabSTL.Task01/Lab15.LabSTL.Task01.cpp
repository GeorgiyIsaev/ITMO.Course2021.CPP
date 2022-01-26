﻿#include "MyInclude.h"
#include "Map"

/*Контрольные задания
Задание 1. Организация хранения данных в контейнере
Требуется написать программу, которая позволит присваивать
оценки студентам, указывая только имя студента.
Для организации данных используйте контейнер map 
(контейнер map – это класс, в котором все элементы хранятся
в виде пары ключ-значение), ключ должен быть уникальным 
и использоваться для доступа к связанной паре: 
имя студента – ключ, оценка (тип char) - значение.
Указание. Создайте структуру (класс в принципе
не требуется для этой задачи) StudentGrade 
с двумя элементами: имя студента (std::string) 
и оценка (char).*/


struct StudentGrade {
	std::map<std::string, std::vector<char>> sstudentMarks;

	StudentGrade() {}
	std::vector<char> GetVectorMarks(std::string name) {
		return sstudentMarks[name];
	}
	void AddStudentMark(std::string name, char mark) {
		if (sstudentMarks.find(name) != sstudentMarks.cend()) {
			std::vector<char> marks = sstudentMarks[name];
			marks.push_back(mark);
			sstudentMarks[name] = marks; //обновляем значение			
		}
		else {
			//Если не найден создаем новый!
			sstudentMarks[name] = { mark };
		}
	}
	void Print() {
		for (const auto& pair : sstudentMarks)
		{
			std::cout << pair.first << "  : ";
			for (const auto& mark : pair.second)
			{
				std::cout << mark << " ";	
			}
			std::cout << std::endl;
		}
	}
};

int main()
{
	std::map<std::string, std::string> st;
}
