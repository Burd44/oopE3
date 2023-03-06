#include "Canvas.h"
#include <cstdlib>
#include <stdio.h>
#include <string>

Canvas::Canvas(int w, int h)
{
	width = h;
	height = w;
	matrix = (char**)(malloc(h * sizeof(char*)));
	for (int i = 0; i < w; i++)
	{
		matrix[i] = (char*)(malloc(w * sizeof(char)));
		memset(matrix[i], ' ', w * sizeof(char));
	}
}

void Canvas::DrawCircle(int x, int y, int r, char ch)
{
	for(int i=x-r; i <= x+r; i++)
		for (int j = y-r; j <= y+r; j++)
		{
			if ((i - x) * (i - x) + (j - y) * (j - y) == r * r)
				if ((i - x) * (i - x) + (j - y) * (j - y) >= r * (r - 1) && (i - x) * (i - x) + (j - y) * (j - y) <= r * (r + 1))
					matrix[i][j] = ch;
				else 
					matrix[i][j] = ' ';
			else
				matrix[i][j] = ' ';
		}
}

void Canvas::FillCircle(int x, int y, int r, char ch)
{
	for (int i = x - r; i <= x + r; i++)
		for (int j = y - r; j <= y + r; j++)
		{
			if (((i - x) * (i - x) + (j - y) * (j - y) <= r * r))
				matrix[i][j] = ch;
		}
}

void Canvas::Print()
{
	for(int i=0; i<height;i++)
	{
		for (int j = 0; j < width; j++)
		{
			printf("%c", matrix[i][j]);
		}
		printf("\n");
	}
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	int dx = x2 - x1;
	int dy = y2 - y1;
	int D = 2 * dy - dx;
	int y = y1;
	for (int x = x1; x <= x2; x++)
	{
		matrix[x][y] = ch;
		if (D > 0)
		{
			y = y + 1;
			D = D - 2 * dx;
		}
		D = D + 2 * dy;
	}
}

void Canvas::SetPoint(int i, int j, char ch)
{
	matrix[i][j] = ch;
}

void Canvas::DrawRect(int l, int t, int r, int b, char ch)
{
	DrawLine(l,r, l, r, '*');
}