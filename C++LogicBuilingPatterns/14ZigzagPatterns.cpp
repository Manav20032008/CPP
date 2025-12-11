#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 25; j++)
        {
            if (i == 1 && (j - 3) % 4 == 0 ||
                i == 2 && j % 2 == 0 ||
                i == 3 && (j - 1) % 4 == 0)
            {
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}