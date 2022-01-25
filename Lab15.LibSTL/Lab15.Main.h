#pragma once

#include "student.h"
#include "IdCard.h"
#include "Group.h"

void MainLab15() {
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
    gr1957.delStudent(student04);
    gr1957.delStudent(gr1957.findStudent("Семен", "Смирнов"));


}