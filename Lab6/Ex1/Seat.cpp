#include "Car.h"
#include "Seat.h"

Seat::Seat()
{
	speed = Speed() - 50;
	fuel = Fuel() - 150;
	consumption = Consumption();
	rainspeed = RainSpeed() + 5;
	sunnyspeed = SunnySpeed() - 5;
	snowspeed = SnowSpeed() - 10;
}

int Seat::GetSpeed()
{
	return speed;
}

int Seat::GetFuel()
{
	return fuel;
}

int Seat::GetConsumption()
{
	return consumption;
}

int Seat::GetRainSpeed()
{
	return rainspeed;
}

int Seat::GetSunnySpeed()
{
	return sunnyspeed;
}

int Seat::GetSnowSpeed()
{
	return snowspeed;
}