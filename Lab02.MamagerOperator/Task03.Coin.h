#pragma once
#include <iostream>
#include <string>

/*������� 3. ������ �����
�������� �������� ������� ������. 
��������� ������ ����� ����� � ���������� ��������� ����������� �����.
������ ����� �� ������ ����� ������������ ������� ������ ���.*/

int getYourCoin() {
	std::cout << "������� ����������� ����� >> ";
	std::string textYourCoin;
	std::cin >> textYourCoin;
	int yourCoin = 0;
	try {
		yourCoin = stoi(textYourCoin);
	}
	catch (int ex)
	{
		std::cout << "ERROR: �������� �������� �� �����! ";
		getYear();
	}
	return yourCoin;
}

int* CalculationCountMonets(const int countTypeMonet, int* currentMoneta, int yourCoin) {
	int *countMonets = new int[countTypeMonet];
	for (int i = 0; i < countTypeMonet; i++) {
		int module = yourCoin % currentMoneta[i];
		yourCoin = yourCoin - module;
		countMonets[i] = yourCoin / currentMoneta[i];
		yourCoin = module;
	}
	return countMonets;
}

void printCountMonets(const int countTypeMonet, int* currentMoneta, int* countMonets, int yourCoin) {
	std::cout << "������ ��� " << yourCoin << ":\n";
	for (int i = 0; i < countTypeMonet; i++) {
		if (countMonets[i] != 0)
			std::cout << "����� ��������� " << currentMoneta[i] << ":\t " << countMonets[i] << std::endl;
	}
}

void Coin() {
	int yourCoin = getYourCoin();
	const int countTypeMonet = 4;
	int currentMoneta[countTypeMonet] = { 10,5,2,1 };
	int *countMonets = CalculationCountMonets(countTypeMonet, currentMoneta, yourCoin);

	printCountMonets(countTypeMonet, currentMoneta, countMonets, yourCoin);

	
}