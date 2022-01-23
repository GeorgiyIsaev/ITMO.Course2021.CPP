#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <time.h>
#include <fstream> //�������� ������
#include <windows.h>
#include <tuple> //�������
#include <vector> //�������
#include <iomanip>
#include <sstream>
#include "IdCard.h"


class Student
{
public:
	//�����������
	//Student(std::string name, std::string last_name);
	Student(std::string name, std::string last_name, IdCard* id);

	// ��������� ����� ��������
	void set_name(std::string student_name);
	// ��������� ����� ��������
	std::string get_name();
	// ��������� ������� ��������
	void set_last_name(std::string student_last_name);
	// ��������� ������� ��������
	std::string get_last_name();
	// ��������� ������������� ������
	void set_scores(int student_scores[]);
	// ��������� �������� �����
	void set_average_score(double ball);
	// ��������� �������� �����
	double get_average_score();

	// ������ ������ � �������� � ����
	void save();
	// ���������� ������ Student
	~Student();

	void setIdCard(IdCard* c);
	IdCard getIdCard();
private:
	int scores[5]; // ������������� ������
	double average_score; // ������� ����
	std::string name; // ���
	std::string last_name; // �������
	IdCard* iCard;
};



