#pragma once
#include "MyInclude.h"
#include "Def.ItemDef.h"

class RunaDef : public ItemDef {
protected:
	int recharge; //перезарядку руны
public:
	int GetRecharge() { return recharge; }
	RunaDef(std::string name, std::string description, int recharge) : ItemDef(name, description), recharge(recharge) {}
	std::string ItemUse(/*PlaerStatus* plaerStatus*/) {
		return "Руна " + GetName() + "выпустила магический свет!";
	}
	virtual std::string GetInfo() {
		//строка с информацией о предмете
		return GetNameMenu() + " Перезарядка через: " + std::to_string(recharge);
	}
	std::string StrToFile() {
		return "RunaDef;;;" + GetName() + ";;;" + GetDescription() + ";;;" + std::to_string(recharge);
	}
};