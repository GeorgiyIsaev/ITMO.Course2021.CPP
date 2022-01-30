#pragma once
#include "MyInclude.h"
#include "Def.ItemDef.h"
#include "WeaponOff.h"
#include "ItemDefOff.h"

class Backpack {
private:
	std::vector<ItemDef*> itemDefs;
public:
	void AddItem(ItemDef* itemDef) {
		itemDefs.push_back(itemDef);
	}
	int Size() {return itemDefs.size();	}
	void FileSave(std::string nameFile = "TestFile.txt") {	
			std::ofstream out(nameFile);
			if (!out)
			{
				std::cout << "���� ������� ����������\n";	
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

		std::ifstream in(nameFile); // �������� ���� ��� ������
		if (in.is_open())
		{
			while (getline(in, temp))
			{			
				itemDefs.push_back(ItemDefOff::createItem(temp));			
			}
		}
		in.close();     // ��������� ����
	}

	void PrintBackpack() {
		std::cout<<"������:" << "\n";
		for (ItemDef* itemDef : itemDefs)
			std::cout << itemDef->GetInfo() << "\n";
		std::cout << "\n";
	}
	void UseItem(int i) {
		if (i > 0 && i < Size()) {
			std::cout << itemDefs[i]->ItemUse() << "\n";
		}
	}

};




