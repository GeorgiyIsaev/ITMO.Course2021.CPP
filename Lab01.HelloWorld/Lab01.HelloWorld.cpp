#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

void InOutTest() {
    /*Упражнение 1. Ввод-вывод данных */
    string name;
    cout << "What is your name? ";
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    string surname;
    cout << "What is your surname? ";
    getline(cin, surname);
    cout << "Hello, " << surname << "" << name << "!\n";
}

void ConvertType() {
    /*Упражнение 2. Преобразование типов данных */
    double x;
    double a, b; cout << "\nВведите a и b:\n";
    cin >> a; // ввод с клавиатуры значения a
    cin >> b; // ввод с клавиатуры значения b
    x = a / b; // вычисление значения x
    cout.precision(3);
    cout<< "\nx = "<< x << endl;
    cout << sizeof(a / b) << ends << sizeof(x) << endl;


}

int main()
{
   // system("chcp 1251");  //поддержки кириллицы (способ 1)
    SetConsoleOutputCP(1251); //поддержка кипиллицы (способ 2)
    SetConsoleCP(1251);
    
    //InOutTest();
    ConvertType();


}
