#pragma once
#include "MyInclude.h"

/*Задание 1. Структура Time
Создайте структуру с именем Time. Три ее поля, имеющие
тип int, назовите hours, minutes и seconds.
Напишите программу, которая просит пользователя ввести время
в формате часы, минуты, секунды. 
Можно запрашивать на ввод как три значения сразу,
так и выводить для каждой величины отдельное приглашение.
Программа должна хранить время в структурной переменной
типа Time и выводить количество секунд во введенном времени.
Добавьте в структуру две функции для сложения и
вычитания интервалов времени.
При решении задачи учитывайте естественные допустимые
значения для реализуемых характеристик.*/

struct Time {
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    void SetTime(int hours, int minutes, int seconds) {
       this->hours = hours; 
       this->minutes = minutes;
       this->seconds = seconds;
    }
    void CinTime() {
        this->hours = GetValue("Введите hours: ");
        this->minutes = GetValue("Введите minutes: ");
        this->seconds = GetValue("Введите seconds: ");
    }
    void RecountTime() {
        while (seconds > 60) {
            seconds = -60;
            minutes++;
        }
        while (minutes > 60) {
            minutes = -60;
            hours++;
        }
    }
    std::string GetStrTime() {
        "{10h;2m;10s}";
        std::string text = "{" +
            std::to_string(hours) + "h;" +
            std::to_string(minutes) + "m;" +
            std::to_string(seconds) + "s}";
        return text;
    }
};