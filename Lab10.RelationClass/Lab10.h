#pragma once
#include "MyInclude.h"
#include "IdCard.h"
#include "Student.h"


void MainLab10() {
	/*������������ ������� 10. ���������� ��������� ����� ��������*/
	/*���������� 1. ��������� ����������*/
	IdCard* idc = new IdCard(123, "�������");
	std::string name = "���";
	std::string last_name = "�����";
	Student* student02 = new Student(name, last_name, idc);
	std::cout << "IdCard: " << student02->getIdCard().getNumber() << std::endl;
	std::cout << "Category: " << student02->getIdCard().getCategory() << std::endl;

}