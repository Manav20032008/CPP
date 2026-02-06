#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n , k , b, s;
    cin >> n >> k >> b >> s;
    if(n==1){
        if(s/k==b){
            cout << s << endl;
        }
        else{
            cout << -1<<endl;
        }
    }
    else{
        if(s/k<b){
            cout << -1 << endl;
        }
        else{
            if(s/k==b){
                cout << s << " ";
                for(long long i=n-1 ; i>0 ; i--){
                    cout << 0 << " ";
                }
            }
            else{
                long long temp=k*(b+1)-1;
                s-=temp;
                while(s>0){
                    cout << k-1 <<  " ";
                    s-=(k-1);
                    if(s<0){
                        s+=(k-1);
                        cout << s << " ";
                        break;
                    }
                }
                cout << temp << endl;
            }
            cout << endl;
        }
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