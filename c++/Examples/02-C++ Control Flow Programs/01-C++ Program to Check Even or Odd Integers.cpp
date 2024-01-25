#include <iostream>
using namespace std;
 
int main()
{
    cout << "Enter an Integer number to check if it an Even number or an Odd number , Your Number : ";
    int number ; cin >> number;

    // if the number mod by 2 , so that , the number is even
    if( number % 2 == 0){
        cout << "the number is Even \n";
    }else{
        cout << "the number is Odd \n";
    }

    //     if( number % 2 == 0) === if(!(number % 2 ))

    return 0;
}
