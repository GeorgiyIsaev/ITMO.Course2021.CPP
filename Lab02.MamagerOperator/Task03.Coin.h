#pragma once
#include <iostream>
#include <string>

/*Задание 3. Размен монет
Известна монетная система России. 
Требуется выдать набор монет с наименьшим возможным количеством монет.
Каждое число из набора можно использовать сколько угодно раз.*/

int getYourCoin() {
	std::cout << "Введите колличество денег >> ";
	std::string textYourCoin;
	std::cin >> textYourCoin;
	int yourCoin = 0;
	try {
		yourCoin = stoi(textYourCoin);
	}
	catch (int ex)
	{
		std::cout << "ERROR: Введеное значение не число! ";
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
	std::cout << "Размен для " << yourCoin << ":\n";
	for (int i = 0; i < countTypeMonet; i++) {
		if (countMonets[i] != 0)
			std::cout << "Монет номиналом " << currentMoneta[i] << ":\t " << countMonets[i] << std::endl;
	}
}

void Coin() {
	int yourCoin = getYourCoin();
	const int countTypeMonet = 4;
	int currentMoneta[countTypeMonet] = { 10,5,2,1 };
	int *countMonets = CalculationCountMonets(countTypeMonet, currentMoneta, yourCoin);

	printCountMonets(countTypeMonet, currentMoneta, countMonets, yourCoin);

	
}