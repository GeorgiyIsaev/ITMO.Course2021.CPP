#include <iostream>
#include "Lab.h"
#include <windows.h>

int main()
{
    std::cout << "Hello World!\n";
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    /*Упражнение 1. Реализация операторов выбора*/
    ValidPoint(2, 2);
    ValidPoint(0, 0);
    ValidPoint(0, 3);
    ValidPoint(5, 3);
}

