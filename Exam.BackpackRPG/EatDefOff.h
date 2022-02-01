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
			return new EatDef("������� ����", "���� ������ ��� � ����", 5);
		case 2:
			return new EatDef("�����", "��� �� ����� � �������", 5);
		case 3:
			return new EatDef("���", "��� �� ���� � ������", 10);

		case 4:
			return new EatDef("����", "����������� ��������",20);
		case 5:
			return new EatDef("��������", "��������� ��������",22);

		default:
			return new EatDef("����� ����", "����� ������ ����",-4);
		}
	}


};