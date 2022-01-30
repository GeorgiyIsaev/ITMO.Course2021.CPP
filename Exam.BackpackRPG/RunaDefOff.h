#pragma once
#include "Def.ItemDef.h"
#include "Def.RunaDef.h"
#include "Def.WeaponDef.h"


class RunaDefOff {
public:
	static RunaDef* createRuna(std::string name, std::string description, int damage) {
		return new RunaDef(name, description, damage);
	}
	
	static RunaDef* createRuna(int id) {
		switch (id) {
		case 1:
			return new RunaDef("Руна света", "ИСпускает свет", 3);
		case 2:
			return new RunaDef("Руна поиска", "Позволяет найти выход", 5);
		case 3:
			return new RunaDef("Руна исцеления", "Восполняет ХП", 7);

		case 4:
			return new RunaDef("Руна починки", "Чинит оружие", 7);
		case 5:
			return new RunaDef("Руна атаки", "Временно уведичивает атаку", 9);	

		default:
			return new RunaDef("Простая руна", "Руна со странным эффектом", 3);
		}
	}


};