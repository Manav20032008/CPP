#include <bits/stdc++.h>
using namespace std;

int GCD (int a , int b){
    if(b == 0){
        return a ;
    }
    return GCD(b,a%b);
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

        bool flag = false ;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                cout << "Yes" << endl;
                flag = true ;
            }
        }
        if(flag) continue ;

        bool per = true ;
        for(int i = 0 ; i < n ; i++){
            bool ck = false ;
            for(int j = i + 1 ; j < n ; j++){
                int ans = GCD(arr[i],arr[j]);
                if(ans <= 2){
                    cout << "Yes" << endl ;
                    ck = true ;
                    per = false ;
                    break ;
                }
            }
            if(ck) break ;
        }
        if(per) cout << "No" << endl ;        
    }
    return 0;
}