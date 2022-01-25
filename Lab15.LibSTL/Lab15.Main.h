#pragma once

#include "student.h"
#include "IdCard.h"
#include "Group.h"
#include "GroupMS.h"

void Task01() {
    /*Упражнение 1. Создание списка студентов*/
    IdCard* idc = new IdCard(123456, "Базовый");
    IdCard* idc2 = new IdCard(654321, "Базовый");
    Student student03("Петр", "Петров", idc2);
    Student student04("Семен", "Смирнов", idc);
    Student student05("Саша", "Коен", idc2);
    Student student06("Дмитрий", "Ионов", idc);
    Group gr1957("1957");
    gr1957.addStudent(student03);
    gr1957.addStudent(student04);
    gr1957.addStudent(student05);
    gr1957.addStudent(student06);


    int k = gr1957.getSize();
    gr1957.GroupSort();
    std::cout << "В группе " << gr1957.getName() << " " << k << " ст." << std::endl;
    gr1957.GroupOut();
    gr1957.delStudent(student03); //уделение по объекту
    gr1957.delStudent(gr1957.findStudent("Семен", "Смирнов")); //удаление по имени st04


    std::cout << "В группе " << gr1957.getName() << " " << gr1957.getSize() << " ст." << std::endl;
    gr1957.GroupOut();
}


void Task02() {
    /*Упражнение 2. Организация студентов с помощью мультимножества*/
    IdCard* idc = new IdCard(123456, "Базовый");
    IdCard* idc2 = new IdCard(654321, "Базовый");
    Student* student02 = new Student("Жорж", "wegweg", idc);
    Student* student03 = new Student("Петр", "Петров", idc2);
    Student* student04 = new Student("Семен", "Смирнов", idc);
    Student* student05 = new Student("Саша", "Коен", idc2);
    Student* student06 = new Student("Дмитрий", "Ионов", idc);
    GroupMS gr1957("1957"); //Группа с мультисетом
    gr1957.addStudent(student03);
    gr1957.addStudent(student04);
    gr1957.addStudent(student05);
    gr1957.addStudent(student06);

 
    std::cout << "В группе " << gr1957.getName() << " " << gr1957.getSize() << " ст." << std::endl;
    gr1957.GroupOut();
    gr1957.delStudent(student03); //уделение по объекту
    gr1957.delStudent(gr1957.findStudent("Семен", "Смирнов")); //удаление по имени st04


    std::cout << "В группе " << gr1957.getName() << " " << gr1957.getSize() << " ст." << std::endl;
    gr1957.GroupOut();
}

void MainLab15() {

    /*Практическое занятие 15. Использование STL
    /*Упражнение 1. Создание списка студентов*/
    Task01();
    std::cout << std::endl;
    /*Упражнение 2. Организация студентов с помощью мультимножества*/
    Task02();
}