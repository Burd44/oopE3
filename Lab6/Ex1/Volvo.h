#include "Car.h"
#pragma once
class Volvo : public Car {
protected:
	int speed, fuel, consumption, rainspeed, sunnyspeed, snowspeed;
public:
	Volvo();
	int GetSpeed();
	int GetFuel();
	int GetConsumption();
	int GetRainSpeed();
	int GetSunnySpeed();
	int GetSnowSpeed();
};