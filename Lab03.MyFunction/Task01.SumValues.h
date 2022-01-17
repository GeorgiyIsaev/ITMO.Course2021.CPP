#pragma once
#include <iostream>
#include <string>
#include <cmath>
/*Задание 1. Сумма чисел
1. Создайте новый проект и объявите функцию, реализующую алгоритм
вычисления суммы чисел от 1 до любого целого положительного числа n:
int addNumders(int n)
{
if (n == 1) return 1; // выход из рекурсии
else return (n + addNumders(n - 1));
}
2. В функции main() реализуйте ввод требуемого числа, вызов функции и 
вывод на экран результата.
3. Объявите вторую функцию с тем же именем (она будет перегруженной), 
которая будет суммировать числа на интервале от первого числа до второго.
4. В функции main() реализуйте ввод двух переменных – интервала
для которого вычисляется сумма чисел, числа, вызов функции и 
вывод на экран результата.*/

int addNumders(int n)
{
	if (n == 1) return 1; // выход из рекурсии
	else return (n + addNumders(n - 1));
}

int addNumders(int start, int end)
{
	if (end == start) return 1; // выход из рекурсии
	else return (end + addNumders(end - 1));
}


int getValue() {
	std::cout << "Введите число >> ";
	std::string textValue;
	std::cin >> textValue;
	int value = 0;
	try {
		value = stoi(textValue);
	}
	catch (int ex)
	{
		std::cout << "ERROR: Введеное значение не число! ";
		getValue();
	}
	return value;
}

void SumValue() {
	
	int value = getValue();
	int sum = addNumders(value);
	std::cout << "Сумма для " << value <<
		":  " << sum << std::endl;
	
	/*Перегруженый*/
	sum = addNumders(value, value + value);
	std::cout << "Сумма для чисел от " << value << " до " <<
		value + value << ": " << sum << std::endl;
}