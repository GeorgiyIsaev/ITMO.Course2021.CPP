#pragma once
#include "MyInclude.h"
#include "Backpack.h"
#include "WeaponOff.h"
#include "ItemDefOff.h"

void TestBackpack() {
	Backpack backpack;
	backpack.AddItem(WeaponOff::createWeapon(1));
	backpack.AddItem(WeaponOff::createWeapon(3));
	backpack.AddItem(WeaponOff::createWeapon(4));
	backpack.AddItem(RunaDefOff::createRuna(3));
	backpack.PrintBackpack();

	backpack.AddItem(ItemDefOff::createItem("WeaponDef;;;���;;;���;;;99"));
	backpack.PrintBackpack();
	backpack.FileSave();

	backpack.ReadFile();
	backpack.PrintBackpack();


	for (int i = 0; i < 7; i++) {
		backpack.AddItem(ItemDefOff::createRandomItem());
	}
	backpack.PrintBackpack();
	backpack.FileSave();

	for (int i = 0; i < 5; i++) {
		int val = GetRandomInt(0, backpack.Size());
		backpack.UseItem(val);
	}

}