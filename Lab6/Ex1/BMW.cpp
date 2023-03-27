#include "Car.h"
#include "BMW.h"

BMW::BMW()
{
	speed = Speed() + 50;
	fuel = Fuel() - 50 ;
	consumption = Consumption() + 1;
	rainspeed = RainSpeed() - 10;
	sunnyspeed = SunnySpeed() + 10;
	snowspeed = SnowSpeed() - 5;
}

int BMW::GetSpeed()
{
	return speed;
}

int BMW::GetFuel()
{
	return fuel;
}

int BMW::GetConsumption()
{
	return consumption;
}

int BMW::GetRainSpeed()
{
	return rainspeed;
}

int BMW::GetSunnySpeed()
{
	return sunnyspeed;
}

int BMW::GetSnowSpeed()
{
	return snowspeed;
}