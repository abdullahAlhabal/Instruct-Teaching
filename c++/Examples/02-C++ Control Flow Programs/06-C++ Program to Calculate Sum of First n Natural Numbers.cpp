#include <iostream>
using namespace std;

int main()
{

    int n ;
    cout << "Enter a number to calculate the Sum of first n natural numbers .\nYour Number : ";
    cin >> n;

    int sum = 0 ;
    for (int i = 0 ; i <= n ; i++)
        sum+=i;

    cout << "Sum Using For Loop is : " << sum << endl;

    sum = 0;
    sum = n *(n+1)/2;
    cout << "Sum using n * (n +1 ) / 2 " << "\n\n" << n << " * " << " ( " << n << " + 1 ) / 2 = " << sum << endl;

    // 0 1 2 3 4 5 6 7 8 9 10
    /**
    0 + 10 = 10
    1 + 9 = 10
    2 + 8 = 10
    3 + 7 = 10
    4 + 6 = 10

    10 + 10 + 10 + 10 + 10 = 50
    50 = 100 / 2 = (10*10)/2   -> n*n/2
    but there are the `5` and 5 = n/2

    n*n/2 + n/2
    (n^2 + n )/2
    n(n+1)/2
    */

    return 0;
}
