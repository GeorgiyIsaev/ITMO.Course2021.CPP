#pragma once
#include "MyInclude.h"



class PlaerStatus {
private:
	std::string name;
	int heat;
	int strength;	
	int dotX;
	int dotY;
public:
	PlaerStatus() {
		name = "Plaer";
		heat = 100;
		strength = 3;
		dotX = 5; dotY = 5;
	}
	std::string StatusBar() {
		return name + "; HP= " + std::to_string(heat) +
			"; STR= " + std::to_string(strength) + 
			" [" + std::to_string(dotX) + ":"+ std::to_string(dotY) + "]";
	}
	void SetHeat(int changeHeat) {
		heat += changeHeat;
		if (heat < 0) heat = -1;
	}
};

