#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n , k ;
    cin >> n >>  k;

    vector<long long> arr(n);

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    vector<long long> copy = arr ;
    sort(copy.begin(),copy.end());

    if(k > 1 || copy == arr){
        cout << "YES" << endl ;
    }else{
        cout << "NO" << endl ;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t ;
    cin >> t ;
    while(t--){
        solve();
    }
return 0;
}