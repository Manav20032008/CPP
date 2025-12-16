#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int time = 240 - k;
    int i;
    for (i = 1; i <= n; i++)
    {
        time -= 5 * i;
        if (time < 0)
            break;
    }
    cout << i - 1;
    return 0;
}