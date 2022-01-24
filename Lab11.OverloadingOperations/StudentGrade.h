#pragma once
#include "MyInclude.h"

struct StudentGrade
{
	std::string name;
	char grade;
};

class GradeMap
{
private:
	std::vector<StudentGrade> m_map;
public:
	GradeMap()
	{ }
	char& operator[](const std::string& name);
};

char& GradeMap::operator[](const std::string& name)
{
	// Найдём ли мы имя ученика в векторе
	for (auto& ref : m_map)
	{
		// Если нашли, то возвращаем ссылку на его оценку
		if (ref.name == name)
			return ref.grade;
	}
	// Не нашли - создаём новый StudentGrade для нового ученика
	StudentGrade temp{ name, ' ' };
	// Помещаем его в конец вектора
	m_map.push_back(temp);
	// И возвращаем ссылку на его оценку
	return m_map.back().grade;
}