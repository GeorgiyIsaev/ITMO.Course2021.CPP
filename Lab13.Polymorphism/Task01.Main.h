#pragma once
#include "MyInclude.h"
#include "Task01.Student.h"
#include "Task01.Teacher.h"

/*Контрольные задания
Задание 1. Полиморфизм в системе классов учебного центра
Требуется реализовать полиморфный вызов методов
производных классов системы, описанной в упражнениях
предыдущего практического занятия.*/

void MainPolymorphism() {
	std::vector<Human> human;
	human.push_back(Teacher("Викентий", "Иван", "Александрович", 25));
	human.push_back(Teacher("Хакси", "Ванеса", "Паловна", 25));
	human.push_back(Teacher("Этериния", "Селестия", "Карумановна", 25));
	human.push_back(Teacher("Грейрат", "Эрис", "Филиповна", 25));

	human.push_back(Student("Студентий", "Павел", "Азаматовч", {3,3,3,4,5,6}));
	human.push_back(Student("Студентов", "Хрен", "Безмаслович", { 3,3,3,4,5,6 }));
	human.push_back(Student("Студеный", "Рак", "Горынович", { 3,3,3,4,5,6 }));
	human.push_back(Student("Чувак", "Крутой", "С Косой", { 3,3,3,4,5,6 }));
	human.push_back(Student("Студентковна", "Анна", "Коренина", { 3,3,3,4,5,6 }));
	human.push_back(Student("Кохай", "Феликс", "Кошкинсон", { 3,3,3,4,5,6 }));
	human.push_back(Student("Бака", "Кака", "Ламака", { 3,3,3,4,5,6 }));
	human.push_back(Student("Пчелка", "Трутень", "Матриархатович", { 3,3,3,4,5,6 }));
}
