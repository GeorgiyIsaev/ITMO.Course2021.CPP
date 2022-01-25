#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>
#include <iostream>
#include "IdCard.h"

class Student
{
    public:
		// Конструктор класса Student
        Student(std::string, std::string, IdCard*);
        Student();
        // Установка имени студента
        void set_name(std::string);
        // Получение имени студента
        std::string get_name();
        // Установка фамилии студента
        void set_last_name(std::string);
        // Получение фамилии студента
        std::string get_last_name();
        // Установка промежуточных оценок
        void set_scores(int []);
        // Установка среднего балла
        void set_average_score(double);
        // Получение среднего балла
        double get_average_score();
		// Вывод информации о студенте
		void display() const; 

		void setIdCard(IdCard *c);
		IdCard getIdCard();

        friend bool operator< (const Student&, const Student&);
        friend bool operator> (const Student&, const Student&);
        friend bool operator== (const Student&, const Student&);
        friend bool operator!= (const Student&, const Student&);


    private:
        // Промежуточные оценки
        int scores[5];
        // Средний балл
        double average_score;
        // Имя
        std::string name;
        // Фамилия
        std::string last_name;
		// Карточка
		IdCard *iCard;
		
};

