#include "Sort.h"
#include <stdio.h>

int main()
{
	int a[10] = { 10, 49, 100, 27, 567, 18 };
	char s[10000] = "10,15,100,67,5,90";
	Sort c1(5, 100, 200);
	Sort c2;
	Sort c3(a, 6);
	Sort c4(8, 67, 691, 2332, 4, 89, 19, 137, 139);
	Sort c5(s);
	printf("%s\n", "Constructor 1:");
	c1.Print();
	printf("\n%s\n", "Constructor 2:");
	c2.Print();
	printf("\n%s\n", "Constructor 3:");
	c3.Print();
	printf("\n%s\n", "Constructor 4:");
	c4.Print();
	printf("\n%s\n", "Constructor 5:");
	c5.Print();
	printf("\n%s\n","Bubble Crescator:");
	c1.BubbleSort(true);
	c1.Print();
	printf("\n%s\n","Bubble Descrescator:");
	c2.BubbleSort(false);
	c2.Print();
	printf("\n%s\n", "Insert Crescator:");
	c3.InsertSort(true);
	c3.Print();
	printf("\n%s\n", "Insert Descrescator:");
	c4.InsertSort(false);
	c4.Print();
	printf("\n%s\n", "Quick Crescator:");
	c5.QuickSort(true);
	c5.Print();
	printf("\n%s\n", "Quick Descrescator:");
	c4.QuickSort(false);
	c4.Print();
	printf("\n%s\n", "Numar Elemente:");
	printf("%d\n", c4.GetElementsCount());
	printf("\n%s\n", "Cautare Element:");
	printf("%d", c3.GetElementFromIndex(0));
	return 0;
}