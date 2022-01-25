#pragma once

#include "student.h"
#include "IdCard.h"
#include "Group.h"
#include "GroupMS.h"

void Task01() {
    /*���������� 1. �������� ������ ���������*/
    IdCard* idc = new IdCard(123456, "�������");
    IdCard* idc2 = new IdCard(654321, "�������");
    Student student03("����", "������", idc2);
    Student student04("�����", "�������", idc);
    Student student05("����", "����", idc2);
    Student student06("�������", "�����", idc);
    Group gr1957("1957");
    gr1957.addStudent(student03);
    gr1957.addStudent(student04);
    gr1957.addStudent(student05);
    gr1957.addStudent(student06);


    int k = gr1957.getSize();
    gr1957.GroupSort();
    std::cout << "� ������ " << gr1957.getName() << " " << k << " ��." << std::endl;
    gr1957.GroupOut();
    gr1957.delStudent(student03); //�������� �� �������
    gr1957.delStudent(gr1957.findStudent("�����", "�������")); //�������� �� ����� st04


    std::cout << "� ������ " << gr1957.getName() << " " << gr1957.getSize() << " ��." << std::endl;
    gr1957.GroupOut();
}


void Task02() {
    /*���������� 2. ����������� ��������� � ������� ���������������*/
    IdCard* idc = new IdCard(123456, "�������");
    IdCard* idc2 = new IdCard(654321, "�������");
    Student* student02 = new Student("����", "wegweg", idc);
    Student* student03 = new Student("����", "������", idc2);
    Student* student04 = new Student("�����", "�������", idc);
    Student* student05 = new Student("����", "����", idc2);
    Student* student06 = new Student("�������", "�����", idc);
    GroupMS gr1957("1957"); //������ � �����������
    gr1957.addStudent(student03);
    gr1957.addStudent(student04);
    gr1957.addStudent(student05);
    gr1957.addStudent(student06);

 
    std::cout << "� ������ " << gr1957.getName() << " " << gr1957.getSize() << " ��." << std::endl;
    gr1957.GroupOut();
    gr1957.delStudent(student03); //�������� �� �������
    gr1957.delStudent(gr1957.findStudent("�����", "�������")); //�������� �� ����� st04


    std::cout << "� ������ " << gr1957.getName() << " " << gr1957.getSize() << " ��." << std::endl;
    gr1957.GroupOut();
}

void MainLab15() {

    /*������������ ������� 15. ������������� STL
    /*���������� 1. �������� ������ ���������*/
    Task01();
    std::cout << std::endl;
    /*���������� 2. ����������� ��������� � ������� ���������������*/
    Task02();
}