#include <iostream>
using namespace std;


/**
 * Vowel Characters are : a e i o u
 * The rest of the remaining characters ( like b c d f ) are consonants

 - using the if-else statement with the `and &&` operator
 - using the if-else statement with the `or ||` operator
 - using the find() function
*/

int main()
{
    char in ;
    int i = 10;
    cout << "Enter a character to check if it a Vowel character or not .\nYour Character : ";
    cin >> in ;

    // using the if-else statement with the `and &&` operator
    if(in != 'a' && in != 'e' && in != 'i' && in != 'o' && in != 'u' && in != 'A' && in != 'E' && in != 'I' && in != 'O' && in != 'U' ){
        cout << "Consonant  character\n";
    }else{
        cout << "Vowel character\n";
    }

     // using the if-else statement with the `or ||` operator
    if(in == 'a' || in == 'e' || in == 'i' || in == 'o' || in == 'u' || in == 'A' || in == 'E' || in == 'I' || in == 'O' || in == 'U' ){
        cout << "Vowel character\n";
    }else{
        cout << "Consonant  character\n";
    }

    // using the find() function
    string vowelCharacterSet = "aeiouAEIOU";

    if(vowelCharacterSet.find(in) != string::npos){
        cout << "Vowel Character\n";
    }else{
        cout << "Consonant Character\n";
    }
    /** 
     here 'a' will print `Consonant Character` , because , find() return the position of the character if it is exists
     in our vowelCharacterSet = "aeiouAEIOU" , the index|position of 'a' is 0 , and if(0) is false so it will print 
     Consonant Character -> in order to solve the issue we will use the `npos constant value`
     if(vowelCharacterSet.find(in) != string::npos)
    */

    return 0;
}
