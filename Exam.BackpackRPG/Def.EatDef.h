#pragma once
#include "MyInclude.h"
#include "Def.ItemDef.h"

class EatDef : public ItemDef {
protected:
	int heatHeal;
	int count;
public:
	EatDef(std::string name, std::string description, int heatHeal, int count) : ItemDef(name, description), heatHeal(heatHeal),count(count){}
	std::string ItemUse(/*PlaerStatus* plaerStatus*/) {
		return GetName() + " вкусно пахнет";
	}
	virtual std::string GetInfo() {
		//строка с информацией о предмете
		return GetNameMenu() + " Можно скушать ";
	}

	std::string StrToFile() {
		return "EatDef;;;" + GetName() + ";;;" + GetDescription() + ";;;" + std::to_string(heatHeal);
	}
};