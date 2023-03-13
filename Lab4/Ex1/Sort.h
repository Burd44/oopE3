#pragma once
class Sort
{
    int v[1000], n;
public:
    Sort(int nr, int min, int max);
    Sort(int v[], int nr);
    Sort();
    Sort(int nr, ...);
    Sort(char s[]);
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};