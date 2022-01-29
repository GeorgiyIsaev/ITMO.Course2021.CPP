#pragma once
#include "MyInclude.h"
#include "Def.ItemDef.h"

class WeaponDef : public ItemDef {
protected:
	int damage;
public:
	int GetDamage() { return damage; }
	WeaponDef(std::string name, std::string description) : ItemDef(name, description) {}
	std::string ItemUse() {
		return "Вы взмахнули " + GetName();
	}
	virtual std::string GetInfo() {
		//строка с информацией о предмете
		return GetName() + "\t\t Урон: " + std::to_string(damage);
	}
};