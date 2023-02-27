#pragma once
class Student
{
	float MathGrade, EnglishGrade, HistoryGrade;
	char* Name;
public:
	Student();

	void SetName(char* name);
	void SetMathGrade(float MathGrade);
	void SetHistoryGrade(float HistoryGrade);
	void SetEnglishGrade(float EnglishGrade);

	char* GetName();
	float GetMathGrade();
	float GetHistoryGrade();
	float GetEnglishGrade();
	float GetAverage();
};

