#pragma once
#include "MyInclude.h"

/*Задание 5. Применение рекурсии для перевода целого числа
в двоичный код
Требуется написать рекурсивную функцию перевода целого 
положительного числа из десятичной системы исчисления в двоичную.
Классический алгоритм перевода: нужно входной параметр num 
делить на 2 до тех пор, пока num>2. При каждом делении нужно
выделять остаток с помощью выражения num%2.*/


int ConvertToBinary(int num)
{
    if (num < 2)
        return num;
    else
        return (10 * ConvertToBinary(num / 2) + num % 2);
}


void TestBinaryCode() {
    int input = GetValue("Введите число: ");
    long inBinary = ConvertToBinary(input);
    std::cout  << "Бинарное значение для числа " << input << " : " << inBinary << "\n";
 
}