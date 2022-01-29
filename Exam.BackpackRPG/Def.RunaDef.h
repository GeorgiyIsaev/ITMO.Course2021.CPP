#pragma once
#include "MyInclude.h"
#include "Def.ItemDef.h"

class RunaDef : public ItemDef {
protected:
	int recharge; //перезарядку руны
public:
	int GetRecharge() { return recharge; }
	RunaDef(std::string name, std::string description, int recharge) : ItemDef(name, description), recharge(recharge) {}
	std::string ItemUse() {
		return "Руна " + GetName() + "выпустила магический свет!";
	}
	virtual std::string GetInfo() {
		//строка с информацией о предмете
		return GetName() + "\t\t Перезарядка через: " + std::to_string(recharge);
	}
	std::string StrToFile() {
		return "RunaDef;;;" + GetName() + ";;;" + GetDescription() + ";;;" + std::to_string(recharge);
	}
};