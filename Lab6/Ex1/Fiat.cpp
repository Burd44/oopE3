#include "Car.h"
#include "Fiat.h"

Fiat::Fiat()
{
	speed = Speed();
	fuel = Fuel() + 100;
	consumption = Consumption();
	rainspeed = RainSpeed() - 15;
	sunnyspeed = SunnySpeed() - 10;
	snowspeed = SnowSpeed() - 25;
}

int Fiat::GetSpeed()
{
	return speed;
}

int Fiat::GetFuel()
{
	return fuel;
}

int Fiat::GetConsumption()
{
	return consumption;
}

int Fiat::GetRainSpeed()
{
	return rainspeed;
}

int Fiat::GetSunnySpeed()
{
	return sunnyspeed;
}

int Fiat::GetSnowSpeed()
{
	return snowspeed;
}