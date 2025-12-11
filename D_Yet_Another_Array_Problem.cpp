#include <iostream>
using namespace std;
 
int GCD( int  x , int m ){
    if( m == 0){
        return x ;
    }else{
        return GCD(m , x % m) ;
    }
}
 
int main(){
    int t ;
    cin >> t ;
    while(t--){
        int  n ;
        cin >> n ;
        int arr[n] ;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }
 
        bool ck = false ;
        int x = 1 ;
        while(x++){
            bool flag = false ;
            for(int j = 0 ; j < n ; j++){
                if( GCD(x,arr[j]) == 1 ) flag = true ;
            }
 
            if(flag){
                cout << x << endl ;
                ck = false ;
                break ;
            }else{
                ck = true ;
            }
        }

        if(ck){
            cout << -1 << endl ;
        }
 
    }
return 0 ;
}