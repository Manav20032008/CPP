#include <bits/stdc++.h>
using namespace std;

void S(int x, int &y, int *z)
{ // x = 3 , y => b => 5 , z => c => 7 .
    int t;
    t = x + y; // t = 3 + 5 = 8 .
    x = y + *z; // x = 5 + 7 = 12 .
    y = x + t; // y = 12 + 8 = 20 , b = 20 .
    *z = y + *z; // z = 20 + 7 = 27 , c = 27 .
    cout << x  << " " << y  << " " << *z << endl; // 12 20 27 
}

int main()
{
    int a = 3, b = 5, c = 7;
    S(a, b, &c);
    cout << a  << " " << b  << " " << c; // 3 20 27 

    return 0;
}