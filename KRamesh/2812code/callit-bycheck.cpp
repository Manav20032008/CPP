#include <bits/stdc++.h>
using namespace std;

void swap(int *&x, int *&y) // This line should not be changed
{
    int *t;
    t = x; // t pointer points to the a where x is pointing
    x = y; // x pointer points to the y now initially they exchanged only values and after next step no pointer was pointing to b so output was not displaying b
    y = t; // y pointer now points to the a where t is pointing
    cout << *x << " " << *y << endl;
}

int main()
{
    int *a = new int(3), *b = new int(5); // as function demaonds int* as parameter so we declare int* a, b and allocating memory and value to it
    swap(a, b);                           // passing int* whic will be passed and x and y act as reference to int*
    cout << *a << " " << *b;
    return 0;
}