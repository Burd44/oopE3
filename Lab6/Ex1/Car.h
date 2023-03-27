#pragma once
class Car{
public:
	virtual int Speed() { return 100; }
	virtual int Fuel() { return 200; }
	virtual int Consumption() { return 1; }
	virtual int RainSpeed() { return 90; }
	virtual int SunnySpeed() { return 100; }
	virtual int SnowSpeed() { return 75; }

	virtual int GetSpeed() = 0;
	virtual int GetFuel() = 0;
	virtual int GetConsumption() = 0;
	virtual int GetRainSpeed() = 0;
	virtual int GetSunnySpeed() = 0;
	virtual int GetSnowSpeed() = 0;
};