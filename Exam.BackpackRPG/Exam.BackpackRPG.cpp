#include "MyInclude.h"
#include "Backpack.h"
#include "WeaponOff.h"
#include "ItemDefOff.h"

/*ИТОГОВОЕ задание*/
/*Требования*/
/*1. Иерархия классов с общими методами*/
/*2. Примение копазиции или агригации между классами*/
/*3. Запись контейнара с классами в файл и чтение*/
/*4. Взаимодействие через отдельный класс*/

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(0));

	Backpack backpack;
	backpack.AddItem(WeaponOff::createWeapon(1));
	backpack.AddItem(WeaponOff::createWeapon(3));
	backpack.AddItem(WeaponOff::createWeapon(4));
	backpack.AddItem(RunaDefOff::createRuna(3));
	backpack.PrintBackpack();

	backpack.AddItem(ItemDefOff::createItem("WeaponDef;;;Нож;;;нож;;;99"));
	backpack.PrintBackpack();
	backpack.FileSave();

	backpack.ReadFile();
	backpack.PrintBackpack();


	backpack.AddItem(ItemDefOff::createRandomItem());
	backpack.AddItem(ItemDefOff::createRandomItem());
	backpack.AddItem(ItemDefOff::createRandomItem());
	backpack.AddItem(ItemDefOff::createRandomItem());
	backpack.PrintBackpack();


}

