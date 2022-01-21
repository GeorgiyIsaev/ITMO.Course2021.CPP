#pragma once
#include "MyInclude.h"

/*Задание 1. Запись текста в файл
Требуется написать программу для записи небольшого
стихотворения с клавиатуры в текстовый файл.*/

std::string GetText() {
	return "Сижу за решеткой в темнице сырой.\n"
		"Вскормленный в неволе орел молодой,\n"
		"Мой грустный товарищ, махая крылом,\n"
		"Кровавую пищу клюет под окном,\n"
		"Клюет, и бросает, и смотрит в окно,\n"
		"Как будто со мною задумал одно;\n"
		"Зовет меня взглядом и криком своим\n"
		"И вымолвить хочет : «Давай улетим!\n"
		"Мы вольные птицы; пора, брат, пора!\n"
		"Туда, где за тучей белеет гора,\n"
		"Туда, где синеют морские края,\n"
		"Туда, где гуляем лишь ветер… да я!..\n";
}

std::string GetText(bool b) {
	std::cout << "Введите стих [Для завершения ввода - ;]\n";
	char str[256];
	std::cin.getline(str, 256, ';');
	std::string text = str;
	return text;
}

bool WriteTextToFile(const std::string& text, std::string nameFile = "TestFile.txt") {
	//std::ios::app - опция для дозаписи в файл
	std::ofstream out(nameFile); 
	if (!out)
	{
		std::cout << "Файл открыть невозможно\n";
		return false;
	}
	if (out.is_open())
	{
		out << text;
	}
	out.close();
	return true;
}

std::string ReadTextFromFile(std::string nameFile = "TestFile.txt") {
	std::string text, temp;

	std::ifstream in(nameFile); // окрываем файл для чтения
	if (in.is_open())
	{
		while (getline(in, temp))
		{		
			text += temp + "\n";
		}
	}
	in.close();     // закрываем файл
	return text;
}


void WriteToFile() {
	std::string text = GetText();
	std::cout << text << std::endl;
	if (WriteTextToFile(text)) { //Запись
		std::cout << "Файл успешно записан\n";
		std::string text2 = ReadTextFromFile(); //Чтение
		std::cout << text2 << std::endl;
	}
	else {
		std::cout << "Нет доступа к файлу\n";
	}
}
