#pragma once
#include "Def.EatDef.h"


class EatDefOff {
public:
	static EatDef* createEat(std::string name, std::string description, int heat, int count) {
		return new EatDef(name, description, heat, count);
	}

	static EatDef* createEat(int id) {
		switch (id) {
		case 1:
			return new EatDef("������� ����", "���� ������ ��� � ����", 5,1);
		case 2:
			return new EatDef("�����", "��� �� ����� � �������", 5,1);
		case 3:
			return new EatDef("���", "��� �� ���� � ������", 10,1);

		case 4:
			return new EatDef("����", "����������� ��������",20,1);
		case 5:
			return new EatDef("��������", "��������� ��������",22,1);

		default:
			return new EatDef("����� ����", "����� ������ ����",-4,1);
		}
	}


};