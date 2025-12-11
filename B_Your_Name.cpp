#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l ;
        cin >> l ;
        string name, ans;
        cin >> name ;
        cin >> ans;

        int arr[26] = {0};
        int a[26] = {0};

        for (int i = 0; i < name.size(); i++)
        {
            arr[name[i] - 'a']++;
        }

        for (int k = 0; k < ans.size(); k++)
        {
            a[ans[k] - 'a']++;
        }

        bool flag = false;
        for (int j = 0; j < 26; j++)
        {
            if (arr[j] == a[j])
            {
                flag = true;
            }
            else
            {
                flag = false;
                break ;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
    return 0;
}