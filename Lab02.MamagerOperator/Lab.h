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

void WhileUse() {
	/*���������� 2. ������������� ������ ��� ���������� ����������*/
    /*������� 1. ������������� ����� � ������������*/
	double x, x1, x2, y;

	std::cout << "x1 = "; std::cin >> x1;
	std::cout << "x2 = "; std::cin >> x2;
	std::cout << "\tx\tsin(x)\n";
	x = x1;
	do
	{
		y = sin(x);
		std::cout << "\t" << x << "\t" << y << std::endl;
		x = x + 0.01;
	} while (x <= x2);
}