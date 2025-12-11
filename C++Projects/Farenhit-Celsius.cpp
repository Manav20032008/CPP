#include <iostream>
using namespace std;

float celsiusToFarenhit(int celsius){
    return (5.0/9.0) * (celsius-32.0);
}
int main(){
    float celsiusValue , farenhitValue ;
    
    cout << "Enter The Value Of Temperature In Celsius:";
    cin >> celsiusValue;

    farenhitValue = celsiusToFarenhit(celsiusValue);
    
    cout << "The Farenhit Value of Entered Temperature Is:"<< farenhitValue << endl ;

return 0 ;
}