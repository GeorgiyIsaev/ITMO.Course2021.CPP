#pragma once
#include "MyInclude.h"
#include "Task01.Student.h"
#include "Task01.Teacher.h"

/*����������� �������
������� 1. ����������� � ������� ������� �������� ������
��������� ����������� ����������� ����� �������
����������� ������� �������, ��������� � �����������
����������� ������������� �������.*/

void MainPolymorphism() {
	std::vector<Human> human;
	human.push_back(Teacher("��������", "����", "�������������", 25));
	human.push_back(Teacher("�����", "������", "�������", 25));
	human.push_back(Teacher("��������", "��������", "�����������", 25));
	human.push_back(Teacher("�������", "����", "���������", 25));

	human.push_back(Student("���������", "�����", "���������", {3,3,3,4,5,6}));
	human.push_back(Student("���������", "����", "�����������", { 3,3,3,4,5,6 }));
	human.push_back(Student("��������", "���", "���������", { 3,3,3,4,5,6 }));
	human.push_back(Student("�����", "������", "� �����", { 3,3,3,4,5,6 }));
	human.push_back(Student("������������", "����", "��������", { 3,3,3,4,5,6 }));
	human.push_back(Student("�����", "������", "���������", { 3,3,3,4,5,6 }));
	human.push_back(Student("����", "����", "������", { 3,3,3,4,5,6 }));
	human.push_back(Student("������", "�������", "��������������", { 3,3,3,4,5,6 }));
}
