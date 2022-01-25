#pragma once
#include "MyInclude.h"
#include "Array.h"

/*Упражнение 1. Создание шаблонной функции сортировки массива*/
void sortingNT(int arr[], int size) {
	int j = 0;
	for (int i = 0; i < size; i++) {
		int x = arr[i];
		for (j = i - 1; j >= 0 && x < arr[j]; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = x;
	}
}

template<class T>
void sorting(T arr[], int size) {
	int j = 0;
	for (int i = 0; i < size; i++) {
		T x = arr[i];
		for (j = i - 1; j >= 0 && x < arr[j]; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = x;
	}
}
void Task01() {
	/*Упражнение 1. Создание шаблонной функции сортировки массива*/
	int arr[] = { 9,3,17,6,5,4,31,2,12 };
	int k1 = sizeof(arr) / sizeof(arr[0]);
	sortingNT(arr, k1);
	for (int i = 0; i < k1; i++) std::cout << arr[i] << ";";	
}

void Task01Template() {
	/*Упражнение 1. Создание шаблонной функции сортировки массива*/
	int arr[] = { 9,3,17,6,5,4,31,2,12 };
	double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
	char arrc[] = "Hello, word";
	int k1 = sizeof(arr) / sizeof(arr[0]);
	int k2 = sizeof(arrd) / sizeof(arrd[0]);
	int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
	sorting(arr, k1);
	for (int i = 0; i < k1; i++) std::cout << arr[i] << ";";
	std::cout << std::endl;
	sorting(arrd, k2);
	for (int i = 0; i < k2; i++) std::cout << arrd[i] << ";";
	std::cout << std::endl;
	sorting(arrc, k3);
	for (int i = 0; i < k3; i++) std::cout << arrc[i] << ";";
	std::cout << std::endl;
}


template<class Tuple>
void printTupleOfThree(Tuple t)
{
	std::cout << "("
		<< std::get<0>(t) << ", "
		<< std::get<1>(t) << ", "
		<< std::get<2>(t) << ")" << std::endl;
}

void Task02() {
	/*Упражнение 2. Создание шаблонной функции для работы с кортежем*/
	std::vector<std::string> v1{ "one", "two", "three", "four", "five", "six" };
	std::vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
	std::vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
	auto t3 = std::make_tuple(v1[0], v1[1], v2[2]);
	printTupleOfThree(t3);
}


/*Упражнение 3. Использование шаблонной функции для работы
	с кортежем любого размера*/
template<class Tuple, std::size_t N>
struct TuplePrinter {
	static void print(const Tuple& t)
	{
		TuplePrinter<Tuple, N - 1>::print(t);
		std::cout << ", " << std::get<N - 1>(t);
	}
};
template<class Tuple>
struct TuplePrinter<Tuple, 1> {
	static void print(const Tuple& t)
	{
		std::cout << std::get<0>(t);
	}
};
template<class... Args>
void printTuple(const std::tuple<Args...>& t)
{
	std::cout << "(";
	TuplePrinter<decltype(t), sizeof...(Args)>::print(t);
	std::cout << ")" << std::endl;
}
void Task03() {
	/*Упражнение 3. Использование шаблонной функции для работы
	с кортежем любого размера*/
	std::vector<std::string> v1{ "one", "two", "three", "four", "five", "six" };
	std::vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
	std::vector<float> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
	auto t1 = std::make_tuple(v1[0], v1[1], v3[0]);
	auto t2 = std::make_tuple(v1[0], v1[1], v2[1], v3[0], v3[1]);
	printTuple(t1);
	printTuple(t2);

}


/*Упражнение 4. Использование шаблонного класса массива*/

void Task04() {
	/*Упражнение 4. Использование шаблонного класса массива*/
	Array<int, long> numbers(100);
	Array<float, float> values(200);
	int i;
	for (i = 0; i < 50; i++) numbers.add_value(i);
	numbers.show_array();
	std::cout << "Sum = " << numbers.sum() << std::endl;
	std::cout << "Average = " << numbers.average_value() << std::endl;
	for (i = 0; i < 100; i++) values.add_value(i * 100);
	values.show_array();
	std::cout << "Sum = " << values.sum() << std::endl;
	std::cout << "Average = " << values.average_value() << std::endl;
}

void MainLab14() {
	/*Практическое занятие 14. Использование шаблонных функций и классов*/
	/*Упражнение 1. Создание шаблонной функции сортировки массива*/
	Task01();
	Task01Template();

	/*Упражнение 2. Создание шаблонной функции для работы с кортежем*/
	Task02();

	/*Упражнение 3. Использование шаблонной функции для работы
	с кортежем любого размера*/
	Task03();

	/*Упражнение 4. Использование шаблонного класса массива*/
	Task04();
}

