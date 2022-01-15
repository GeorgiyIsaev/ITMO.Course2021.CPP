#pragma once
#include <iostream>
#include <string>

/*Задание 3. Размен монет
Известна монетная система России. 
Требуется выдать набор монет с наименьшим возможным количеством монет.
Каждое число из набора можно использовать сколько угодно раз.*/

void Coin() {
	int yuorCoin = 256;
	const int countTypeMonet = 4;
	int currentMoneta[countTypeMonet] = { 10,5,2,1 };
	int countMonets[countTypeMonet] = { 10,5,2,1 };
	for (int i = 0; i < countTypeMonet; i++) {
		int module = yuorCoin % currentMoneta[i];
		std::cout << module << std::endl;
	}





}