#pragma once
#include "MyInclude.h"
#include "Human.h"


void Task01() {
	/*���������� 1. �������� �������� �������*/
	human hum("�����", "��������", "��������");
	std::vector<int> scores{ 1,2,3,4,5,2,5,3,2,5 };
	student stud("�����", "��������", "��������", scores);
	std::cout<<	hum.get_full_name() <<std::endl;
	std::cout << stud.get_full_name() << std::endl;
	std::cout <<"������� ������: "<< stud.get_average_score() << std::endl;

}

void Task02() {
	/*���������� 2. �������� ������� ������ student*/
	// ��������������	
	std::vector<int> scores;
	// ���������� ������ �������� � ������
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	student* stud = new student("������", "����", "����������", scores);
	std::cout << stud->get_full_name() << std::endl;
	std::cout << "������� ���� : " << stud->get_average_score() << std::endl;
}

void MainLab12() {
	/*������������ ������� 12. ���������� ������������*/
	/*���������� 1. �������� �������� �������*/
	Task01();
	/*���������� 2. �������� ������� ������ student*/
	Task02()

}
