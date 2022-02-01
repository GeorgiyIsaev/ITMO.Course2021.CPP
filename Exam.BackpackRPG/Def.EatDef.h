#pragma once
#include "MyInclude.h"
#include "Def.ItemDef.h"

class EatDef : public ItemDef {
protected:	
public:
	EatDef(std::string name, std::string description) : ItemDef(name, description) {}
	std::string ItemUse(PlaerStatus& plaerStatus) {
		return GetName() + " ������ ������";
	}
	virtual std::string GetInfo() {
		//������ � ����������� � ��������
		return GetNameMenu() + " ����� ������� ";
	}
	std::string StrToFile() {
		return "EatDef;;;" + GetName() + ";;;" + GetDescription();
	}
};