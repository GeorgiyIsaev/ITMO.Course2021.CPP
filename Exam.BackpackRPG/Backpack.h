#pragma once
#include "MyInclude.h"
#include "Def.ItemDef.h"
#include "WeaponOff.h"
#include "ItemDefOff.h"

class Backpack {
private:
	std::vector<ItemDef*> itemDefs;
	PlaerStatus* plaer;// = new PlaerStatus();

public:
	Backpack(PlaerStatus* plaer) {
		this->plaer = plaer;
	}

	void AddItem(ItemDef* itemDef) {
		itemDefs.push_back(itemDef);
	}
	int Size() {return itemDefs.size();	}
	void FileSave(std::string nameFile = "TestFile.txt") {	
			std::ofstream out(nameFile);
			if (!out)
			{
				std::cout << "Файл открыть невозможно\n";	
				return;
			}
			if (out.is_open())
			{
				for(ItemDef* itemDef:  itemDefs )
					out << itemDef->StrToFile() << "\n";
			}
			out.close();		
	}
	void ReadFile(std::string nameFile = "TestFile.txt") {
		std::string temp;

		std::ifstream in(nameFile); // окрываем файл для чтения
		if (in.is_open())
		{
			while (getline(in, temp))
			{			
				itemDefs.push_back(ItemDefOff::createItem(temp));			
			}
		}
		in.close();     // закрываем файл
	}

	void PrintBackpack() {
		std::cout<<"РЮГЗАК:" << "\n";
		for (ItemDef* itemDef : itemDefs)
			std::cout << itemDef->GetInfo() << "\n";
		std::cout << "\n";
	}
	void UseItem(int index) {
		if (index > 0 && index < Size()) {
			std::cout << itemDefs[index]->ItemUse(plaer) << "\n";
		}
	}

};




