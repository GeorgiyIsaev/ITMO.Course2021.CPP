#pragma once
#include "Def.ItemDef.h"
#include "Def.WeaponDef.h"


class WeaponOff {
public:
	static ItemDef* createWeapon(std::string name, std::string description, int damage) {
		return new WeaponDef(name, description, damage);
	}	
	static ItemDef* createWeapon(int id) {
		switch (id) {
		case 1:
			return new WeaponDef("�������� ���", "��� �� �����", 3);	
		case 2:
			return new WeaponDef("������ ���", "��� �� ����", 5);		
		case 3:
			return new WeaponDef("�������� ���", "��� �� ������", 7);	

		case 4:
			return new WeaponDef("�������� ���", "��� �� �����", 7);
		case 5:
			return new WeaponDef("������ ���", "��� �� ����", 9);
		case 6:
			return new WeaponDef("�������� ���", "��� �� ������", 15);

		default:
			return new WeaponDef("�����", "������� ��������� �����", 3);
		}
	}
};