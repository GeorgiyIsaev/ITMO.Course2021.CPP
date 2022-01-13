#pragma once
#include <iostream>
#include <string>


void ValidPoint(int x = 2, int y = 2) {
	/*x {-3;3}; y={0;3}*/
	std::string point = "����� {" + std::to_string(x) + "; " + std::to_string(y) + "}";
	if (x * x + y * y < 9 && y > 0)
	{
		std::cout << point << " ��������� ������" << std::endl;
	}
	else if (x * x + y * y > 9 || y < 0)
	{
		std::cout << point << " ��������� �������" << std::endl;
	}
	else {
		std::cout << point << " ��������� �� �������" << std::endl;
	}
}
