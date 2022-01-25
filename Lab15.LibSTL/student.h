#pragma once /* ������ �� �������� ����������� ������������� ����� */
#include <string>
#include <iostream>
#include "IdCard.h"

class Student
{
    public:
		// ����������� ������ Student
        Student(std::string, std::string, IdCard*);
        Student();
        // ��������� ����� ��������
        void set_name(std::string);
        // ��������� ����� ��������
        std::string get_name();
        // ��������� ������� ��������
        void set_last_name(std::string);
        // ��������� ������� ��������
        std::string get_last_name();
        // ��������� ������������� ������
        void set_scores(int []);
        // ��������� �������� �����
        void set_average_score(double);
        // ��������� �������� �����
        double get_average_score();
		// ����� ���������� � ��������
		void display() const; 

		void setIdCard(IdCard *c);
		IdCard getIdCard();

        friend bool operator< (const Student&, const Student&);
        friend bool operator> (const Student&, const Student&);
        friend bool operator== (const Student&, const Student&);
        friend bool operator!= (const Student&, const Student&);


    private:
        // ������������� ������
        int scores[5];
        // ������� ����
        double average_score;
        // ���
        std::string name;
        // �������
        std::string last_name;
		// ��������
		IdCard *iCard;
		
};



class compareStudent
{
public:
    bool operator() (const Student* ptrSt1, const Student* ptrSt2) const
    {
        return *ptrSt1 < *ptrSt2;
    }
};