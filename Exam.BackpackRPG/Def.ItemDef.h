#pragma once
#include "MyInclude.h"

/*Абстрактный класс для хранения информациии о всех предметах*/
class ItemDef {
protected:
	std::string name;
	std::string description;
public:
	std::string GetName() { return name; }
	std::string GetDescription() { return description; }

	ItemDef(std::string name, std::string description) : name(name), description(description){}
	virtual std::string ItemUse(const PlaerStatus& plaerStatus) = 0; //вызвается при использвании предмета
	virtual std::string GetInfo() = 0; //строка с информацией о предмете
	virtual std::string StrToFile() = 0; //вызвается при использвании предмета
	std::string GetNameMenu() {
		int count = name.length();
		std::string temp = name;
		for (int i = count; i < 25; i++)
		{
			temp += " ";
		}
		return temp; }
};
