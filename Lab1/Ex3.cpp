#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int c = 0, nr;
    char s[200], a[100][100];
    scanf("%d", &nr);
    while (nr)
    {
        scanf("%s", &s);
        strcpy(a[c++], s);
        nr--;
    }
    for (int i = 0; i < c - 1; i++)
    {
        for (int j = i + 1; j < c; j++)
        {
            if (strlen(a[i]) < strlen(a[j]))
            {
                char aux[200];
                strcpy(aux, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], aux);
            }
            if (strlen(a[i]) == strlen(a[j]))
            {
                if (strcmp(a[i], a[j]) > 0)
                {
                    char aux[200];
                    strcpy(aux, a[i]);
                    strcpy(a[i], a[j]);
                    strcpy(a[j], aux);
                }
            }
        }
    }
    for (int i = 0; i < c; i++)
        printf("%s\n", a[i]);
    return 0;
}