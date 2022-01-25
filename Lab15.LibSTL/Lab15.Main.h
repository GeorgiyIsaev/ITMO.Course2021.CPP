#pragma once
#include "MyInclude.h"
#include "student.h"
#include "IdCard.h"
#include "Group.h"

void MainLab15() {

    std::string name;
    std::string last_name;
    IdCard* idc = new IdCard(123456, "�������");
    IdCard* idc2 = new IdCard(654321, "�������");
    //int id;
    //string category;

    // ���� ����� � ����������
    std::cout << "Name: ";
    getline(std::cin, name);

    // ���� �������
    std::cout << "Last name: ";
    getline(std::cin, last_name);

    //cout << "Category: ";
    //getline(cin, category);
    //idc->setCategory(category);

    //cout << "IdCard :";
    //cin >> id;
    //idc->setNumber(id);

        // �������� ���������� ������������
    Student* student02 = new Student(name, last_name, idc);

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
    gr1957.delStudent(student04);
    gr1957.delStudent(gr1957.findStudent("�����", "�������"));



    // ������
    int scores[5];
    // ����� ���� ������
    int sum = 0;

    // ���� ������������� ������ 
    for (int i = 0; i < 5; ++i) {
        std::cout << "Score " << i + 1 << ": ";
        std::cin >> scores[i];
        // ������������
        sum += scores[i];
    }

    // ��������� ������������� ������ � ������ ������ Student
    student02->set_scores(scores);

    // ������� ������� ����
    double average_score = sum / 5.0;
    // ��������� ������� ���� � ������ ������ Student
    student02->set_average_score(average_score);

    //IdCard* card = new IdCard(123);
    //student02->setIdCard(*card);

    // ������� ������ �� ��������
    std::cout << "Average ball for " << student02->get_name() << " "
        << student02->get_last_name() << " is "
        << student02->get_average_score() << std::endl;


    std::cout << "IdCard: " << student02->getIdCard().getNumber() << std::endl;
    std::cout << "Category: " << student02->getIdCard().getCategory() << std::endl;


    // �������� ������� student �� ������
    delete student02;
}