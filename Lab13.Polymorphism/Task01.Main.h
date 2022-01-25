#pragma once
#include "MyInclude.h"
#include "Task01.Student.h"
#include "Task01.Teacher.h"

/*Контрольные задания
Задание 1. Полиморфизм в системе классов учебного центра
Требуется реализовать полиморфный вызов методов
производных классов системы, описанной в упражнениях
предыдущего практического занятия.*/


void addVectorHuman(std::vector<Human*>& human) {
	human.push_back(new Teacher("Викентий", "Иван", "Александрович", 25));
	human.push_back(new Teacher("Хакси", "Ванеса", "Паловна", 25));
	human.push_back(new Teacher("Этериния", "Селестия", "Карумановна", 25));
	human.push_back(new Teacher("Грейрат", "Эрис", "Филиповна", 25));

	human.push_back(new Student("Студентий", "Павел", "Азаматовч", { 3,3,3,4,5,6 }));
	human.push_back(new Student("Студентов", "Хрен", "Безмаслович", { 3,3,3,4,5,6 }));
	human.push_back(new Student("Студеный", "Рак", "Горынович", { 3,3,3,4,5,6 }));
	human.push_back(new Student("Чувак", "Крутой", "С Косой", { 3,3,3,4,5,6 }));
	human.push_back(new Student("Студентковна", "Анна", "Коренина", { 3,3,3,4,5,6 }));
	human.push_back(new Student("Кохай", "Феликс", "Кошкинсон", { 3,3,3,4,5,6 }));
	human.push_back(new Student("Бака", "Кака", "Ламака", { 3,3,3,4,5,6 }));
	human.push_back(new Student("Пчелка", "Трутень", "Матриархатович", { 3,3,3,4,5,6 }));
}

void MainPolymorphism() {
	std::vector<Human*> humans;
	addVectorHuman(humans);

	for (Human* human : humans) {
		std::cout << human->GetFullName() << std::endl;
	}


}
