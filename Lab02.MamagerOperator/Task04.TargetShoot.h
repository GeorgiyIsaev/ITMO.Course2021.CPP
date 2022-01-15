#pragma once
#include <iostream>
#include <string>


#include <ctime>


/*Задание 4. Стрельба по мишени
Требуется разработать программу, имитирующую стрельбу по мишени.
Пользователь вводит данные о выстреле в виде пары чисел – координат x и y заранее известное количество раз.
Повтор ввода следует организовать в цикле. После «стрельбы» пользователю выводится информация о сумме очков и его уровень как стрелка (например, снайпер, просто стрелок, новичок).
Вариант мишени выберите самостоятельно.
Дополнительные задания:
− реализовать центр мишени случайным значением, тогда стрелок не будет знать местонахождение мишени (стрельба «вслепую»);*/

struct Point {
    int x;
    int y;
};

class Shooter {
    std::string** arrShoot;
    int size;
    int x, y;
    bool isShot = false;
    bool isMimo = false;
public:
    Shooter(int size) // конструктор класса
    {
        size += 1;
        this->size = size;
        std::string ar = "[ ]";
        arrShoot = new  std::string* [size]; //строки 
        arrShoot[0] = new std::string[size];
        arrShoot[0][0] = "   ";
        for (int i = 1; i < size; i++) {
            arrShoot[0][i] = " "+ std::to_string(i) +" ";
        }

        for (int j = 1; j < size; j++) {
            arrShoot[j] = new std::string[size]; //столбцы
            for (int i = 0; i < size; i++) {
                if (i == 0) {
                    arrShoot[j][0] = " " + std::to_string(j) + " ";
                }
                else
                    arrShoot[j][i] = "[ ]";
            }
        } 
        randPoint(); //генерируем цель
    }
    void print() {   
        if (isShot == true) {
            std::cout << "Цель уничтожена!\n";
        }
        if (isMimo == true) {
            std::cout << "Выстрел мимо стенда!\n";
            isMimo = false;
        }

        for (int j = 0; j < size; j++) {   
            for (int i = 0; i < size; i++) {
                std::cout << arrShoot[j][i];
            }
            std::cout << std::endl;
        }
    }
    void randPoint() {
        x = 1 + rand() % size;
        y = 1 + rand() % size; 
    }

    int Shot(Point point) {
        if (!(point.x >= 1 && point.x < size
            && point.y >= 1 && point.y < size)) {
            return -1;
        }
        //Определим как далеко совершен выстрел от цели
        int distance = abs(x - point.x) + abs(y - point.y);
        if (distance == 0) {
            arrShoot[point.x][point.y] = "[V]";
            isShot = true;
        }
        else if (distance > 4) {
            arrShoot[point.x][point.y] = "[X]";
            isMimo = true;
        }
        else {
            arrShoot[point.x][point.y] = "[" + std::to_string(distance) + "]";
        }
        return distance;
    }    
 
};

Point getShot() {
    std::cout << "Введите выстрел: ";
    Point point;
    std::cin >> point.x >> point.y;
    return point;
}



int printShooter(Shooter shooter, int i) {
    system("cls");
    std::cout << "\t МИШЕНЬ \n"
        << "Осталось потронов: " << i << std::endl;
    shooter.print();
    int distance = shooter.Shot(getShot());
    return distance;
}




void TargetSooter() {

    srand(time(0));
    int sizeShooter = 5;
    int countBbullet = 9;
    Shooter shooter(sizeShooter);

    int bals = 0;
    for (int i = countBbullet; i > 0; i--)
    {
       int distance = printShooter(shooter, i);
       if (distance == 0) {
           bals += 10;
       }
       else if (distance <2) {
           bals += 5;
       }
       else if (distance < 4) {
           bals+= 1;
       }

    }   
    std::cout << "Потроны кончились!\n";
    std::cout << "Всего заработано! " << bals << "баллов!\n" ;
}