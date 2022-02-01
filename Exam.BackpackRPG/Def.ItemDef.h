#pragma once
#include "MyInclude.h"

/*����������� ����� ��� �������� ����������� � ���� ���������*/
class ItemDef {
protected:
	std::string name;
	std::string description;
public:
	std::string GetName() { return name; }
	std::string GetDescription() { return description; }

	ItemDef(std::string name, std::string description) : name(name), description(description){}
	virtual std::string ItemUse(const PlaerStatus& plaerStatus) = 0; //��������� ��� ������������ ��������
	virtual std::string GetInfo() = 0; //������ � ����������� � ��������
	virtual std::string StrToFile() = 0; //��������� ��� ������������ ��������
	std::string GetNameMenu() {
		int count = name.length();
		std::string temp = name;
		for (int i = count; i < 25; i++)
		{
			temp += " ";
		}
		return temp; }
};
