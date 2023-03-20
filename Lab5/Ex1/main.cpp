#include <stdio.h>
#include "Number.h"

int main()
{
	Number a("FF", 16);
	Number b("100", 7);
	Number c("20", 7);
	Number d("22", 3);
	Number e("1", 10);
	Number f("1", 10);
	Number g("101", 10);
	Number h("538", 9);

	if (a > b)
		printf("a>b\n");
	if (c < b)
		printf("b<c\n");
	if (d <= c)
		printf("c<=d\n");
	if (a >= d)
		printf("a>=d\n");
	if (e == f)
		printf("e==f\n");

	e = a - b;
	printf("e=a-b(baza 16): ");
	e.Print();
	printf("\n");
	e.SwitchBase(10);
	printf("e=a-b(baza 10): ");
	e.Print();
	printf("\n");
	
	f = c + d;
	printf("f=c+d(baza 7): ");
	f.Print();
	printf("\n");
	f.SwitchBase(10);
	printf("f=c+d(baza 10): ");
	f.Print();
	printf("\n");

	printf("a are %d cifre", a.GetDigitsCount());
	printf("\n");

	printf("c este in baza %d", c.GetBase());
	printf("\n");

	g--;
	g.Print();
	printf("\n");
	--h;
	h.Print();
	return 0;
}