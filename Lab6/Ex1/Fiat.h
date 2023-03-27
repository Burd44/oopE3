#include "Car.h"
#pragma once
class Fiat : public Car {
	int speed, fuel, consumption, rainspeed, sunnyspeed, snowspeed;
public:
	Fiat();
	int GetSpeed();
	int GetFuel();
	int GetConsumption();
	int GetRainSpeed();
	int GetSunnySpeed();
	int GetSnowSpeed();
};