#pragma once
#pragma once
#include "MyInclude.h"
#include "Task01.Human.h"

class Teacher : public Human {
	// ����������� ������ teacher
public:
	// ����������� ������ Student (�,�,�, ������� ����)
	Teacher(
		std::string last_name,
		std::string name,
		std::string second_name,
		// ���������� ������� ����� �� ������� � �������������
		unsigned int work_time
	) : Human(
		last_name,
		name,
		second_name
	) {
		this->work_time = work_time;
	}
	// ��������� ���������� ������� �����
	unsigned int GetWorkTime()
	{
		return this->work_time;
	}
private:
	// ������� ����
	unsigned int work_time;
};