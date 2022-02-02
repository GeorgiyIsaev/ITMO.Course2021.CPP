#pragma once
#include "MyInclude.h"


int controlWASD() {
	char ch;
	while (1)
	{
		ch = _getch();
	
		int code = static_cast<int>(ch);
		std::cout << "COD int " << code << std::endl;
		switch (code) {
		case 27: //(esc - 27)
			return 0; 
		case 13: case 69: case 101: case (-45): case (-13):
			//	ДЕЙСТВИЕ ENTER(13) или E
			return 1; 

		case 72: case (-106): case (-26): case 119: case 87:
			// 72 стрелка ввверх, и все вариатции WwЦц
			code = 72;  return code; break;
		case 80: case (-101): case (-21): case 115: case 83:
			//	80 Стрелка вниз S - 21
			code = 80;  return code; break;
		case 75: case (-108): case (-28): case 97: case 65:
			//	75 Стрелка влево A - 28
			code = 75;  return code; break;
		case 77: case (-126): case (-94): case 100: case 68:
			//	75 Стрелка влево D - 68		
			code = 77;  return code; break;
		
		case 9: case 105: case 73: case (-40): case (-8):
			//	i I (Ш ш) (9-Tab)
			code = 9;  return code; break;
		case 32: case 99: case 47: case (-15): case (-47):
			//	(32-Пробел) Клавиша C
			code = 32;  return code; break;	
		}
	}
}