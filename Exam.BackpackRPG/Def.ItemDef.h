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
	virtual void ItemUse() = 0; //��������� ��� ������������ ��������
	virtual std::string GetInfo() = 0; //������ � ����������� � ��������

};
