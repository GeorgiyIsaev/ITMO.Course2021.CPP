#pragma once
#include "MyInclude.h"
#include "IdCard.h"
#include "Student.h"


void MainLab10() {
	/*Практическое занятие 10. Реализация отношений между классами*/
	/*Упражнение 1. Отношение ассоциации*/
	IdCard* idc = new IdCard(123, "Базовый");
	std::string name = "Кид";
	std::string last_name = "Элсия";
	Student* student02 = new Student(name, last_name, idc);
	std::cout << "IdCard: " << student02->getIdCard().getNumber() << std::endl;
	std::cout << "Category: " << student02->getIdCard().getCategory() << std::endl;

}