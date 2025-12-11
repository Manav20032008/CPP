#include <iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i = 1; i <= n; i++){
        for(int k = n-1; k >= i; k--){
            cout << " ";
        }

        for(int j = 1; j <= (2*i)-1; j++){
            if(j == 1 || j == (2*i)-1){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }

    for(int i = n; i >= 1; i--){
        for(int k = n-1; k >= i; k--){
            cout << " ";
        }

        for(int j = 1; j <= (2*i)-1; j++){
            if(j == 1 || j == (2*i)-1){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }

return 0 ;
}