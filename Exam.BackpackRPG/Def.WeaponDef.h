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
		return "�� ��������� " + GetName();
	}
	virtual std::string GetInfo() {
		//������ � ����������� � ��������
		return GetName() + "\t\t ����: " + std::to_string(damage);
	}
};