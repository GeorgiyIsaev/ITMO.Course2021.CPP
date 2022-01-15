#pragma once
#include <iostream>
#include <string>

/*Задание 3. Размен монет
Известна монетная система России. 
Требуется выдать набор монет с наименьшим возможным количеством монет.
Каждое число из набора можно использовать сколько угодно раз.*/

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

	std::cout << "Размен для " << yourCoin << ":\n";
	for (int i = 0; i < countTypeMonet; i++) {
		std::cout << "Монет номиналом " << currentMoneta[i] << ": " << countMonets[i] << std::endl;
	}
}