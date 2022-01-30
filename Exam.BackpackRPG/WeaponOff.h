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
			return new WeaponDef("Каменный Нож", "Нож из камня", 3);	
		case 2:
			return new WeaponDef("Медный нож", "Нож из меди", 5);		
		case 3:
			return new WeaponDef("Железный нож", "Нож из железа", 7);	

		case 4:
			return new WeaponDef("Каменный Меч", "Меч из камня", 7);
		case 5:
			return new WeaponDef("Медный Меч", "Меч из меди", 9);
		case 6:
			return new WeaponDef("Железный Меч", "Меч из железа", 15);

		default:
			return new WeaponDef("Палка", "Крепкая деревяная палка", 3);
		}
	}
};