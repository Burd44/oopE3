#include <stdio.h>
#include "Map.h"

int main()
{
    Map<int, const char*> m;
    m[10] = "C++";
    m[20] = "test";
    m[30] = "Poo";
    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    m[20] = "result";
    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    printf("\nAdaugam un element cu cheia 40 folosind set:\n");
    m.set(40, "Oop");
    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    printf("\nCautam o valoarea a unei anumite chei folosind get:\n");
    const char* v="Hello";
    printf("v este: %s\n", v);
    m.Get(10, v);
    printf("v a devenit valoarea cu cheia 10: %s\n", v);
    printf("Sunt %d perechi de chei si valori\n", m.Count());
    printf("\nStergem perechea cu cheia 20\n");
    m.Delete(20);
    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    printf("\n");
    Map<int, const char*> m2;
    m2[10] = "C++";
    m2[30] = "Poo";
    m2[40] = "Oop";
    printf("Este m2 inclusa in m?: %d\n", m.Includes(m2));
    Map<int, const char*> m3;
    m3[10] = "C++";
    m3[20] = "Poo";
    m3[40] = "Oop";
    printf("Este m3 inclusa in m?: %d\n", m.Includes(m3));
    printf("\n");
    printf("Curatam m si adaugam un singur element cu cheia 100:\n");
    m.Clear();
    m[100] = "Hello";
    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    return 0;
}