#pragma once
#include "MyInclude.h"

/*Задание 2. Реализация ввода данных
Требуется реализовать функцию Input(a,b) так, чтобы она была
использована в программе следующим образом:
	int main()
	{
	int a, b;
	if(Input(a,b)== false) // if(!Input(a,b))
	{
	cerr << "error";
	return 1;
	}
	int s = a + b;
	return 0;
	}
В функции Input(a,b) должен быть реализован ввод данных с клавиатуры
с проверкой корректности ввода (правила проверки корректности кода
установите на ваше усмотрение).
*/



int MainInput()
{
	int a, b;
	if (Input(a, b) == false) // if(!Input(a,b))
	{
		cerr << "error";
		return 1;
	}
	int s = a + b;
	return 0;
}

