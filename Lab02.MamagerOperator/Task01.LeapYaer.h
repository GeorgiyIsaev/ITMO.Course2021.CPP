#pragma once
#include <iostream>
#include <string>



/*
������� 1. ����������� ����������� ����
���� ����������� �����.
��������� ����������, �������� �� ��� � ������ ������� ����������. ���� ���
�������� ����������, �� �������� YES, ����� �������� NO.
� ��� �������� ����������, ���� ��� ����� ������ 4, �� �� ������ 100, �
�����, ���� �� ������ 400.
*/




int getYear() {
	std::cout << "������� ��� >> ";
	std::string textYaer;
	std::cin >> textYaer;
	int year = 0;
	try {
		year = stoi(textYaer);
	}
	catch(int ex)
	{
		std::cout << "ERROR: �������� �������� �� �����! ";
		getYear();
	}
	return year;
}


std::string IsLeap(int yaer) {
	std::string text = std::to_string(year) + ": ";
	//���� ������� �� 4 � �� ������� �� 100
	//��� ���� ������� �� 400, �� ������� ���� �� �����!
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		text += "���������� ���";
	}
	else
	{
		text += "�� ���������� ���";
	}
}

void LeapYaer() {
	int year = getYear();
	std::string text = IsLeap(year);
	std::cout << text << std::endl;
}