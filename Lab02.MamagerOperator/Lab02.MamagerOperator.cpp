#include <iostream>
#include "Lab.h"
#include <windows.h>

int main()
{
    std::cout << "Hello World!\n";
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    /*Упражнение 1. Реализация операторов выбора*/
    /*Задание 1. Определение принадлежности точки заданной фигуре*/
    ValidPoint(2, 2);
    ValidPoint(0, 0);
    ValidPoint(0, 3);
    ValidPoint(5, 3);
    /*Задание 2. Использование оператора switch при реализации выбора*/
    SwitchUse();
    SwitchUse02();
}

