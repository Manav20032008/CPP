#include <iostream>
using namespace std;

int main(){
    int n = 9;

    for(int i = 1; i <= n; i++){
        for(int k = n; k >= i; k--){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << j ;
        }
        for(int j = i - 1; j >= 1; j--){
            cout << j;
        }
        cout << "\n";
    }
return 0 ;
}