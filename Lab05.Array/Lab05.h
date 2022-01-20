#pragma once
#include "MyInclude.h"



void Task01() {
	/*���������� 1. ��������� ������ �������*/
	const int n = 10;
	int mas[n];
	for (int i = 0; i < n; i++)
	{
		std::cout << "mas[" << i << "]=";
		std::cin >> mas[i];
	}
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += mas[i];
	}
}

void Task02() {
	/*���������� 2. ���������� �������*/
	const int N = 10;
	int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
	int min = 0; // ��� ������ ������������ ��������
	int buf = 0; // ��� ������ ����������
	for (int i = 0; i < N; i++)
	{
		min = i; // ����� ������� ������, ��� ������ � ����������� ���������
		// � ����� ������ �������� ����� ������ � ����������� ���������
		for (int j = i + 1; j < N; j++)
			min = (a[j] < a[min]) ? j : min;
		// ������������ ����� ��������, ������� ��� ������� � �������
		if (i != min)
		{
			buf = a[i];
			a[i] = a[min];
			a[min] = buf;
		}
	}
	for (int i : a)
		std::cout << i << '\t';
}


/*���������� 3. ������������� ��������� �� �������*/
void show_array(const int Arr[], const int N)
{
	for (int i = 0; i < N; i++)
		std::cout << Arr[i] << " ";
	std::cout << "\n";
}
bool from_min(const int a, const int b)
{
	return a > b;
}
bool from_max(const int a, const int b)
{
	return a < b;
}
void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b))
{
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < N - 1; j++)			
		{
			if ((*compare)(Arr[j], Arr[j + 1]))
				std::swap(Arr[j], Arr[j + 1]);
		}
	}
}

void Task03() {
	/*���������� 3. ������������� ��������� �� �������*/
	const int N = 10;
	int my_choose = 0;
	int A[N] = { 9,8,7,6,1,2,3,5,4,9 };
	std::cout << "1. ����������� �� �����������\n";
	std::cout << "2. ����������� �� ��������\n";
	std::cin >> my_choose;
	std::cout << "�������� ������: ";
	switch (my_choose)
	{
	case 1: bubble_sort(A, N, from_min); break;
	case 2: bubble_sort(A, N, from_max); break;
	default: std::cout << "\r����������� �������� ";
	}
	show_array(A, N);
}

void Task03p() {
	/*������������� ������� ���������� �� �������*/
	bool (*from_f[2])(int, int) = { from_min,from_max };
	const int N = 10;
	int my_choose = 0;
	int A[N] = { 9,8,7,6,1,2,3,5,4,9 };
	show_array(A, N);
	bubble_sort(A, N, (*from_f[my_choose - 1]));
	show_array(A, N);
}

void Task04() {
	/*���������� 4. ���������� ������������� �������*/
	int size = GetValue("������ ������ ������� >> ");
	int* myArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		myArray[i] = (rand() % 10) + 1;
	}
	show_array(myArray, size);
}






void MainLab05() {
	/*������������ ������� 5. ������ � ���������*/
	/*���������� 1. ��������� ������ �������*/
	Task01();
	/*���������� 2. ���������� �������*/
	Task02();
	/*���������� 3. ������������� ��������� �� �������*/
	Task03();
	Task03p();

	/*���������� 4. ���������� ������������� �������*/
	srand(time(NULL));
	Task04();


}
