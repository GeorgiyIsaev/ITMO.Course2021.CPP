#pragma once
#include "MyInclude.h"
#include "Lab08.StudentCPP.h"

void MainObjStudent() {
	// ��������� ������ ��� ������� Student
	StudentCPP* student02 = new StudentCPP;
	std::string name;
	std::string last_name;
	// ���� ����� � ����������
	std::cout << "Name: ";
	getline(std::cin, name);
	// ���� �������
	std::cout << "Last name: ";
	getline(std::cin, last_name);
	// ������
	int scores[5];
	// ����� ���� ������
	int sum = 0;
	// ���� ������������� ������
	for (int i = 0; i < 5; ++i) {
		std::cout << "Score " << i + 1 << ": ";
		std::cin >> scores[i];
		// ������������
		sum += scores[i];
	}
	// ���������� ����� � ������� � ������ ������ Students
		student02->set_name(name);
	student02->set_last_name(last_name);
	// ��������� ������������� ������ � ������ ������ Student
	student02->set_scores(scores);
	// ������� ������� ����
	float average_score = sum / 5.0;
	// ��������� ������� ���� � ������ ������ Student
	student02->set_average_score(average_score);
	// ������� ������ �� ��������
	std::cout << "Average ball for " << student02->get_name() << " "
		<< student02->get_last_name() << " is "
		<< student02->get_average_score() << std::endl;
	delete student02;
}