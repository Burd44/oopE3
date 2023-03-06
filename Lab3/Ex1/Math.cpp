#include "Math.h"
#include <stdarg.h> 
#include <string.h>
#include <cstdlib>

int Math::Add(int a, int b)
{
	return a + b;
}

int Math::Add(int a, int b, int c)
{
	return a + b + c;
}

int Math::Add(double a, double b)
{
	return a + b;
}

int Math::Add(double a, double b, double c)
{
	return a + b + c;
}

int Math::Mul(int a, int b)
{
	return a * b;
}

int Math::Mul(int a, int b, int c)
{
	return a * b * c;
}

int Math::Mul(double a, double b)
{
	return a * b;
}

int Math::Mul(double a, double b, double c)
{
	return a * b * c;
}

int Math::Add(int a, ...)
{
	va_list v1;
	int val, s=0;
	va_start(v1, a);
	for (int i = 0; i < a; i++)
	{
		val = va_arg(v1, int);
		s = s + val;
	}
	return s;
}

char* Math::Add(const char* a, const char* b)
{
	if (a == NULL or b == NULL) 
		return NULL;
	char* r;
	int l1, l2;
	l1 = strlen(a);
	l2 = strlen(b);
	r = (char*)malloc(l1 + l2 + 1);
	if (r != NULL) 
	{
		strcpy(r, a);
		strcat(r, b);
	}
	return r;
}