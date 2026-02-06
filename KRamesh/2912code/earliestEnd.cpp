#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n ;

    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    if(arr[0] == 0){
        cout << -1 << endl ;
    }else{
        int steps = 0 ;
        bool flag = true ;
        for(int i = 0 ; i < n - 1 ; ){
            if(arr[i] == 0){
                cout << -1 << endl ;
                flag = false ;
                // break ;
            }
            int maxReach = -1 ;
            int index = -1 ;
            for(int j = i + 1 ; j < n && j <= i + arr[i] ; j++){
                if(j+arr[j] > maxReach){
                    maxReach = j + arr[j];
                    index = j ;
                }
                if(index==-1){
                    cout << -1  << endl;
                    flag = false ;
                    break;
                }
            }
            i = index ;
            steps++;
        }

        if(flag) cout << steps << endl ;
    }
return 0 ;
}