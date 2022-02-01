#pragma once
#include "MyInclude.h"
#include "Def.ItemDef.h"

class WeaponDef : public ItemDef {
protected:
	int damage;
public:
	int GetDamage() { return damage; }
	WeaponDef(std::string name, std::string description, int damage) : ItemDef(name, description), damage(damage) {}
	std::string ItemUse(PlaerStatus& plaerStatus) {
		return "Вы держите в руках " + GetName();
	}
	virtual std::string GetInfo() {
		//строка с информацией о предмете
		return GetNameMenu() + " Урон: " + std::to_string(damage);
	}
	std::string StrToFile() {
		return "WeaponDef;;;" + GetName() + ";;;" + GetDescription() +";;;"+ std::to_string(damage);
	}
};