#pragma once
#include <iostream>
#include <string>
#include <cmath>

void privetPrint(std::string name)
{
	/*������� 1. ���������� ���������*/
	std::cout << name << ", " << "hello!" << std::endl;
}

std::string privet(std::string name)
{
	/*������� 2. ���������� ����������� �������� �������*/
	std::string str = name + ", " + "hello!\n";
	return str;
}

void privet(std::string name, int k)
{
	std::cout << name << ", " << "hello! " << "you input " << k << std::endl;
}


void mainLab03() {
	/*���������� 1. ������������� ������� ��� ����������� ���������*/
	/*������� 1. ���������� ���������*/
	std::string name = "��������";
	privetPrint(name);

	/*������� 2. ���������� ����������� �������� �������*/
	std::string nameOut = privet(name);
	std::cout << nameOut << std::endl;

	/*���������� 2. ���������� �������*/
	int k;
	std::cout << "Input number:" << std::endl;
	std::cin >> k;
	privet(name);
	privet(name, k);

}

