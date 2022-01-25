#pragma once
#include "MyInclude.h"
#include "Task01.Student.h"
#include "Task01.Teacher.h"

/*����������� �������
������� 1. ����������� � ������� ������� �������� ������
��������� ����������� ����������� ����� �������
����������� ������� �������, ��������� � �����������
����������� ������������� �������.*/


void addVectorHuman(std::vector<Human*>& human) {
	human.push_back(new Teacher("��������", "����", "�������������", 25));
	human.push_back(new Teacher("�����", "������", "�������", 25));
	human.push_back(new Teacher("��������", "��������", "�����������", 25));
	human.push_back(new Teacher("�������", "����", "���������", 25));

	human.push_back(new Student("���������", "�����", "���������", { 3,3,3,4,5,6 }));
	human.push_back(new Student("���������", "����", "�����������", { 3,3,3,4,5,6 }));
	human.push_back(new Student("��������", "���", "���������", { 3,3,3,4,5,6 }));
	human.push_back(new Student("�����", "������", "� �����", { 3,3,3,4,5,6 }));
	human.push_back(new Student("������������", "����", "��������", { 3,3,3,4,5,6 }));
	human.push_back(new Student("�����", "������", "���������", { 3,3,3,4,5,6 }));
	human.push_back(new Student("����", "����", "������", { 3,3,3,4,5,6 }));
	human.push_back(new Student("������", "�������", "��������������", { 3,3,3,4,5,6 }));
}

void MainPolymorphism() {
	std::vector<Human*> humans;
	addVectorHuman(humans);

	for (Human* human : humans) {
		std::cout << human->GetFullName() << std::endl;
	}


}
