#include <stdio.h>
#include "Student.h"
#include "Compare.h"

int main()
{
	Student p1, p2;
	Compare c;

	p1.SetName((char*)"Alin Autostrada-Soarelui");
	p1.SetEnglishGrade(10);
	p1.SetHistoryGrade(8);
	p1.SetMathGrade(5);

	p2.SetName((char*)"Joca-Bine Mirel");
	p2.SetEnglishGrade(5);
	p2.SetHistoryGrade(10);
	p2.SetMathGrade(4);

	printf("Name: %s \n", p1.GetName());
	printf("Math Grade: %f \n", p1.GetMathGrade());
	printf("English Grade: %f \n", p1.GetEnglishGrade());
	printf("History Grade: %f \n", p1.GetHistoryGrade());
	printf("Average: %f \n", p1.GetAverage());
	printf("\n");
	printf("Name: %s \n", p2.GetName());
	printf("Math Grade: %f \n", p2.GetMathGrade());
	printf("English Grade: %f \n", p2.GetEnglishGrade());
	printf("History Grade: %f \n", p2.GetHistoryGrade());
	printf("Average: %f \n", p2.GetAverage());
	printf("\n");
	printf("Average Comparison: %d \n", c.EqualAverage(&p1, &p2));
	printf("Math Grade Comparison: %d \n", c.EqualMath(&p1, &p2));
	printf("English Grade Comparison: %d \n", c.EqualEnglish(&p1, &p2));
	printf("History Grade Comparison: %d \n", c.EqualHistory(&p1, &p2));
	printf("Name Comparison: %d \n", c.EqualName(&p1, &p2));

	return 0;
}