#pragma once
#include <iostream>
#include <string>


void ValidPoint(int x = 2, int y = 2) {
	/*x {-3;3}; y={0;3}*/
	std::string point = "Точка {" + std::to_string(x) + "; " + std::to_string(y) + "}";
	if (x * x + y * y < 9 && y > 0)
	{
		std::cout << point << " находится внутри" << std::endl;
	}
	else if (x * x + y * y > 9 || y < 0)
	{
		std::cout << point << " находится снаружи" << std::endl;
	}
	else {
		std::cout << point << " находится на границе" << std::endl;
	}
}
