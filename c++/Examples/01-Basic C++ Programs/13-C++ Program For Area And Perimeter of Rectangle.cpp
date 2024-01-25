#include <iostream>
using namespace std;

int main()
{

    /**
    A rectangle is a flat figure in a plane. It has four sides and four equal angles of 90 degrees each.
    In a rectangle all four sides are not of equal length like squares,
    sides opposite to each other have equal length. Both diagonals of the rectangle have equal lengths.

    Area = a*b

    Perimeter = 2*(a+b)

    Ex:
    * Input: 4 5
    * Output:   Area = 20
                Perimeter = 18

    * Input: 2 3
    * Output:   Area = 6
                Perimeter = 10

    */

    // it's better to assign a initial value as (0)
    int a = 0 , b = 0 ;
    cout << "Enter the length of the sides \na : " ;
    cin >> a ;
    cout << "b : ";
    cin >> b;

    // print without using variables
    cout << "The Area of the Rectangle is : " << a*b << "\nThe Perimeter of the Rectangle is : " << 2*(a+b) << endl;

    // print using variables
    double Area = a * b ;
    double Perimeter = 2 * (a + b);
    cout << "The Area of the Rectangle is : " << Area << "\nThe Perimeter of the Rectangle is : "<< Perimeter << endl;


    return 0;
}
