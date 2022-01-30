#pragma once
#pragma once
#include "Def.ItemDef.h"
#include "Def.WeaponDef.h"
#include "Def.RunaDef.h"
#include "WeaponOff.h"
#include "RunaDefOff.h"

class ItemDefOff {
public:
	//static ItemDef* createWeapon(std::string name, std::string description, int damage) {
	//	return new WeaponDef(name, description, damage);
	//}
	static ItemDef* createItem(std::string str) {

		std::vector<std::string> tokens;
		char* p;
		char buf[200] = "";
		rsize_t strmax = sizeof str;
		char* next_token = NULL;
		strcpy_s(buf, str.c_str());
		for (p = strtok_s(buf, ";;;", &next_token); p != NULL; p = strtok_s(NULL, ";;;", &next_token)) {		
			tokens.push_back(p);
		}

		int value;
		try {
			value = stoi(tokens[3]);
		}
		catch (std::invalid_argument e) {
			std::cout << "Caught Invalid Argument Exception\n";
			value = 1;
		}

		if (tokens[0] == "WeaponDef") {
			return new WeaponDef(tokens[1], tokens[2], value);
		}
		else if (tokens[0] == "RunaDef") {
			return new RunaDef(tokens[1], tokens[2], value);
		}


		return new WeaponDef(tokens[1], tokens[2], value);
	}
	static ItemDef* createRandomItem(int id) {
		int classItem = GetRandomInt(1, 4);
		int val = GetRandomInt(1, 6);
		switch (classItem) {
		case 1:	
			return WeaponOff::createWeapon(val);		
		case 2:
			return RunaDefOff::createRuna(val);		
		case 3:
			return new WeaponDef("Медный нож", "Нож из меди", 5);
		case 4:

		default:
			return WeaponOff::createWeapon(0);
		}
	}


};