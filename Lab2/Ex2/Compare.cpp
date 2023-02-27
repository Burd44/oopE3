#include "Compare.h"
#include "Student.h"
#include <string.h>

int Compare::EqualAverage(Student* p1, Student* p2)
{
	if (p1->GetAverage() > p2->GetAverage())
		return 1;
	else
		return -1;
}

int Compare::EqualMath(Student* p1, Student* p2)
{
	if (p1->GetMathGrade() > p2->GetMathGrade())
		return 1;
	else
		return -1;
}

int Compare::EqualEnglish(Student* p1, Student* p2)
{
	if (p1->GetEnglishGrade() > p2->GetEnglishGrade())
		return 1;
	else
		return -1;
}

int Compare::EqualHistory(Student* p1, Student* p2)
{
	if (p1->GetHistoryGrade() > p2->GetHistoryGrade())
		return 1;
	else
		return -1;
}

int Compare::EqualName(Student* p1, Student* p2)
{
	return strcmp(p2->GetName(), p1->GetName());
}
