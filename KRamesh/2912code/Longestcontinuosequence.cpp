#include <iostream>
using namespace std;

int max_seq(int *p, int size)
{
    int mx = 0;
    int cnt = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (*p == 1)
        {
            if (*(p + 1) != 1)
            {
                cnt++;
                if (mx < cnt)
                    mx = cnt;
                cnt = 0;
            }
            else
            {
                cnt++;
            }
        }
        p++;
    }
    if (cnt > 0)
    {
        cnt++;
        if (mx < cnt)
        {
            mx = cnt;
        }
    }
    return mx;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int aux[n];
    for (int i = 0; i < n - 1; i++)
    {
        int temp;
        if (arr[i] == 0)
        {
            arr[i] = 1;
            temp = max_seq(arr, n);
            aux[i] = temp;
            arr[i] = 0;
        }
        else
        {
            aux[i] = -1;
        }
    }

    int mx = -1;
    int ans = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (mx < aux[i])
        {
            mx = aux[i];
            ans = i;
        }
    }
    cout << ans << endl;
}
