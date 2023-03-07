#include <stdio.h>
#include "Canvas.h"

int main()
{
	Canvas c(100, 100);
	c.DrawCircle(50, 50, 10, '*');
	c.Print();
	getchar();
	c.Clear();
	c.DrawCircle(50, 50, 10, '*');
	c.FillCircle(50, 50, 10, '*');
	c.Print();
	getchar();
	c.Clear();
	c.DrawRect(20, 20, 80, 80, '*');
	c.Print();
	getchar();
	c.Clear();
	c.DrawRect(20, 20, 80, 80, '*');
	c.FillRect(20, 20, 80, 80, '*');
	c.Print();
	getchar();
	c.Clear();
	c.DrawLine(10, 10, 90, 90, '*');
	c.Print();
}