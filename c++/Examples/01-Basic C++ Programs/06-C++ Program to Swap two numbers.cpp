#include <iostream>
using namespace std;
 
int main()
{
    // swap two numbers with 3rd variable 
    int a, b, temp;
    
    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;

    cout << " before swapping a : " << a << " and b : " << b << endl ;

    temp = a ;
    a = b ;
    b = temp ;

    cout << " after swapping a : " << a << " and b : " << b << endl ;

    return 0;
}
