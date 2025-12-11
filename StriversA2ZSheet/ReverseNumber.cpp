#include <iostream>
using namespace std;

int main(){
    // Creating Variables 
    int num , rev_num = 0 , remainder ;
    cout << "Enter The number:";
    cin >> num ;

    // A loop For Accessing a number for Reversing it
    while(num > 0){
        remainder = num % 10 ;
        rev_num = (rev_num * 10) + remainder ;
        num = num / 10 ;
    }

    cout << "The Reversed Number is:" << rev_num ;
return 0 ;
}