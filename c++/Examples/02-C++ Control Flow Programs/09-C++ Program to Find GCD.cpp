#include <iostream>
using namespace std;

int main()
{

    /**
    Greatest Common Divisor GCD Or Highest Common Factor HCF
    the GCD|HCF of two numbers is the largest number that exactly divides both numbers.

    36 = 2 * 2 * 3 * 3
    60 = 2 * 2 * 3 * 5

    GCD|HCF = Multiple of common factors
            = 2 * 2 * 3
            = 12

    1 -
        . find the minimum of the two numbers
        . res = min(a,b)
        . while res > 0
        . if a % res == 0 and b % res == 0 - then this is the GCD ,

        ```
        res = min(a,b)
        while(res>0){
            if(res%a == 0 && res%b == 0)
                break;  // res is the GCD
            res--; // until res become 0
        }
        return res
        ```

    2- Using the Euclidean Algorithm
        . if a = 0 , gcd is b
        . if b = 0 , gcd is a
        . if a = b , gcd is a or b
        . if a > b , repeat the Euclidean algorithm on a-b , b
        . if b > a , repeat the Euclidean algorithm on b-a , a

    */

    int a = 0 , b = 0 , gcd = 0 ;
    cout << "Enter two numbers to find the GCD|HCF .\nYour First Number is : ";
    cin >> a ;
    cout << "Your Second Number is : ";
    cin >> b ;

    while (b != 0)
    {
        gcd = b ;
        b = b % a;
        a = gcd;
    }

    cout << "the gcd of the two numbers is : " << a << endl;

}


/**
   gcd(10,20) is 10
   a = 10
   b = 20

   . if a is equal to 0 , then GCD is a
   . if b is equal to 0 , then GCD is b
   . if a and b are equals , the GCD is a or b
   . if a > b then gcd (a-b , b)
   . if b > a then gcd (a-b , b)


    here , b > a => b = b - a | a = a
    gcd(b-a , a ) == gcd (10 , 10)

    following the steps - if a and b is equals then a or b is the HCF

    Exp.2
    a = 36
    b = 60

    . b > a => b = 60 - 36 = 24
    . a = 36 | b = 24
    . a > b => a = a - b = 12
    . b = 24 | a = 12
    . b > a => b = 24 - 12
    . b = 12 | a = 12 so the gcd is 12

    notice that
    36 % 24 = 12 -> b = 24 | a = 12
    24 % 12 = 0 -> 12 is gcd

    a = 36
    b = 24

    while b != 0
        gcd = b
        b = a % b
        a = gcd

    20 , 10

    gcd = 10
    b = 20 % 10 => 0 | end of while
    a = gcd

    print a
*/
