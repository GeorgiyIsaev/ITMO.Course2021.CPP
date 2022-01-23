#pragma once

/*Задание 1. Класс Time
Создайте класс с именем Time, содержащий три поля
типа int, предназначенные для хранения часов, минут и секунд.
Один из конструкторов класса должен инициализировать
поля нулевыми значениями, а другой конструктор
— заданным набором значений.
В конструктор с параметрами добавьте реализацию
приведения больших неправильных значений параметров
к правильным значениям, например, если клиент захочет
создать время с параметром минут равным 70, то конструктор 
должен преобразовать это значение к правильному виду:
количество часов и минут.
Создайте метод класса, который будет выводить значения
полей на экран в формате 11:59:59, и метод, складывающий 
значения двух объектов типа Time, передаваемых в качестве аргументов.
Где это возможно и оправдано, сделайте методы константными.
В функции main() следует создать два инициализированных 
объекта (подумайте, должны ли они быть константными) и один
неинициализированный объект. Затем сложите два инициализированных
значения, а результат присвойте третьему объекту 
и выведите его значение на экран.*/

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
        this->hours = GetValue("Введите hours: ");
        this->minutes = GetValue("Введите minutes: ");
        this->seconds = GetValue("Введите seconds: ");
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
};


void MainTime() {   
        Time timeCin;
        timeCin.CinTime();
        std::cout << timeCin.StrTime() << std::endl;
        Time t2(20, 200, 30);
        std::cout << t2.StrTime() << std::endl;
      
        Time t4 = t2.SubTime(timeCin);
        std::cout << t4.StrTime() << std::endl;
        Time t5 = t2.AddTime(timeCin);
        std::cout << t5.StrTime() << std::endl;   
}