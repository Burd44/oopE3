#include <stdio.h>
#include <iostream>
#include <stdarg.h>
#include "Math.h"

int main()
{
	Math c;
	printf("%d ", c.Add(1, 2));
	printf("%d ", c.Add(1, 2, 3));
	printf("%d ", c.Add(1.5, 2.75));
	printf("%d ", c.Add(1.5, 2.75, 3.33));
	printf("%d ", c.Mul(1, 2));
	printf("%d ", c.Mul(1, 2, 3));
	printf("%d ", c.Mul(1.5, 2.75));
	printf("%d ", c.Mul(1.5, 2.75, 3.33));
	printf("%d ", c.Add(5, 1, 2, 3, 4, 5));
	printf("%s ", c.Add("1", "2")); //concateneaza
	return 0;
}