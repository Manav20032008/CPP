#include <bits/stdc++.h>
using namespace std;

void S(int *x, int &y, int *&z, int w)

{ // x => a => 1 , y => b => 2 , z refers to 3 , w = 4 .
    int *t;
    t = &y; // t => y => b => 2 .
    *x = y + *z; // x = 2 + 3 = 5 , a = 5 .
    y = *z + *t; // y = 3 + 2 = 5 , b = 5 , { t => y => b => 5 } .
    *z = *x + y; // z = 5 + 5 = 10 , c = 10 .
    w = *t + w; // w =  5 + 4 = 9 .
    cout << w << " " <<  *x << " " <<  y << " " <<  *z << endl; // 9 5 5 10
}

int main()
{
    int a = 1, b = 2, *c = new int(3), *d = new int(4);
    S(&a, b, c, *d);
    cout << a << " " <<  b << " " <<  *c << " " <<  *d; // 5 5 10 4 
    return 0;
}
