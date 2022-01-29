#pragma once
#include "MyInclude.h"
#include "Def.ItemDef.h"


class Backpack {
private:
	std::vector<ItemDef*> itemDefs;
public:
	void AddItem(ItemDef* itemDef) {
		itemDefs.push_back(itemDef);
	}
	void FileSave(const std::string & text, std::string nameFile = "TestFile.txt") {	
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
	void PrintBackpack() {
		for (ItemDef* itemDef : itemDefs)
			std::cout << itemDef->GetInfo() << "\n";
		std::cout << "\n";
	}


};




