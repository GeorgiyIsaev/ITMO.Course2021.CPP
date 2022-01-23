#pragma once

/*������� 1. ����� Time
�������� ����� � ������ Time, ���������� ��� ����
���� int, ��������������� ��� �������� �����, ����� � ������.
���� �� ������������� ������ ������ ����������������
���� �������� ����������, � ������ �����������
� �������� ������� ��������.
� ����������� � ����������� �������� ����������
���������� ������� ������������ �������� ����������
� ���������� ���������, ��������, ���� ������ �������
������� ����� � ���������� ����� ������ 70, �� ����������� 
������ ������������� ��� �������� � ����������� ����:
���������� ����� � �����.
�������� ����� ������, ������� ����� �������� ��������
����� �� ����� � ������� 11:59:59, � �����, ������������ 
�������� ���� �������� ���� Time, ������������ � �������� ����������.
��� ��� �������� � ���������, �������� ������ ������������.
� ������� main() ������� ������� ��� ������������������ 
������� (���������, ������ �� ��� ���� ������������) � ����
�������������������� ������. ����� ������� ��� ������������������
��������, � ��������� ��������� �������� ������� 
� �������� ��� �������� �� �����.*/

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
        this->hours = GetValue("������� hours: ");
        this->minutes = GetValue("������� minutes: ");
        this->seconds = GetValue("������� seconds: ");
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