#include "Car.h"
#include "RangeRover.h"

RangeRover::RangeRover()
{
	speed = Speed() + 50;
	fuel = Fuel() + 200;
	consumption = Consumption();
	rainspeed = RainSpeed() + 10;
	sunnyspeed = SunnySpeed() + 25;
	snowspeed = SnowSpeed() + 25;
}

int RangeRover::GetSpeed()
{
	return speed;
}

int RangeRover::GetFuel()
{
	return fuel;
}

int RangeRover::GetConsumption()
{
	return consumption;
}

int RangeRover::GetRainSpeed()
{
	return rainspeed;
}

int RangeRover::GetSunnySpeed()
{
	return sunnyspeed;
}

int RangeRover::GetSnowSpeed()
{
	return snowspeed;
}