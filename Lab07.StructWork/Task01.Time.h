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
    }
    void CinTime() {
        this->hours = GetValue("������� hours: ");
        this->minutes = GetValue("������� minutes: ");
        this->seconds = GetValue("������� seconds: ");
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