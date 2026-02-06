#include <bits/stdc++.h>
using namespace std ;

int m = 2 ;

void evenOdd(int n){
    if(m>2*n) return ;

    if(m == n){
        cout << m << " " ;
        cout << endl ;
        m++;
    }else{
        if(m%2 == 0){
            cout << m << " " ;
        }else{
            cout << m - n << " " ;
        }
        m+=2 ;
    }
    evenOdd(n);
}

int main(){
    int n ;
    cin >> n ;
    evenOdd(n);
}