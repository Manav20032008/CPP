#include <iostream>
using namespace std;

void  palindrome(int num){
    int rev_num = 0 , remainder ;

    int orgnum = num ;
    
    // A loop For Accessing a number for Reversing it
    while(num > 0){
        remainder = num % 10 ;
        rev_num = (rev_num * 10) + remainder ;
        num = num / 10 ;
    }

    if(rev_num == orgnum){
        cout << "The Number Is Palindrome" ;
    }else{
        cout << "The Number Is Not Palindrome" ;
    }
}
int main(){
    int num ;
    cout << "Enter The number:";
    cin >> num ;

    palindrome(num) ;

return 0 ;
}