#include <iostream>
using namespace std;
 
int main()
{
    /**
        in math
        a * b = gcd(a,b) * lcm(a,b)
        lcm(a,b) = (a*b)/gcd(a,b)
    */

    double a = 0 , b = 0 , gcd = 0 , lcm = 0 ;
    
    cout << "Enter two numbers to find the LCM .\nYour First Number is : ";
    cin >> a ;
    cout << "Your Second Number is : ";
    cin >> b ;

    // declare a new variables to store the Original values of a and b 
    int original_a = a , original_b = b ;

    while (b != 0)
    {
        gcd = b ;
        b = b % a;
        a = gcd;
    }

    gcd = a ;
    lcm = (original_a * original_b) / gcd ;
    cout << "the lcm of " << original_a << " and " << original_b << " is : " << lcm << endl;

    return 0;
}
