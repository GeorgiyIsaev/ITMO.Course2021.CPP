#pragma once
#include "Def.EatDef.h"


class EatDefOff {
public:
	static EatDef* createRuna(std::string name, std::string description, int heat, int count) {
		return new EatDef(name, description, heat, count);
	}

	static EatDef* createRuna(int id) {
		switch (id) {
		case 1:
			return new EatDef("Жареное мясо", "Мясо только что с огня", 5);
		case 2:
			return new EatDef("Салат", "Еда из тровы и листьев", 5);
		case 3:
			return new EatDef("Суп", "Еда из воды и овощей", 10);

		case 4:
			return new EatDef("Торт", "Невероятная сладасть",20);
		case 5:
			return new EatDef("Пирожное", "Мальнькая сладость",22);

		default:
			return new EatDef("Сырое мясо", "Кусок сырого мяса",-4);
		}
	}


};