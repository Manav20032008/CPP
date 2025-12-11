#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        int num = 1;
        for (int k = n - 1; k >= i; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num = (int)(num * (i - j) / (double)j);
        }
        cout << "\n";
    }
    return 0;
}