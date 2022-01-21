#pragma once
#include "MyInclude.h"

/*������� 1. ������ ������ � ����
��������� �������� ��������� ��� ������ ����������
������������� � ���������� � ��������� ����.*/

std::string GetText() {
	return "���� �� �������� � ������� �����.\n"
		"������������ � ������ ���� �������,\n"
		"��� �������� �������, ����� ������,\n"
		"�������� ���� ����� ��� �����,\n"
		"�����, � �������, � ������� � ����,\n"
		"��� ����� �� ���� ������� ����;\n"
		"����� ���� �������� � ������ �����\n"
		"� ��������� ����� : ������ ������!\n"
		"�� ������� �����; ����, ����, ����!\n"
		"����, ��� �� ����� ������ ����,\n"
		"����, ��� ������ ������� ����,\n"
		"����, ��� ������ ���� ������ �� �!..\n";
}

std::string GetText(bool b) {
	std::cout << "������� ���� [��� ���������� ����� - ;]\n";
	char str[256];
	std::cin.getline(str, 256, ';');
	std::string text = str;
	return text;
}

bool WriteTextToFile(const std::string& text, std::string nameFile = "TestFile.txt") {
	//std::ios::app - ����� ��� �������� � ����
	std::ofstream out(nameFile); 
	if (!out)
	{
		std::cout << "���� ������� ����������\n";
		return false;
	}
	if (out.is_open())
	{
		out << text;
	}
	out.close();
	return true;
}

std::string ReadTextFromFile(std::string nameFile = "TestFile.txt") {
	std::string text, temp;

	std::ifstream in(nameFile); // �������� ���� ��� ������
	if (in.is_open())
	{
		while (getline(in, temp))
		{		
			text += temp + "\n";
		}
	}
	in.close();     // ��������� ����
	return text;
}


void WriteToFile() {
	std::string text = GetText();
	std::cout << text << std::endl;
	if (WriteTextToFile(text)) { //������
		std::cout << "���� ������� �������\n";
		std::string text2 = ReadTextFromFile(); //������
		std::cout << text2 << std::endl;
	}
	else {
		std::cout << "��� ������� � �����\n";
	}
}
