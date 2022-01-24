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
        while (seconds < 0) {
            seconds += 60;
            minutes--;
        }
        while (minutes < 0) {
            minutes += 60;
            hours--;
        }
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
    int GetSeconds() { return seconds; }
    int GetMinutes() { return minutes; }
    int GetHours() { return hours; }
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
    /*ѕерегрузка оператра преобразовани€*/
    operator int() const    {
        return seconds + (minutes*60) + (hours*60*60);
    }
};

/*ќператор сложени€ числа с Time*/
int operator+ (int val, Time& t)
{
    return val + (int)t;
}
int operator- (int val, Time& t)
{
    return val - (int)t;
}

/*ќператор сложени€ Time c int*/
Time operator+ (Time& t, int val)
{
    return Time(t.GetHours(), t.GetMinutes(), t.GetSeconds() + val);
}
Time operator- (Time& t, int val)
{
    return Time(t.GetHours(), t.GetMinutes(), t.GetSeconds() - val);
}



void MainTime() {
    Time t2(12, 60, 61);
    std::cout << t2.StrTime() << std::endl;
    Time timeCin;
    timeCin.CinTime();
    std::cout << timeCin.StrTime() << std::endl;

    Time t6, t7;
    /*ќператоры сложени€*/
    //t6 = t2 - timeCin;
    //std::cout << t6.StrTime() << std::endl;
    //t7 = t2 + timeCin;
    //std::cout << t7.StrTime() << std::endl;

    /*ќператоры сравнени€*/
    if (t2 > timeCin) std::cout << t2.StrTime() <<" < "<< t2.StrTime() << std::endl;
    else std::cout << t2.StrTime() << " > " << t2.StrTime() << std::endl;

    /*—ложение с вещественным числом*/
    t6 = t2 - 3333;
    std::cout << "-3333: "<< t6.StrTime() << std::endl;
    t7 = t2 + 3333;
    std::cout << "+3333: " << t7.StrTime() << std::endl;

    /*ќператор сложени€ числа с Time*/
    int val = 1000 - t2;
    std::cout << "1000 - " << t2.StrTime() << " = "<< val << std::endl;
    val = 1000 + t2;
    std::cout << "1000 + " << t2.StrTime() << " = " << val << std::endl;
}