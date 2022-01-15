#pragma once
#include <iostream>
#include <string>

/*������� 3. ������ �����
�������� �������� ������� ������. 
��������� ������ ����� ����� � ���������� ��������� ����������� �����.
������ ����� �� ������ ����� ������������ ������� ������ ���.*/

void Coin() {
	int yourCoin = 256;
	const int countTypeMonet = 4;
	int currentMoneta[countTypeMonet] = { 10,5,2,1 };
	int countMonets[countTypeMonet];

	for (int i = 0; i < countTypeMonet; i++) {
		int module = yourCoin % currentMoneta[i];
		yourCoin = yourCoin - module;
		countMonets[i] = yourCoin / currentMoneta[i];
		yourCoin = module;
	}

	std::cout << "������ ��� " << yourCoin << ":\n";
	for (int i = 0; i < countTypeMonet; i++) {
		std::cout << "����� ��������� " << currentMoneta[i] << ": " << countMonets[i] << std::endl;
	}
}