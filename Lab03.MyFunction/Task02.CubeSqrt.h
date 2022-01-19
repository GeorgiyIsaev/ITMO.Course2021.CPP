#pragma once
#include "MyInclude.h"

/*Задание 2. Применение итерации реализации функции
Требуется реализовать функцию вычисления кубического корня в 
двух вариантах: в первом, используя стандартную функцию pow(a,1.0/3),
а во втором – итерационную формулу:
В функции main() протестируйте работу созданных функций.*/




double WhileCubeSqrt(double sq) {
    double x = 0, // начальное значение x
        x1 = sq; // значение x-1

    while (true)
    {
        x = (1 / 3) * ((sq / (x1 * x1)) + (2 * x1));
        if (abs(x1 - x) < pow(10.0, -5.0)) //
        {
            // cout << pow(10.0, -5.0);
            break;
        }
    }
    return x;
}


void CubeSqrt() {
    double x = 5; //getValue("Введите значение под корнем"); 
    double sq = WhileCubeSqrt(x);
    double sq2 = pow(x, 1.0 / 3);

    std::cout << sq << " " << sq2 << std::endl;
}