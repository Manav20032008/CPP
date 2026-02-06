#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ; 
    cin >> n ;
    string s;
    cin >> s;

    int count = 0 ;
    bool flag = false ;
    bool ck = false ;
    vector<int> index ;
    int  i = 0 ;
    while(s[i] == '0' && i < n){
        i++;
    }

    for(; i < n ; i++){
        if(flag && s[i] == '0'){
            count++;
            flag = false ;
        }
        if(!flag && s[i] == '1'){
            flag = true ;
        }
        if(flag && i == n - 1 && s[n-1] == '0')count++;
    }
    

    for(int i = 0; i < n ;i++){
        if(ck && s[i] == '1'){
            break;
        }
        if(!ck && s[i] == '1'){
            index.push_back(i+1);
            ck = true ;
        }
        if(ck && s[i] == '0'){
            index.push_back(i+1);
        }
    }

    if(count%2 == 0){
        cout << "Bob\n";
    }else{
        cout << "Alice\n";
        cout << index.size() << endl ;
        for(int i = 0; i < index.size() ;i++){
            cout << index.at(i) << " "  ;
        }
        cout << endl;
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