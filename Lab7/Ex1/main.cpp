#include <stdio.h>

float operator ""_Kelvin(unsigned long long int a)
{
    return a - 273.15f;
}

float operator ""_Farenheit(unsigned long long int a)
{
    return ((a - 32) / 1.8f);
}

int main() 
{
    float a = 300_Kelvin;
    float b = 120_Farenheit;
    printf("%f\n", a);
    printf("%f", b);
    return 0;
}