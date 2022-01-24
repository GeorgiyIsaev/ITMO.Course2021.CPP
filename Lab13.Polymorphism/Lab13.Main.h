#pragma once
#include "MyInclude.h"
#include "Item.h"
#include "Paperbook.h"
#include "AudioBook.h"


void Task01(){
	/*���������� 1. ���������� ������������ ������*/
	Item* pubarr[100];
	int n = 0;
	char choice;
	do
	{
		std::cout << "\n������� ������ ��� ����� ��� ��������� �����(b/a) ? ";
		std::cin >> choice;
		if (choice == 'b')
			pubarr[n] = new Paperbook;
		else
			pubarr[n] = new AudioBook;
		pubarr[n++]->getdata();
		std::cout << "����������(�/n) ? ";
		std::cin >> choice;
	} while (choice == 'y');

	for (int j = 0; j < n; j++) //���� �� ���� ��������
		pubarr[j]->putdata(); //������� ������ � ����������
	std::cout << std::endl;
}

void MainLab13() {
	/*������������ ������� 13. ���������� ������������*/
	/*���������� 1. ���������� ������������ ������*/
	Task01();
}

