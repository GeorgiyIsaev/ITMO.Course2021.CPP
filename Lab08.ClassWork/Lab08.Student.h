#pragma once
#include "MyInclude.h"

class StudentOne
{
public:
	// ��������� ����� ��������
	void set_name(std::string student_name)
	{
		name = student_name;
	}
	// ��������� ����� ��������
	std::string get_name()
	{
		return name;
	}
	// ��������� ������� ��������
	void set_last_name(std::string student_last_name)
	{
		last_name = student_last_name;
	}
	// ��������� ������� ��������
	std::string get_last_name()
	{
		return last_name;
	}
	// ��������� ������������� ������
	void set_scores(int student_scores[])
	{
		for (int i = 0; i < 5; ++i) {
			scores[i] = student_scores[i];
		}
	}
	// ��������� �������� �����
	void set_average_score(double ball)
	{
		average_score = ball;
	}
	// ��������� �������� �����
	double get_average_score()
	{
		return average_score;
	}
private:
	int scores[5]; // ������������� ������
	double average_score; // ������� ����
	std::string name; // ���
	std::string last_name; // �������
};

void MainStudent() {
	// �������� ������� ������ Student
	StudentOne student01;
	std::string name;
	std::string last_name;
	int scores[5];
	// ���� ����� � ����������
	std::cout << "Name: ";
	getline(std::cin, name);
	// ���� �������
	std::cout << "Last name: ";
	getline(std::cin, last_name);
	// ����� ���� ������
	int sum = 0;
	// ���� ������������� ������
	for (int i = 0; i < 5; ++i) {
		std::cout << "Score " << i + 1 << ": ";
		std::cin >> scores[i];
		// ������������
		sum += scores[i];
	}
	// ���������� ����� � ������� � ������ ������ Student
	student01.set_name(name);
	student01.set_last_name(last_name);
	// ���������� ������������� ������ � ������ ������ Student
	student01.set_scores(scores);
	double average_score = sum / 5.0;
	// ���������� �������� ����� � ������ ������ Student
	student01.set_average_score(average_score);
	std::cout << "Average ball for " << student01.get_name() << " "
		<< student01.get_last_name() << " is "
		<< student01.get_average_score() << std::endl;
}