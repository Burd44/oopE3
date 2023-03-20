#include "Number.h"
#include <string.h>
#include <iostream>

Number::Number(const char* nr, int b)
{
    numar = new char[1000];
	baza=b;
	strcpy(numar, nr);
}

Number::~Number()
{

}

Number::Number(const Number& o)
{
    numar = new char[1000];
	this->baza = o.baza;
	strcpy(this->numar, o.numar);
}

Number::Number(Number&& o)
{
    numar = new char[1000];
	this->baza = o.baza;
	strcpy(this->numar, o.numar);
}

char Number::operator[](int i)
{
	return this->numar[i];
}

int Number::GetBase()
{
    return baza;
}

bool Number::operator==(const Number& i)
{
    int b = this->baza;
    Number a = i;
    this->SwitchBase(10);
    a.SwitchBase(10);
    int n1 = atoi(this->numar);
    int n2 = atoi(a.numar);
    if (n1 == n2)
    {
        this->SwitchBase(b);
        return true;
    }
    else
    {
        this->SwitchBase(b);
        return false;
    }
}

bool Number::operator>(const Number& i)
{
    int b = this->baza;
    Number a = i;
    this->SwitchBase(10);
    a.SwitchBase(10);
    int n1 = atoi(this->numar);
    int n2 = atoi(a.numar);
    if (n1 > n2)
    {
        this->SwitchBase(b);
        return true;
    }
    else
    {
        this->SwitchBase(b);
        return false;
    }
}

bool Number::operator<(const Number& i)
{
    int b = this->baza;
    Number a = i;
    this->SwitchBase(10);
    a.SwitchBase(10);
    int n1 = atoi(this->numar);
    int n2 = atoi(a.numar);
    if (n1 < n2)
    {
        this->SwitchBase(b);
        return true;
    }
    else
    {
        this->SwitchBase(b);
        return false;
    }
}

bool Number::operator>=(const Number& i)
{
    int b = this->baza;
    Number a = i;
    this->SwitchBase(10);
    a.SwitchBase(10);
    int n1 = atoi(this->numar);
    int n2 = atoi(a.numar);
    if (n1 >= n2)
    {
        this->SwitchBase(b);
        return true;
    }
    else
    {
        this->SwitchBase(b);
        return false;
    }
}

bool Number::operator<=(const Number& i)
{
    int b = this->baza;
    Number a = i;
    this->SwitchBase(10);
    a.SwitchBase(10);
    int n1 = atoi(this->numar);
    int n2 = atoi(a.numar);
    if (n1 <= n2)
    {
        this->SwitchBase(b);
        return true;
    }
    else
    {
        this->SwitchBase(b);
        return false;
    }
}

int Number::GetDigitsCount()
{
    return strlen(numar);
}

void Number::SwitchBase(int b)
{
    int l = GetDigitsCount();
    int power = 1;
    int num = 0;
    int i;
    for (i = l - 1; i >= 0; i--)
    {
        int nr;
        if (numar[i] >= '0' and numar[i] <= '9')
        {
            nr = (int)numar[i] - '0';
        }
        else 
        {
            nr = (int)numar[i] - 'A' + 10;
        }
        num = num + nr * power;
        power = power * baza;
    }
    if (b == 10)
    {
        baza = b;
        _itoa(num, numar, baza);
    }
    else
    {
        int i = 0;
        while (num > 0)
        {
            char c;
            int r = num % b;
            if (r >= 0 && r <= 9)
            {
                c = r + '0';
            }
            else 
            {
                c = r - 10 + 'A';
            }
            numar[i++] = c;
            num = num / b;
        }
        numar[i] = NULL;
        l = GetDigitsCount();
        for (int i = 0; i < l / 2; i++)
        {
            int aux = numar[i];
            numar[i] = numar[l - i - 1];
            numar[l - i - 1] = aux;
        }
        baza = b;
    }
}

void Number::Print()
{
    printf("%s", numar);
}

Number& Number::operator--()
{
    Number c("10", 10);
    for (int i = 0; numar[i] != NULL; i++)
    {
        numar[i] = numar[i + 1];
    }
    return c;
}

Number Number::operator--(int)
{
    Number c("10", 10);
    int l = strlen(numar);
    this->numar[l - 1] = NULL;
    return c;
}

Number& Number::operator=(Number&& i)
{
    this->baza = i.baza;
    strcpy(this->numar, i.numar);
    return i;
}

Number& Number::operator=(Number& i)
{
    this->baza = i.baza;
    strcpy(this->numar, i.numar);
    return i;
}

Number operator-(const Number& a, const Number& b)
{
    int c;
    if (a.baza > b.baza)
    {
        c = a.baza;
    }
    else
    {
        c = b.baza;
    }
    Number aux1 = a, aux2 = b;
    aux1.SwitchBase(10);
    aux2.SwitchBase(10);
    int n1 = atoi(aux1.numar);
    int n2 = atoi(aux2.numar);
    n1 = n1 - n2;
    _itoa(n1, aux1.numar, 10);
    aux1.SwitchBase(c);
    return aux1;
}

Number operator+(const Number& a, const Number& b)
{
    int c;
    if (a.baza > b.baza)
    {
        c = a.baza;
    }
    else
    {
        c = b.baza;
    }
    Number aux1 = a, aux2 = b;
    aux1.SwitchBase(10);
    aux2.SwitchBase(10);
    int n1 = atoi(aux1.numar);
    int n2 = atoi(aux2.numar);
    n1 = n1 + n2;
    _itoa(n1, aux1.numar, 10);
    aux1.SwitchBase(c);
    return aux1;
}