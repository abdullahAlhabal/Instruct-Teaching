#include <iostream>
using namespace std;
 
int main()
{
    /**
    Revers digits of a Number
    if a number is 12548 the revers of the number is 84521

    12548 % 10 => 8 
    12548 / 10 => 1254

    1254 % 10 => 4 
    1254 / 10 => 125

    125 % 10 => 5
    125 / 10 => 12

    12 % 10 => 2 
    12 / 10 => 1 

    1 % 10 => 1 
    1 / 10 => 0 

    if we declare a variable as new_number and its equal to zero 
    -     0*10 + 8 = 80
    -    80*10 + 4 = 84
    -    84*10 + 5 = 845
    -   845*10 + 2 = 8452
    -  8452*10 + 1 = 84521


    while old_number > 0
        new_number = new_number * 10 + old_number % 10
        old_number = old_number / 10 


    */


    int number = 0 , reversed_number = 0;
    cout << "Enter a number to reverse it .Your Number : ";  

    cin >> number;

    int temp = number;
    while (number>0)
    {
        reversed_number = reversed_number * 10 + number % 10 ;
        number /= 10 ;
    }

    cout << "The Reversed number of " << temp << " is : " << reversed_number << endl ; 
    

    return 0;
}
