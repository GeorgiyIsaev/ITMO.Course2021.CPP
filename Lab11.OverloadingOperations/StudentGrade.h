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
	// ����� �� �� ��� ������� � �������
	for (auto& ref : m_map)
	{
		// ���� �����, �� ���������� ������ �� ��� ������
		if (ref.name == name)
			return ref.grade;
	}
	// �� ����� - ������ ����� StudentGrade ��� ������ �������
	StudentGrade temp{ name, ' ' };
	// �������� ��� � ����� �������
	m_map.push_back(temp);
	// � ���������� ������ �� ��� ������
	return m_map.back().grade;
}