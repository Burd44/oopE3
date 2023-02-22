#include <iostream>
#include <stdio.h>

using namespace std;

int suma = 0;

void Numar(char s[])
{
    int nr = 0;
    for (int i = 0; s[i] != NULL; i++)
    {
        if (s[i] >= '0' and s[i] <= '9')
            nr = nr * 10 + (s[i] - '0');
    }
    suma = suma + nr;
}

int main()

{
    FILE* fptr;
    fptr = fopen("ini.txt", "r+");
    char s[200];
    while (fgets(s, 200, fptr))
    {
        s[strlen(s) - 1] = '\0';
        Numar(s);
    }
    printf("%d", suma);
    return 0;
}
