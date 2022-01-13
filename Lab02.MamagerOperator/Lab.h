#pragma once
#include <iostream>
#include <string>
#include <ctime>


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

void DoWhileUse() {
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



void WhileUse() {
	/*���������� 2. ������������� ������ ��� ���������� ����������*/
	/*������� 2. ������������� ����� � ������������*/
	int a, b, temp;
	std::cout << "a = "; std::cin >> a;
	std::cout << "b = "; std::cin >> b;
	while (a != b)
	{
		if (a > b)
			a -= b; // ���������� ��������� a = a - b
		else
			b -= a;
	}
	std::cout << "��� = " << a << std::endl;
}

void ForUse() {
	/*���������� 3. ���������� ����� � ���������� (for) ��� ��������*/
	srand(time(NULL));
	int a, b, c;
	int k = 0, n = 10;
	for (int i = 1; i <= n; i++) {
		// ������������� ��������� ���������� ������� �� 1 �� 101 
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		std::cout << a << " * " << b << " = ";
		std::cin >> c;
		if (a * b != c)
		{
			k++; // �������� ����������, ����������: k = k + 1
			std::cout << "Error! ";
			std::cout << a << " * " << b << " = " << a * b << std::endl;
		}
	}
	std::cout << "Count error: " << k << std::endl;
}


void SumOnInterval(int k = 1, int m = 99 ) {
	/*���������� 4. ������ ����� ����� �� �������� ���������*/
	/*��� i, ����������� �� 1 �� k � �� m �� 100.*/
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if ((i > k) && (i < m))
			continue;
		sum += i;
	}
	std::cout << "sum: " << sum << std::endl;
}