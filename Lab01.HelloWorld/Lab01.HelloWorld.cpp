#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
   // system("chcp 1251");  //поддержки кириллицы (способ 1)
    SetConsoleOutputCP(1251); //поддержка кипиллицы (способ 2)
    SetConsoleCP(1251);
    
    string name;
    cout << "What is your name? ";
    cin >> name;
    cout << "Hello, " << name << "!\n";

    string surname;
    cout << "What is your surname? ";
    getline(cin, surname);
    cout << "Hello, " << surname <<"" << name << "!\n";
}
