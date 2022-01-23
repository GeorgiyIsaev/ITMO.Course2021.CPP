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
	std::string text = std::to_string(yaer) + ": ";
	//���� ������� �� 4 � �� ������� �� 100
	//��� ���� ������� �� 400, �� ������� ���� �� �����!
	if ((yaer % 4 == 0 && yaer % 100 != 0) || yaer % 400 == 0)
	{
		text += "���������� ���";
	}
	else
	{
		text += "�� ���������� ���";
	}
	return text;
}

void LeapYaer() {
	/*����������� �������.
	/*������� 1. ����������� ����������� ����*/
	int yaer = getYear();
	std::string text = IsLeap(yaer);
	std::cout << text << std::endl;
}