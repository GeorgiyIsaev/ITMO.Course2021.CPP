#pragma once
#include "MyInclude.h"

/* онтрольные задани€
«адание 1. ѕерегрузка операторов в классе Time
“ребуетс€ реализовать в классе Time (добавить в ранее созданный класс) перегрузку следующий операций:
Х сложение объектов Time,
Х вычитание объектов Time,
Х сложение объекта Time и переменной вещественного типа,
Х сложение переменной вещественного типа и объект Time,
Х сравнение двух объектов Time.
–еализуйте возможность преобразовани€ полученных результатов к корректному виду.
¬ функции main() создайте требуемые объекты и проверьте работу перегруженных операций.*/

class Time {
private:
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    void RecountTime() {
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
        this->hours = GetValue("¬ведите h: ");
        this->minutes = GetValue("¬ведите m: ");
        this->seconds = GetValue("¬ведите s: ");
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
    /*—ложение*/
    Time operator+(const Time& b) {
        return Time(this->hours + b.hours, this->minutes + b.minutes, this->seconds + b.seconds);
    }
    Time operator-(const Time& b) {
        return Time(this->hours - b.hours, this->minutes - b.minutes, this->seconds - b.seconds);
    }
    /*—равнение*/
    bool operator>(const Time& b) {
        if (this->hours > b.hours) return true;
        else if (this->hours == b.hours && this->minutes > b.minutes) return true;
        else if (this->hours == b.hours && this->minutes == b.minutes && this->seconds > b.seconds) return true;
        else return false;
    }
    bool operator<(const Time& b) {
        if (this->hours < b.hours) return true;
        else if (this->hours == b.hours && this->minutes < b.minutes) return true;
        else if (this->hours == b.hours && this->minutes == b.minutes && this->seconds < b.seconds) return true;
        else return false;
    }
};


void MainTime() {
    Time t2(12, 60, 61);
    std::cout << t2.StrTime() << std::endl;
    Time timeCin;
    timeCin.CinTime();
    std::cout << timeCin.StrTime() << std::endl;

    /*ќператоры сложени€*/
    Time t6 = t2 - timeCin;
    std::cout << t6.StrTime() << std::endl;
    Time t7 = t2 + timeCin;
    std::cout << t7.StrTime() << std::endl;

    /*ќператоры сравнени€*/
    if (t2 > timeCin) std::cout << t2.StrTime() <<" < "<< t2.StrTime() << std::endl;
    else std::cout << t2.StrTime() << " > " << t2.StrTime() << std::endl;


}