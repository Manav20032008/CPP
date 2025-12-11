#include <iostream>
using namespace std;

// Made Own Power Function Using Loop
int power(int base, int exp) {
    int result = 1;
    for(int i = 0; i < exp; i++) result *= base;
    return result;
}

int main(){
    int num , orgnum , digits = 0, remainder , sum = 0;
    cout << "Enter The number :" ;
    cin >> num ;

    orgnum = num ;
    // A loop For counting the Digits In the Number
    while(num > 0){
        num = num / 10 ;
        digits ++ ;
    }

    num = orgnum ;
    // Powering The The Digits Anf Adding them into Sum
    while ( num > 0)
    {
        remainder = num % 10 ;
        sum += power(remainder,digits);
        num = num / 10 ;
    }

    // Logic Of Making A Armstrong Number
    if(orgnum == sum){
        cout << "The Number Is Armstrong Number";
    }else{
        cout<< "The number Is not Armstrong Number";
    }
    
return 0 ;
}