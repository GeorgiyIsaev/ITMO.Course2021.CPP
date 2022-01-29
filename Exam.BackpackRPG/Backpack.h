#pragma once
#include "MyInclude.h"
#include "Def.ItemDef.h"


class Backpack {
private:
	std::vector<ItemDef*> itemDefs;
public:
	void addItem(ItemDef* itemDef) {
		itemDefs.push_back(itemDef);
	}
	void fileSave(const std::string & text, std::string nameFile = "TestFile.txt") {	
			std::ofstream out(nameFile);
			if (!out)
			{
				std::cout << "Файл открыть невозможно\n";	
				return;
			}
			if (out.is_open())
			{
				out << text;
			}
			out.close();		
	}


};




