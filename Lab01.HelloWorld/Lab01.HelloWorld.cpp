#include <iostream>
#include <windows.h>

int main()
{
   // system("chcp 1251");  //поддержки кириллицы (способ 1)
    SetConsoleOutputCP(1251); //поддержка кипиллицы (способ 2)
    SetConsoleCP(1251);
    std::cout << "Hello World!\n";
}
