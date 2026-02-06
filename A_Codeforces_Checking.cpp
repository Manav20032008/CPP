#include <bits/stdc++.h>
using namespace std;

void solve(){
    char ch ;
    cin >> ch ;

    if(ch == 'c' || ch == 'o' || ch == 'd' || ch == 'e' || ch == 'f' || ch == 'r' || ch == 's'){
        cout << "YES\n" ;
    }else{
        cout << "NO\n" ;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
return 0 ;
}