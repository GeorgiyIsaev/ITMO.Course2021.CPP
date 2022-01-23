#pragma once
#include "MyInclude.h"

/*Задание 2. Безопасная реализация класса Time
Добавьте в класс Time класс, реализующий возможность
реагировать на исключительные ситуации, возникающие, 
например, при создании «неправильных» объектов, 
проведении операций с объектами класса и т.д.*/

class Time {
private:
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    void RecountTime() {
        if (hours < 0 || minutes < 0 || seconds < 0)
            throw "Отрицательное время";
      
        while (seconds > 59) {
            seconds -= 60;
            minutes++;
        }
        while (minutes > 59) {
            minutes -= 60;
            hours++;
        }
    }
public:
    Time() {
        SetTime(0, 0, 0);
    }
    Time(int hours, int minutes, int seconds) {
        SetTime(hours, minutes, seconds);
    }
    void SetTime(int hours, int minutes, int seconds) {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
        RecountTime();
    }
    void CinTime() {
        this->hours = GetValue("Введите h: ");
        this->minutes = GetValue("Введите m: ");
        this->seconds = GetValue("Введите s: ");
        RecountTime();
    }
    std::string StrTime()const {
        "10:2:10";
        std::string text =
            std::to_string(hours) + ":" +
            std::to_string(minutes) + ":" +
            std::to_string(seconds);
        return text;
    }
    std::string StrTimeHMC()const {
        "{10h;2m;10s}";
        std::string text = "{" +
            std::to_string(hours) + "h;" +
            std::to_string(minutes) + "m;" +
            std::to_string(seconds) + "s}";
        return text;
    }
    Time AddTime(const Time& timeToAdd) const {
        Time t;
        t.hours = hours + timeToAdd.hours;
        t.minutes = minutes + timeToAdd.minutes;
        t.seconds = seconds + timeToAdd.seconds;
        t.RecountTime();
        return t;
    }
    Time SubTime(const Time& timeToSubtract) const {
        Time t;
        t.hours = hours - timeToSubtract.hours;
        t.minutes = minutes - timeToSubtract.minutes;
        t.seconds = seconds - timeToSubtract.seconds;
        t.RecountTime();
        return t;
    }
    Time operator+(const Time& b) {
        return Time(this->hours + b.hours, this->minutes + b.minutes, this->seconds + b.seconds);
    }
    Time operator-(const Time& b) {
        return Time(this->hours - b.hours, this->minutes - b.minutes, this->seconds - b.seconds);
    }
};


void MainTime() { 
    Time t2(11, 59, 59);
    std::cout << t2.StrTime() << std::endl;
    Time timeCin;
    timeCin.CinTime();
    std::cout << timeCin.StrTime() << std::endl;

    try {
        /*Методы*/
        Time t4 = t2.SubTime(timeCin);
        std::cout << t4.StrTime() << std::endl;
        Time t5 = t2.AddTime(timeCin);
        std::cout << t5.StrTime() << std::endl;

        /*Операторами*/
        Time t6 = t2 - timeCin;
        std::cout << t6.StrTime() << std::endl;
        Time t7 = t2 + timeCin;
        std::cout << t7.StrTime() << std::endl;
    }
    catch(const char* text){
        std::cout << text << std::endl;
    }
}