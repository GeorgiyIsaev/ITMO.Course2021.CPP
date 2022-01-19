#include <windows.h>
#include "Lab03.h"
#include "Lab03.SumValues.h"
#include "Lab03.AlgEuclid.h"
#include "Task01.AreaFigure.h"
#include "Task02.CubeSqrt.h"
#include "Task03.Triangle.h"
#include "Task04.RecFunc.h"
#include "Task05.BinaryCode.h"




int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	/*Лабороторная работа 03 */
	//mainLab03();
	/*Рекурсии*/
	/*Задание 1. Сумма чисел*/
	//SumValue();
	/*Задание 2. Алгоритм Евклида*/
	//AlgEuclid();

	/*Контрольные задания*/
	/*Задание 1. Расчет площади сложной фигуры*/
	//AreaFigure();
	/*Задание 2. Применение итерации реализации функции*/
	//CubeSqrt();
	/*Задание 3. Работа с различными треугольниками*/
	//TriangleMenu();
	/*Задание 4. Рекурсивная функция суммы ряда*/
	TestRecFunction();
	/*Задание 5. Применение рекурсии для перевода целого числа в двоичный код*/
	TestBinaryCode();
}

   

