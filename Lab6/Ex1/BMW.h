#include "Car.h"
#pragma once
class BMW : public Car {
	int speed, fuel, consumption, rainspeed, sunnyspeed, snowspeed;
public:
	BMW();
	int GetSpeed();
	int GetFuel();
	int GetConsumption();
	int GetRainSpeed();
	int GetSunnySpeed();
	int GetSnowSpeed();
};