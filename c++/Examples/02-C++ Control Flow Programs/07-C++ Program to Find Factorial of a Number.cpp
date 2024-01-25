#include <iostream>
using namespace std;
 
int main()
{

    // fact(0) = 1 
    // fact(1) = 1 
    // fact(2) = 2 * fact(1) = 2 * 1 = 2 
    // fact(3) = 3 * fact(2) = 3 * 2 = 6 

    int number ; 
    cout << "Enter a number to find the Factorial of it .\nYour Number : ";
    cin >> number ;

    double fact = 1 ;
    for (int i = number ; i > 0 ; i--){
        fact *=i;
    }

    cout << "the factorial of the number " << number << " is : " << fact << endl;

    return 0;
}
