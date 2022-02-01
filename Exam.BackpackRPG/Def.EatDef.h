#pragma once
#include "MyInclude.h"
#include "Def.ItemDef.h"

class EatDef : public ItemDef {
protected:	
public:
	EatDef(std::string name, std::string description) : ItemDef(name, description) {}
	std::string ItemUse(PlaerStatus& plaerStatus) {
		return GetName() + " вкусно пахнет";
	}
	virtual std::string GetInfo() {
		//строка с информацией о предмете
		return GetNameMenu() + " Можно скушать ";
	}
	std::string StrToFile() {
		return "EatDef;;;" + GetName() + ";;;" + GetDescription();
	}
};