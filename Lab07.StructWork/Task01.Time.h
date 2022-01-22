#pragma once
#include "MyInclude.h"

/*������� 1. ��������� Time
�������� ��������� � ������ Time. ��� �� ����, �������
��� int, �������� hours, minutes � seconds.
�������� ���������, ������� ������ ������������ ������ �����
� ������� ����, ������, �������. 
����� ����������� �� ���� ��� ��� �������� �����,
��� � �������� ��� ������ �������� ��������� �����������.
��������� ������ ������� ����� � ����������� ����������
���� Time � �������� ���������� ������ �� ��������� �������.
�������� � ��������� ��� ������� ��� �������� �
��������� ���������� �������.
��� ������� ������ ���������� ������������ ����������
�������� ��� ����������� �������������.*/

struct Time {
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    void SetTime(int hours, int minutes, int seconds) {
       this->hours = hours; 
       this->minutes = minutes;
       this->seconds = seconds;
       RecountTime();
    }
    void CinTime() {
        this->hours = GetValue("������� hours: ");
        this->minutes = GetValue("������� minutes: ");
        this->seconds = GetValue("������� seconds: ");
        RecountTime();
    }
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
    std::string GetStrTime() {
        "{10h;2m;10s}";
        std::string text = "{" +
            std::to_string(hours) + "h;" +
            std::to_string(minutes) + "m;" +
            std::to_string(seconds) + "s}";
        return text;
    }
};

void TestTime() {
    Time t1;
    t1.SetTime(22, 12, 12);
    std::cout << t1.GetStrTime() << std::endl;
    Time t2;
    t2.SetTime(22, 554, 234);
    std::cout << t2.GetStrTime() << std::endl;
    Time t3;
    t3.CinTime();
    std::cout << t3.GetStrTime() << std::endl;
}