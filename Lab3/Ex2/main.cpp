#include <stdio.h>
#include "Canvas.h"

int main()
{
	Canvas c(100, 100);
	c.DrawCircle(50, 50, 10, '*');
	c.FillCircle(50, 50, 10, '*');
	c.DrawLine(1, 1, 99, 99, '*');
	c.Print();
}