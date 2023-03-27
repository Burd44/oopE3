#include "Car.h"
#include "Volvo.h"
#include "BMW.h"
#include "Seat.h"
#include "Fiat.h"
#include "RangeRover.h"
#include "Weather.h"
#pragma once

class Circuit
{
	Car* v[100];
	int c[100];
	int cj;
	int p[100];
	int len;
	int i = 0;
	int weather;
public:
	void SetLength(int a);
	void AddCar(Volvo*);
	void AddCar(BMW*);
	void AddCar(Seat*);
	void AddCar(Fiat*);
	void AddCar(RangeRover*);
	void SetWeather(Weather i);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};