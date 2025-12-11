#include <bits/stdc++.h>
using namespace std;

bool checkDiff(vector<int> &v, int n)
{
    return !v.empty() && n - v.back() == 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        vector<vector<int>> v(n);
        int maxPath = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i == 0)
            {
                v[0].push_back(arr[i]);
                continue;
            }

            bool inserted = false;
            for (int j = 0; j <= maxPath; j++)
            {
                if (checkDiff(v[j], arr[i]))
                {
                    v[j].push_back(arr[i]);
                    inserted = true;
                    break;
                }
            }

            if (!inserted)
            {
                v[++maxPath].push_back(arr[i]);
            }
        }

        cout << maxPath + 1 << endl;
    }
    return 0;
}