#include "Car.h"
#include "Volvo.h"

Volvo::Volvo()
{
	speed = Speed();
	fuel = Fuel();
	consumption = Consumption();
	rainspeed = RainSpeed();
	sunnyspeed = SunnySpeed();
	snowspeed = SnowSpeed();
}

int Volvo::GetSpeed()
{
	return speed;
}

int Volvo::GetFuel()
{
	return fuel;
}

int Volvo::GetConsumption()
{
	return consumption;
}

int Volvo::GetRainSpeed()
{
	return rainspeed;
}

int Volvo::GetSunnySpeed()
{
	return sunnyspeed;
}

int Volvo::GetSnowSpeed()
{
	return snowspeed;
}
