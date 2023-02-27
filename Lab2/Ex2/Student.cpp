#include "Student.h"
#include <string.h>

Student::Student()
{
	this->Name = new char[100];
}

void Student::SetName(char* Name)
{
	if (strlen(Name) < 100)
	{
		memset(this->Name, 0, 100);
		memcpy(this->Name, Name, strlen(Name));
	}
}

void Student::SetMathGrade(float MathGrade)
{
	this->MathGrade = MathGrade;
}

void Student::SetEnglishGrade(float EnglishGrade)
{
	this->EnglishGrade = EnglishGrade;
}

void Student::SetHistoryGrade(float HistoryGrade)
{
	this->HistoryGrade = HistoryGrade;
}

float Student::GetMathGrade()
{
	return this->MathGrade;
}

float Student::GetHistoryGrade()
{
	return this->HistoryGrade;
}

float Student::GetEnglishGrade()
{
	return this->EnglishGrade;
}

char* Student::GetName()
{
	return this->Name;
}

float Student::GetAverage()
{
	return (this->MathGrade + this->EnglishGrade + this->HistoryGrade) / 3;
}