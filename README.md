  # [ITMO.Course2021.CPP.](https://github.com/GeorgiyIsaev/ITMO.Course2021.CPP)
 Выполнение лабораторных работ в соответствии с учебником "Руководство практикум_С++21"

## Оглавление:

[Тема 1. Организация ввода-вывода данных](#Тема-1-Организация-ввода-вывода-данных)  
[Тема 2. Реализация управляющих операторов](#Тема-2-Реализация-управляющих-операторов)  
[Тема 3. Использование функций](#Тема-3-Использование-функций)  
[Тема 4. Использование указателей и ссылок](#Тема-4-Использование-указателей-и-ссылок)  
[Тема 5. Работа с массивами](#Тема-5-Работа-с-массивами)  
[Тема 6. Работа с файлами](#Тема-6-Работа-с-файлами)  
[Тема 7. Применение структур и кортежей](#Тема-7-Применение-структур-и-кортежей)  
[Тема 8. Объявление и реализация класса. Реализация инкапсуляции. Конструкторы и деструкторы](#Тема-8-Объявление-и-реализация-класса-Реализация-инкапсуляции-Конструкторы-и-деструкторы)   
[Тема 9. Обработка исключительных операций](#Тема-9-Обработка-исключительных-операций)   
[Тема 10. Реализация отношений между классами](#Тема-10-Реализация-отношений-между-классами)   
[Тема 11. Перегрузка операций](#Тема-11-Перегрузка-операций)  
[Тема 12. Реализация наследования](#Тема-12-Реализация-наследования)  
[Тема 13. Применение полиморфизма](#Тема-13-Применение-полиморфизма)   
[Тема 14. Использование шаблонных функций и классов](#Тема-14-Использование-шаблонных-функций-и-классов)  
[Тема 15. Использование STL](#Тема-15-Использование-STL)   
[Зачетное задание](#Зачетное-задание)  


### Тема 1 Организация ввода-вывода данных 

Контрольные задания.  
Задание 1. Расчет площади многоугольника  
Заданы координаты вершин пятиугольника на плоскости.   
Требуется составить программу для расчета площади данного пятиугольника.  
Определите типы данных, используемые в расчетах.  
Расчет площади проведите по формуле площади Гаусса, непосредственно
использующей координаты вершин.  
Координаты вершин пользователь должен вводить с клавиатуры.

[:arrow_up:Оглавление](#Оглавление)
____ 

### Тема 2. Реализация управляющих операторов 

Задание 1. Определение високосного года
Дано натуральное число.
Требуется определить, является ли год с данным номером високосным. Если год
является високосным, то выведите YES, иначе выведите NO.
• Год является високосным, если его номер кратен 4, но не кратен 100, а
также, если он кратен 400.  

Задание 2. Определение наибольшего из трех чисел
Даны три числа.
Требуется определить наибольшее из них и вывести на экран.  

Задание 3. Размен монет Известна монетная система России. 
Требуется выдать набор монет с наименьшим возможным количеством монет.
Каждое число из набора можно использовать сколько угодно раз. 

Задание 4. Стрельба по мишени Требуется разработать программу, имитирующую стрельбу по мишени.
Пользователь вводит данные о выстреле в виде пары чисел – координат x и y заранее известное количество раз.
Повтор ввода следует организовать в цикле. После «стрельбы» пользователю выводится информация о сумме очков и его уровень как стрелка (например, снайпер, просто стрелок, новичок). 
Вариант мишени выберите самостоятельно.  
Дополнительные задания:  
− реализовать центр мишени случайным значением, тогда стрелок не будет знать местонахождение мишени (стрельба «вслепую»);


[:arrow_up:Оглавление](#Оглавление)
____

### Тема 3. Использование функций  

Контрольные задания.   
Задание 1. Расчет площади сложной фигуры  
Требуется написать программу для вычисления площади выпуклого пятиугольника, примерный вид изображен ран рисунке:
Исходные данные: координаты вершин пятиугольника (значения задайте самостоятельно).
Для решения задачи следует использовать метод декомпозиции: сначала получить площадь треугольников, а затем их сложить.
Для расчета сторон и площади треугольника использовать отдельные соответствующие функции. Длину каждой стороны можно определить по следующей формуле:
,
где xb, yb и xc, yc координаты двух точек отрезка.
Плошать треугольника по трем сторонам определялась в упражнении 3 практического занятия 1.

Задание 2. Применение итерации реализации функции
Требуется реализовать функцию вычисления кубического корня в двух вариантах: в первом, используя стандартную функцию pow(a,1.0/3), а во втором – итерационную формулу:
.
В функции main() протестируйте работу созданных функций.

Задание 3. Работа с различными треугольниками
Требуется написать программу, рассчитывающее площадь треугольников двух типов: равностороннего и разностороннего.
Для решения задачи реализуйте перегруженные функции: первая должна принимать один параметр – сторону и вычислять площадь равностороннего треугольника, вторая – принимать три параметра-стороны треугольника для вычисления площади разностороннего треугольника.
Выбор типа треугольника реализуйте с помощью диалога с пользователем.

Задание 4. Рекурсивная функция суммы ряда
Разработайте рекурсивную функцию вычисления суммы ряда
S = 5 + 10 + 15 + … + 5·n,
при n>0.

Задание 5. Применение рекурсии для перевода целого числа в двоичный код
Требуется написать рекурсивную функцию перевода целого положительного числа из десятичной системы исчисления в двоичную.
Классический алгоритм перевода: нужно входной параметр num делить на 2 до тех пор, пока num>2. При каждом делении нужно выделять остаток с помощью выражения num%2.

[:arrow_up:Оглавление](#Оглавление)
____

### Тема 4. Использование указателей и ссылок

Контрольные задания

Задание 1. Вычисление корней квадратного уравнения
Требуется реализовать функцию вычисления корней квадратного уравнения.
• Функция должна возвращать значение 1, если корни найдены, значение нуля, если оба корня совпадают, и значение -1, если корней не существует.
• Значения корней уравнений должны возвращаться в качестве аргументов функции, передаваемых по ссылке.
Прототип функции должен выглядеть следующим образом:
int Myroot(double, double, double, double&, double&);

Задание 2. Реализация ввода данных
Требуется реализовать функцию Input(a,b) так, чтобы она была использована в программе следующим образом:
```cpp
int main()
{
int a, b;
if(Input(a,b)== false) // if(!Input(a,b))
{
cerr << "error";
return 1;
}
int s = a + b;
return 0;
}
```
В функции Input(a,b) должен быть реализован ввод данных с клавиатуры с проверкой корректности ввода (правила проверки корректности кода установите на ваше усмотрение).  

[:arrow_up:Оглавление](#Оглавление)
____

### Тема 5. Работа с массивами   

Контрольные задания  
Задание 1. Передача массива в функцию
Реализуйте созданный вами функционал в упражнениях 1 и 2 в виде соответствующих функций, которые будут принимать массив и возвращать требуемые результаты.
Функция должна принимать два параметра: целочисленное значение – размер массива и сам массив.

Задание 2. Возврат массива из функции
➢ В качестве результата работы функции может быть указатель на массив, создаваемый в этой функции.
Дано: в функции main() объявлены два массива равного размера. В результате вызова функции max_vect() возвращается массив, состоящий из больших элементов, стоящих на соответствующих местах в исходных массивах.
Требуется: изучите содержимое функции main() и реализуйте функцию max_vect() согласно сценария функции main(), так чтобы она возвращала адрес на созданный ею массив с элементами – большими значениями на соответствующих индексах исходных массивов, например, для заданных массивов результирующий массив должен быть равен {7, 6, 5, 4, 5, 6, 7, 3}.
```cpp
int main()
{
int a[]={1,2,3,4,5,6,7,2};
int b[]={7,6,5,4,3,2,1,3};
int kc = sizeof(a)/sizeof(a[0]); //Количество элементов массива
int *c; //Указатель на результирующий массив
c = max_vect(kc,a,b); //вызов функции для создания массива
for (int i = 0;i < kc; i++) //Вывод результата.
cout << c[i] << " ";
cout << endl;
delete []c; //Возврат памяти.
}
```
[:arrow_up:Оглавление](#Оглавление)
____

### Тема 6. Работа с файлами 

Контрольные задания  

Задание 1. Запись текста в файл  
Требуется написать программу для записи небольшого стихотворения с клавиатуры в текстовый файл.

Задание 2. Сохранение данных в текстовый файл В решении упражнения 2 занятия 5 создайте текстовый файл и запишите в него два массива: исходный и отсортированный.

[:arrow_up:Оглавление](#Оглавление)
____ 

### Тема 7. Применение структур и кортежей 

Контрольные задания

Задание 1. Структура Time  
Создайте структуру с именем Time. Три ее поля, имеющие тип int, назовите hours, minutes и seconds. Напишите программу, которая просит пользователя ввести время в формате часы, минуты, секунды. Можно запрашивать на ввод как три значения сразу, так и выводить для каждой величины отдельное приглашение. Программа должна хранить время в структурной переменной типа Time и выводить количество секунд во введенном времени. Добавьте в структуру две функции для сложения и вычитания интервалов времени.
При решении задачи учитывайте естественные допустимые значения для реализуемых характеристик.

Задание 2. Решение квадратного уравнения  
Создайте структуру – решение квадратного уравнения, содержащей два вещественных поля – корни квадратного уравнения.
Реализуйте решение квадратного уравнения с помощью функции, возвращающей переменную типа структуры – решение этого уравнения с полями – корнями уравнения.

Задание 3. Решение квадратного уравнения  
Чтобы вернуть из функции несколько результатов без реализации нового типа (класса или структуры), можно объединить их в кортеж. Кортеж tuple (из заголовочного файла <tuple>) допускает наличие элементов различных типов и количество объектов в кортеже должно быть известно во время компиляции.
Реализуйте решение квадратного уравнения с помощью функции, возвращающей переменную типа кортеж, содержащую решение этого уравнения (корни уравнения) и флаг, показывающий наличие корней. 

[:arrow_up:Оглавление](#Оглавление)
____

### Тема 8. Объявление и реализация класса. Реализация инкапсуляции. Конструкторы и деструкторы.

Контрольные задания   

Задание 1. Класс Time   
Создайте класс с именем Time, содержащий три поля типа int, предназначенные для хранения часов, минут и секунд.  
Один из конструкторов класса должен инициализировать поля нулевыми значениями, а другой конструктор — заданным набором значений.  
В конструктор с параметрами добавьте реализацию приведения больших неправильных значений параметров к правильным значениям, например, если клиент захочет создать время с параметром минут равным 70, то конструктор должен преобразовать это значение к правильному виду: количество часов и минут.  
Создайте метод класса, который будет выводить значения полей на экран в формате 11:59:59, и метод, складывающий значения двух объектов типа Time, передаваемых в качестве аргументов.
Где это возможно и оправдано, сделайте методы константными.  
В функции main() следует создать два инициализированных объекта (подумайте, должны ли они быть константными) и один неинициализированный объект. Затем сложите два инициализированных значения, а результат присвойте третьему объекту и выведите его значение на экран.

[:arrow_up:Оглавление](#Оглавление)
____

### Тема 9. Обработка исключительных операций  

Контрольные задания  

Задание 1. Безопасная реализация класса Triangle  
Требуется разработать класс Triangle, представляющий треугольник, который задается тремя сторонами.  
Для класса определить функцию, вычисляющую площадь треугольника по трем сторонам (см. практическое занятие 1).  
Реализовать генерацию исключительной ситуации при попытке задать стороны недопустимой длины – если хотя бы одна из сторон имеет длину большую, чем сумма двух других сторон.  

Задание 2. Безопасная реализация класса Time
Добавьте в класс Time класс, реализующий возможность реагировать на исключительные ситуации, возникающие, например, при создании «неправильных» объектов, проведении операций с объектами класса и т.д.

[:arrow_up:Оглавление](#Оглавление)
____

### Тема 10. Реализация отношений между классами

Контрольные задания

Задание 1. Реализация класса Triangle  
В этом задании требуется создать класс Triangle, определяемый тремя точками – объектами соответсвующего класса Dot. 
Элементы класса Triangle:  
• Три точки – объекты класса Dot.  
• Конструктор.  
• Методы, позволяющие:  
− вывести длины сторон треугольника;  
− расчитать периметр треугольника;  
− расчитать площадь треугольника  
Класс Dot:  
Определяется двумя координатами и функцией – расстоянием между точками.   
Файл dot.h  
```cpp
class Dot
{
private:
double x;
double y;
public:
Dot();
Dot(double x, double y);
double distanceTo(Dot point);
};
```
Файл dot.cpp
```cpp
#include “dot.h”
#include <math.h>
Dot::Dot()
{
x = 0; y = 0;
}
Dot::Dot(double x, double y)
{
this -> x = x;
this -> y = y;
}
63
double Dot::distanceTo(Dot point)
{
return sqrt(pow(point.x – x,2) + pow(point.y – y,2));
}
```
Реализуйте два варианта отношений между треугольником (целое) и точкой (часть) – как композиция (целое отвечает за жизненный цикл части) и как агрегация (часть и целое могут существовать по-отдельности).

[:arrow_up:Оглавление](#Оглавление)
____ 

### Тема 11. Перегрузка операций  

Контрольные задания  

Задание 1. Перегрузка операторов в классе Time   
Требуется реализовать в классе Time (добавить в ранее созданный класс) перегрузку следующий операций:  
• сложение объектов Time,  
• вычитание объектов Time,  
• сложение объекта Time и переменной вещественного типа,  
• сложение переменной вещественного типа и объект Time,  
• сравнение двух объектов Time.  
Реализуйте возможность преобразования полученных результатов к корректному виду.  
В функции main() создайте требуемые объекты и проверьте работу перегруженных операций.  

Задание 2. Реализация сортировки точек в векторе    
Разработайте класс Point с двумя полями вещественного типа – x и y и конструктором с параметрами, а также с функцией расчета расстояния до центра координат.  
Реализуйте для класса Point перегрузку операторов передать в поток вывода (<<) и сравнения (<) для того, чтобы следующий фрагмент кода работал (используется стандартный алгоритм сортировки):  
```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // для алгоритма сортировки
int main()
{
std::vector<Point> v;
v.push_back(Point(1,2));
70
v.push_back(Point(10,12));
v.push_back(Point(21,7));
v.push_back(Point(4,8));
std::sort(v.begin(), v.end()); // требуется перегрузка оператора < для // класса Point
for (auto &point : v)
std::cout << point << '\n'; // требуется перегрузка оператора << для // класса Point
return 0;
}
```
Указание: при перегрузке оператора сравнения сравнивайте по расстоянию до центра координат, тогда сортировка вектора точек будет проходить по этому признаку.

[:arrow_up:Оглавление](#Оглавление)
____

### Тема 12. Реализация наследования

Контрольные задания: отстутсвует

[:arrow_up:Оглавление](#Оглавление)
____

### Тема 13. Применение полиморфизма 

Контрольные задания  
Задание 1. Полиморфизм в системе классов учебного центра  
Требуется реализовать полиморфный вызов методов производных классов системы, описанной в упражнениях предыдущего практического занятия.

[:arrow_up:Оглавление](#Оглавление)
____

### Тема 14. Использование шаблонных функций и классов 

Контрольные задания.  
Задание 1. Шаблонная функция обработки массива   
Напишите шаблон функции, возвращающей среднее арифметическое всех элементов массива.  
Аргументами функции должны быть имя и размер массива (типа int).  
В функции main() проверьте работу с массивами типа int, long, double и char.  

[:arrow_up:Оглавление](#Оглавление)
____

### Тема 15. Использование STL 

Контрольные задания  
Задание 1. Организация хранения данных в контейнере  
Требуется написать программу, которая позволит присваивать
оценки студентам, указывая только имя студента.
Для организации данных используйте контейнер map 
(контейнер map – это класс, в котором все элементы хранятся
в виде пары ключ-значение), ключ должен быть уникальным 
и использоваться для доступа к связанной паре: 
имя студента – ключ, оценка (тип char) - значение.
Указание. Создайте структуру (класс в принципе
не требуется для этой задачи) StudentGrade 
с двумя элементами: имя студента (std::string) 
и оценка (char).

[:arrow_up:Оглавление](#Оглавление)
____

### Зачетное задание: 
Требования:

1. Иерархия классов с общими методами  
2. Примение копазиции или агригации между классами  
3. Запись контейнара с классами в файл и чтение  
4. Взаимодействие через отдельный класс  
____
[:arrow_up:Оглавление](#Оглавление)
