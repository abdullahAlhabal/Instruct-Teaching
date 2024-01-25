#include <iostream>
using namespace std;
 
int main()
{

    /**
    A year consisting of 366 days instead of the usual 365 days is a leap year.
    Every fourth year is a leap year in the Gregorian calendar system.
    
    A year is a leap year if one of the following conditions is satisfied:
    1-  The year is a multiple of 400.
    2-  The year is a multiple of 4 but not a multiple of 100.
    */

    int year ;
    cout << "Enter the year to know if it a Leap year or not a leap year .\nYear : ";
    cin >> year;

    if(year % 400 == 0 ){
        cout << "leap year\n";
    }else{

        if(year % 100 == 0 ){
            cout << "Not a Leap Year";
        }else{
            if(year % 4 == 0){
                cout << "Leap Year\n";
            }else{
                cout << "Not a Leap Year\n";
            }
        }
    }

    // some refactoring for our code 
    
    /**
    if(year % 100 != 0)
        if(year % 4 == 0)
            leap year 

    if(year % 100 != 0 && year % 4 == 0)
        leap
    
    and
    if(year % 400 == 0)
        leap

    so
    if( (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0) )
        leap
    */

    if( (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0) ){
        cout << "leap year\n";
    }else{
        cout << "Not a leap Year\n";
    }

    
    return 0;
}


/**
 Algorithm

if (year % 400 = 0)
        return true (Leap year)
else if (year % 100 = 0)
        return false (Not a leap year)
else if (year % 4 = 0)
        return true (Leap year)
else
        return false (Not a leap year)
endif
*/