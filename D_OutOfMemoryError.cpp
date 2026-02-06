#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n, m, h;
    cin >> n >> m >> h;

    vector<long long int> arr(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<long long int> temp = arr;
    
    int a = 1 ;
    while (m--)
    {
        long long int b, c;
        cin >> b >> c;

        if(){
            
        }else{
            
        }
    }

    for (long long int i = 0; i < n; i++)
    {
        cout <<  arr[i] << " ";
    }
    cout << endl ;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}