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
			return new EatDef("������� ����", "���� ������ ��� � ����");
		case 2:
			return new EatDef("�����", "��� �� ����� � �������");
		case 3:
			return new EatDef("���", "��� �� ���� � ������");

		case 4:
			return new EatDef("����", "����������� ��������");
		case 5:
			return new EatDef("��������", "��������� ��������");

		default:
			return new EatDef("����� ����", "����� ������ ����");
		}
	}


};