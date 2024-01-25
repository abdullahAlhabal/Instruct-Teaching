#include <iostream>
using namespace std;
 
int main()
{
 

 // T(°C) = (T(°F) - 32) × 5/9
 
 /**
  Input: 32
  Output: 0
  
  Input: -40
  Output: -40
 */
 
    cout << " Enter the temperature in Fahrenheit : ";
    int F ; 
    cin >> F;

    double C = (F - 32.0) * 5.0 / 9.0 ;

    cout << "The temperature in Celsius is : " << C << endl;

    return 0;
}
