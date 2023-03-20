#pragma once
class Number
{
    char* numar;
    int baza;
public:
    Number(const char* nr, int b);
    ~Number();
    Number(const Number& o);
    Number(Number&& o); 
    char operator[](int i);
    bool operator>(const Number& i);
    bool operator<(const Number& i);
    bool operator>=(const Number& i);
    bool operator<=(const Number& i);
    bool operator==(const Number& a);
    Number& operator--();
    Number operator--(int);
    Number& operator=(Number&& i);
    Number& operator=(Number& i);
    friend Number operator+(const Number& a, const Number& b);
    friend Number operator-(const Number& a, const Number& b);
    void SwitchBase(int b);
    void Print();
    int GetDigitsCount();
    int GetBase();
};