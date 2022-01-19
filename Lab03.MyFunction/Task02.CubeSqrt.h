#pragma once
#include "MyInclude.h"

/*Задание 2. Применение итерации реализации функции
Требуется реализовать функцию вычисления кубического корня в 
двух вариантах: в первом, используя стандартную функцию pow(a,1.0/3),
а во втором – итерационную формулу:
В функции main() протестируйте работу созданных функций.*/




double WhileCubeSqrt(double value) {
    double x1 = value, // начальное значение x
        x = 0; // значение x-1

    while (true)
    {
        x = (1.0 / 3) * ((value / (x1 * x1)) + (2 * x1));
       // std::cout << x << " " << x1 << std::endl;
        if (abs(x1 - x) < pow(10.0, -5.0))
        {
            break;
        }
        x1 = x;
    }
    return x;
}


void CubeSqrt() {  
    std::cout << pow(10.0, -5.0) << std::endl;
    double x = 8; //getValue("Введите значение под корнем");    
    double sq_standart = pow(x, 1.0 / 3); //стандартный вызов
    double sq = WhileCubeSqrt(x); //итерационное выческление
    std::cout << "8 sq= " << sq << "sq_st= " << sq_standart << std::endl;

    x = 27; //getValue("Введите значение под корнем");    
    sq_standart = pow(x, 1.0 / 3); //стандартный вызов
    sq = WhileCubeSqrt(x); //итерационное выческление
    std::cout << "27 sq= " << sq << "sq_st= " << sq_standart << std::endl;

    x = 255; //getValue("Введите значение под корнем");    
    sq_standart = pow(x, 1.0 / 3); //стандартный вызов
    sq = WhileCubeSqrt(x); //итерационное выческление
    std::cout << "255 sq= " << sq << "sq_st= " << sq_standart << std::endl;
}