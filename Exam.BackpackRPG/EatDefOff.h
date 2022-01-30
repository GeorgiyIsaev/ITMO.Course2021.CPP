#pragma once
#include "Def.EatDef.h"


class EatDefOff {
public:
	static EatDef* createRuna(std::string name, std::string description, int damage) {
		return new EatDef(name, description);
	}

	static EatDef* createRuna(int id) {
		switch (id) {
		case 1:
			return new EatDef("Жареное мясо", "Мясо только что с огня");
		case 2:
			return new EatDef("Салат", "Еда из тровы и листьев");
		case 3:
			return new EatDef("Суп", "Еда из воды и овощей");

		case 4:
			return new EatDef("Торт", "Невероятная сладасть");
		case 5:
			return new EatDef("Пирожное", "Мальнькая сладость");

		default:
			return new EatDef("Сырое мясо", "Кусок сырого мяса");
		}
	}


};