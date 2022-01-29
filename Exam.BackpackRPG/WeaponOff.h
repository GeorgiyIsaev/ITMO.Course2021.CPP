#pragma once
#include "Def.ItemDef.h"
#include "Def.WeaponDef.h"


static class WeaponOff {
	static ItemDef* createWeapon(std::string name, std::string description, int damage) {
		return new WeaponDef(name, description, damage);
	}
	static ItemDef* createWeapon(std::string str) {
		//��� ������ �� �����
		std::vector<std::string> tokens;
		std::string delims = ";;;";
		std::string::size_type pos;
		while ((pos = str.find_first_of(delims)) != std::string::npos) {
			str.erase(pos, 1);			
		}			
		std::stringstream ss(str);
		std::move(std::istream_iterator<std::string>(ss), std::istream_iterator<std::string>(), std::back_inserter(tokens));	
		
		//return new WeaponDef(tokens[0], tokens[1], stoi(tokens[2]));
		return new WeaponDef(tokens[0], tokens[1], 3);
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