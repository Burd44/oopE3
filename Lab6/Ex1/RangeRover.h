#include "Car.h"
#pragma once
class RangeRover : public Car {
	int speed, fuel, consumption, rainspeed, sunnyspeed, snowspeed;
public:
	RangeRover();
	int GetSpeed();
	int GetFuel();
	int GetConsumption();
	int GetRainSpeed();
	int GetSunnySpeed();
	int GetSnowSpeed();
};