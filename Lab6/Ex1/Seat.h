#include "Car.h"
#pragma once
class Seat : public Car {
	int speed, fuel, consumption, rainspeed, sunnyspeed, snowspeed;
public:
	Seat();
	int GetSpeed();
	int GetFuel();
	int GetConsumption();
	int GetRainSpeed();
	int GetSunnySpeed();
	int GetSnowSpeed();
};