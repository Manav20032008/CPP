#include <iostream>
#include<algorithm>
using namespace std;

// Better Approach
int findGCD(int num1 , int num2){

    // A loop For Accessing Elemnts And Checking Them One By One
    for(int i = min(num1,num2); i > 0 ; i--){
        if(num1 % i == 0 && num2 % i == 0){
            return i ;
        }
    }
}

// Optimal Approach
int GCD(int a , int b){
    // Using a Recusion And Logic With The Usind Modulo Operator{%}
    if(b == 0){
        return a;
    }else{
        return GCD(b,a%b);
    }
}

int main(){
    int num1 , num2 ;
    cout << "Enter The 2 numbers:" ;
    cin >> num1 >> num2 ;

    int result = findGCD(num1 , num2) ;
    cout << "The GCD Of These Teo numbers Is :" << result ;
    int result2 = GCD(num1 , num2) ;
    cout << "\nThe GCD Of These Teo numbers Is :" << result2 ;

return 0 ;
}