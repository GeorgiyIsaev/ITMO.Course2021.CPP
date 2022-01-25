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
	human.push_back(new Teacher("��������", "����", "�������������", 45));
	human.push_back(new Teacher("�����", "������", "�������", 55));
	human.push_back(new Teacher("��������", "��������", "�����������", 35));
	human.push_back(new Teacher("�������", "����", "���������", 80));

	human.push_back(new Student("���������", "�����", "���������", { 3,3,3,4,5,2 }));
	human.push_back(new Student("���������", "����", "�����������", { 3,5,3,4,5,5 }));
	human.push_back(new Student("��������", "���", "���������", { 5,3,2,4,5,3 }));
	human.push_back(new Student("�����", "������", "� �����", { 3,2,3,2,5,4 }));
	human.push_back(new Student("������������", "����", "��������", { 3,3,3,4,5,6 }));
	human.push_back(new Student("�����", "������", "���������", { 3,3,3,4,5,6 }));
	human.push_back(new Student("����", "����", "������", { 3,3,5,4,5,6 }));
	human.push_back(new Student("������", "�������", "��������������", { 5,5,3,4,5,5 }));
}

void MainPolymorphism() {
	std::vector<Human*> humans;
	addVectorHuman(humans);

	for (Human* human : humans) {
		std::cout << human->GetInfo() << std::endl;
	}


}
