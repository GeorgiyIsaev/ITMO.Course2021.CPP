#pragma once
#include "Item.h"


class AudioBook : public Item
{
private:
	double time;
public:
	void getdata()
	{
		Item::getdata();
		std::cout << "������� ����� ��������: ";
		std::cin >> time;
	}
	void putdata()
	{
		Item::putdata();
		std::cout << "\n����� �������� : "<< time;
	}	
};