#pragma once
#include "Def.ItemDef.h"
#include "Def.WeaponDef.h"


/*static*/ class WeaponOff {
public:
	static ItemDef* createWeapon(std::string name, std::string description, int damage) {
		return new WeaponDef(name, description, damage);
	}
	static ItemDef* createWeapon(std::string str) {

		std::vector<std::string> tokens;
		char bufs[] = "one, two, three", * p;

		char buf[200] = "";
		rsize_t strmax = sizeof str;
		char* next_token = NULL;
		strcpy_s(bufs, str.c_str());
		std::cout << bufs << " \n";
		for (p = strtok_s(buf, ";;;", &next_token); p != NULL; p = strtok_s(NULL, ";;;", &next_token)) {
			std::cout << p << " \n";
			tokens.push_back(p);
		}

	
		std::cout << bufs << " \n";
		for (auto itemDef : tokens)
			std::cout << itemDef<< " \n";
		std::cout << "\n";

		//return new WeaponDef(tokens[0], tokens[1], stoi(tokens[2]));
		return new WeaponDef(tokens[1], tokens[2], 3);
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