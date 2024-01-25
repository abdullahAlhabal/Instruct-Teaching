#include <iostream>
using namespace std;
 
int main()
{
    int number; 
    cout << "Enter a number to print the Multiplication Table of it .\nNumber : ";
    cin >> number ;

    for (int i = 0 ; i <= 10 ; i++){
        cout << i << " * " << number << " = " << i*number << endl;
    }

    return 0;
}
