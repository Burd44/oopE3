#include "Sort.h"
#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include <stdarg.h>
#include <string>
#include <algorithm>

Sort::Sort(int nr, int min, int max)
{
	n = nr;
	srand(time(NULL));
	for (int i = 0; i < nr; i++)
	{
		v[i] = (min+rand())%max;
	}
}

Sort::Sort()
{
	n = 5;
	v[0] = 12;
	v[1] = 1412;
	v[2] = 0;
	v[3] = 78;
	v[4] = 1231;
}

Sort::Sort(int a[], int nr)
{
	n = nr;
	for (int i = 0; i <= nr; i++)
	{
		v[i] = a[i];
	}
}

void Sort::Print()
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", v[i]);
	}
	printf("\n");
}

Sort::Sort(int nr, ...)
{
	n = nr;
	va_list vl;
	va_start(vl, nr);
	for (int i = 0; i < nr; i++)
	{
		v[i] = va_arg(vl, int);
	}
	va_end(vl);
}

Sort::Sort(char s[])
{
	int t, i=0;
	char* p;
	p = strtok(s, ",");
	while (p != NULL)
	{
		t = atoi(p);
		v[i++] = t;
		p = strtok(NULL, ",");
	}
	n = i;
}

void Sort::InsertSort(bool ascendent)
{
	if (ascendent == true)
	{
		int i, key, j;
		for (i = 1; i < n; i++)
		{
			key = v[i];
			j = i - 1;
			while (j >= 0 && v[j] > key)
			{
				v[j + 1] = v[j];
				j = j - 1;
			}
			v[j + 1] = key;
		}
	}
	else
	{
		int i, key, j;
		for (i = 1; i < n; i++)
		{
			key = v[i];
			j = i - 1;
			while (j >= 0 && v[j] < key)
			{
				v[j + 1] = v[j];
				j = j - 1;
			}
			v[j + 1] = key;
		}
	}
}

void Sort::BubbleSort(bool ascendent)
{
	if (ascendent == true)
	{
		int i, j;
		for (i = 0; i < n - 1; i++)
			for (j = 0; j < n - i - 1; j++)
				if (v[j] > v[j + 1])
				{
					int aux = v[j];
					v[j] = v[j + 1];
					v[j + 1] = aux;
				}
	}
	else
	{
		int i, j;
		for (i = 0; i < n - 1; i++)
			for (j = 0; j < n - i - 1; j++)
				if (v[j] < v[j + 1])
				{
					int aux = v[j];
					v[j] = v[j + 1];
					v[j + 1] = aux;
				}
	}
}

int partitionA(int v[], int low, int high)
{
	int pivot = v[high]; 
	int i = (low - 1); 
	for (int j = low; j <= high - 1; j++) 
	{
		if (v[j] < pivot) 
		{
			i++;
			int aux = v[i];
			v[i] = v[j];
			v[j] = aux;
		}
	}
	int aux = v[i+1];
	v[i+1] = v[high];
	v[high] = aux;
	return (i + 1);
}

void quicksortA(int v[], int low, int high)
{
	if (low < high)
	{
		int pi = partitionA(v, low, high);
		quicksortA(v, low, pi - 1);
		quicksortA(v, pi + 1, high);
	}
}

int partitionD(int v[], int low, int high)
{
	int pivot = v[high];
	int i = (low - 1);
	for (int j = low; j <= high - 1; j++)
	{
		if (v[j] > pivot)
		{
			i++;
			int aux = v[i];
			v[i] = v[j];
			v[j] = aux;
		}
	}
	int aux = v[i + 1];
	v[i + 1] = v[high];
	v[high] = aux;
	return (i + 1);
}

void quicksortD(int v[], int low, int high)
{
	if (low < high)
	{
		int pi = partitionD(v, low, high);
		quicksortD(v, low, pi - 1);
		quicksortD(v, pi + 1, high);
	}
}


void Sort::QuickSort(bool ascendent)
{
	if(ascendent==true)
	{
		quicksortA(v, 0, n - 1);
	}
	else
		quicksortD(v, 0, n - 1);
}

int Sort::GetElementsCount()
{
	return n;
}

int Sort::GetElementFromIndex(int index)
{
	return v[index];
}