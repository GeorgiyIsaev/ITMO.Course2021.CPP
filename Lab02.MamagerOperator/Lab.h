#pragma once
#include <iostream>
#include <string>


void ValidPoint(int x = 2, int y = 2) {
	/*���������� 1. ���������� ���������� ������
	������� 1. ����������� �������������� ����� �������� ������*/
	/*x {-3;3}; y={0;3}*/
	std::string point = "����� {" + std::to_string(x) + "; " + std::to_string(y) + "}";
	if (x * x + y * y < 9 && y > 0)
	{
		std::cout << point << " ��������� ������" << std::endl;
	}
	else if (x * x + y * y > 9 || y < 0)
	{
		std::cout << point << " ��������� �������" << std::endl;
	}
	else {
		std::cout << point << " ��������� �� �������" << std::endl;
	}
}


void SwitchUse() {
	/*���������� 1. ���������� ���������� ������
	������� 2. ������������� ��������� switch ��� ���������� ������*/
	char op;
	std::cout << "������ ���� �����, ������ ���� ���� ����� (S ��� V): ";
	std::cin >> op;
	switch (op)
	{
	case 'S':
		std::cout << "����� ������ ������\n";
		std::cout << "������ �������\n";
		std::cout << "������ ���������\n";
		break;
	case 'V':
		std::cout << "����������� ����\n";
		std::cout << "����� ������ ������\n";
		std::cout << "������ �������\n";
		std::cout << "������ ���������\n";
		break;
	default:
		std::cout << "������ �������\n";
		std::cout << "������ ���������\n";
	}
}

void SwitchUse02() {
	/*���������� 1. ���������� ���������� ������
	������� 2. ������������� ��������� switch ��� ���������� ������*/
	char op;
	std::cout << "������ ���� �����, ������ ���� ���� ����� (S ��� V): ";
	std::cin >> op;
	switch (op)
	{
	case 'V':
		std::cout << "����������� ����\n";
	case 'S':
		std::cout << "����� ������ ������\n";
	default:
		std::cout << "������ �������\n";
		std::cout << "������ ���������\n";
	}
}