#include <stdio.h>
#include "Car.h"
#include "Circuit.h"
#include "Volvo.h"
#include "BMW.h"
#include "Seat.h"
#include "Fiat.h"
#include "RangeRover.h"
#include "Weather.h"

void Circuit::SetLength(int a)
{
	this->len = a;
}

void Circuit::AddCar(Volvo*)
{
	v[i++] = new Volvo();
}

void Circuit::AddCar(BMW*)
{
	v[i++] = new BMW();
}

void Circuit::AddCar(Seat*)
{
	v[i++] = new Seat();
}

void Circuit::AddCar(Fiat*)
{
	v[i++] = new Fiat();
}

void Circuit::AddCar(RangeRover*)
{
	v[i++] = new RangeRover();
}

void Circuit::SetWeather(Weather i)
{
	weather = i;
}

void BubbleSort(int c[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (c[j] < c[j + 1])
			{
				int aux = c[j];
				c[j] = c[j + 1];
				c[j + 1] = aux;
			}
}

void Circuit::Race()
{
	if (weather == 0)
	{
		for (cj = 0; cj < i; cj++)
		{
			if (v[cj]->GetConsumption() * len <= v[cj]->GetFuel())
			{
				c[cj] = v[cj]->GetRainSpeed();
			}
			else
			{
				p[cj] = v[cj]->GetRainSpeed();
			}
		}
		BubbleSort(c, cj);
	}
	else if (weather == 1)
	{
		for (cj = 0; cj < i; cj++)
		{
			if (v[cj]->GetConsumption() * len <= v[cj]->GetFuel())
			{
				c[cj] = v[cj]->GetSunnySpeed();
			}
			else
			{
				p[cj] = v[cj]->GetSunnySpeed();
			}
		}
		BubbleSort(c, cj);
	}
	else if (weather == 2)
	{
		for (cj = 0; cj < i; cj++)
		{
			if(v[cj]->GetConsumption() * len <= v[cj]->GetFuel())
			{
				c[cj] = v[cj]->GetSnowSpeed();
			}
			else
			{
				p[cj] = v[cj]->GetSnowSpeed();
			}
		}
		BubbleSort(c, cj);
	}
}

void Circuit::ShowFinalRanks()
{
	printf("%s\n", "Castigatorii sunt:");
	if(weather==0)
	{
		for (int j = 0; j < cj; j++)
		{
			if (c[j] == 90)
			{
				printf("%d%s", j + 1, ". ");
				printf("%s\n", "Volvo");
			}
			else if(c[j]==80)
			{
				printf("%d%s", j + 1, ". ");
				printf("%s\n", "BMW");
			}
			else if (c[j] == 95)
			{
				printf("%d%s", j + 1, ". ");
				printf("%s\n", "Seat");
			}
			else if (c[j] == 75)
			{
				printf("%d%s", j + 1, ". ");
				printf("%s\n", "Fiat");
			}
			else if (c[j] == 100)
			{
				printf("%d%s", j + 1, ". ");
				printf("%s\n", "Range Rover");
			}
		}
	}
	else if (weather == 1)
	{
		for (int j = 0; j < cj; j++)
		{
			if (c[j] == 100)
			{
				printf("%d%s", j + 1, ". ");
				printf("%s\n", "Volvo");
			}
			else if (c[j] == 110)
			{
				printf("%d%s", j + 1, ". ");
				printf("%s\n", "BMW");
			}
			else if (c[j] == 95)
			{
				printf("%d%s", j + 1, ". ");
				printf("%s\n", "Seat");
			}
			else if (c[j] == 90)
			{
				printf("%d%s", j + 1, ". ");
				printf("%s\n", "Fiat");
			}
			else if (c[j] == 125)
			{
				printf("%d%s", j + 1, ". ");
				printf("%s\n", "Range Rover");
			}
		}
	}
	else if (weather == 2)
	{
		for (int j = 0; j < cj; j++)
		{
			if (c[j] == 75)
			{
				printf("%d%s", j + 1, ". ");
				printf("%s\n", "Volvo");
			}
			else if (c[j] == 70)
			{
				printf("%d%s", j + 1, ". ");
				printf("%s\n", "BMW");
			}
			else if (c[j] == 65)
			{
				printf("%d%s", j + 1, ". ");
				printf("%s\n", "Seat");
			}
			else if (c[j] == 50)
			{
				printf("%d%s", j + 1, ". ");
				printf("%s\n", "Fiat");
			}
			else if (c[j] == 100)
			{
				printf("%d%s", j + 1, ". ");
				printf("%s\n", "Range Rover");
			}
		}
	}
	printf("\n");
}

void Circuit::ShowWhoDidNotFinish()
{
	printf("%s\n", "Nu au terminat cursa:");
	if (weather == 0)
	{
		for (int j = 0; j < cj; j++)
		{
			if (p[j] == 90)
				printf("%s\n", "Volvo");
			else if (p[j] == 80)
				printf("%s\n", "BMW");
			else if (p[j] == 95)
				printf("%s\n", "Seat");
			else if (p[j] == 75)
				printf("%s\n", "Fiat");
			else if (p[j] == 100)
				printf("%s\n", "Range Rover");
		}
	}
	else if (weather == 1)
	{
		for (int j = 0; j < cj; j++)
		{
			if (p[j] == 100)
				printf("%s\n", "Volvo");
			else if (p[j] == 110)
				printf("%s\n", "BMW");
			else if (p[j] == 95)
				printf("%s\n", "Seat");
			else if (p[j] == 90)
				printf("%s\n", "Fiat");
			else if (p[j] == 125)
				printf("%s\n", "Range Rover");
		}
	}
	else if (weather == 2)
	{
		for (int j = 0; j < cj; j++)
		{
			if (p[j] == 75)
				printf("%s\n", "Volvo");
			else if (p[j] == 70)
				printf("%s\n", "BMW");
			else if (p[j] == 65)
				printf("%s\n", "Seat");
			else if (p[j] == 50)
				printf("%s\n", "Fiat");
			else if (p[j] == 100)
				printf("%s\n", "Range Rover");
		}
	}
}