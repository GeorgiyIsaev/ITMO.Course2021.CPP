﻿#include <iostream>
#include "Lab.h"
#include <windows.h>
#include "Task01.LeapYaer.h"
#include "Task02.MaxValue.h"
#include "Task03.Coin.h"
#include "Task04.TargetShoot.h"

void lab02() {
 /*Упражнение 1. Реализация операторов выбора*/
    /*Задание 1. Определение принадлежности точки заданной фигуре*/
    ValidPoint(2, 2);
    ValidPoint(0, 0);
    ValidPoint(0, 3);
    ValidPoint(5, 3);
    /*Задание 2. Использование оператора switch при реализации выбора*/
    SwitchUse();
    SwitchUse02();
    /*Упражнение 2. Использование циклов при реализации алгоритмов*/
    /*Задание 1. Использование цикла с постусловием*/
    DoWhileUse();
    /*Задание 2. Использование цикла с предусловием*/
    WhileUse();
    /*Упражнение 3. Применение цикла с параметром (for) для итерации*/
    ForUse();
    /*Упражнение 4. Расчет суммы чисел на заданном интервале*/
    SumOnInterval();
}



int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    /*Лабороторные работы*/
    //lab02();
    /*Задание 1. Определение високосного года*/
   // LeapYaer();

    /*Задание 2. Определение наибольшего из трех чисел*/
    //MaxValue();

   // Coin();

    TargetSooter();
}


