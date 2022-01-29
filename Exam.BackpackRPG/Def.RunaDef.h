#pragma once
#include "MyInclude.h"
#include "Def.ItemDef.h"

class RunaDef : public ItemDef {
protected:
	int recharge; //����������� ����
public:
	int GetRecharge() { return recharge; }
	RunaDef(std::string name, std::string description, int recharge) : ItemDef(name, description), recharge(recharge) {}
	std::string ItemUse() {
		return "���� " + GetName() + "��������� ���������� ����!";
	}
	virtual std::string GetInfo() {
		//������ � ����������� � ��������
		return GetName() + "\t\t ����������� �����: " + std::to_string(recharge);
	}
	std::string StrToFile() {
		return "RunaDef;;;" + GetName() + ";;;" + GetDescription() + ";;;" + std::to_string(recharge);
	}
};