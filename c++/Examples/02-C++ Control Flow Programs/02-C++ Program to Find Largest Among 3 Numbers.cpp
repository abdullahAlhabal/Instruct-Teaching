#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num1 = 0, num2 = 0, num3 = 0;
    cout << "Enter three numbers to get the largest among them .\n";

    // there are three ways to get the largest number
    // 1 - using the if-else statement
    // 2 - using a temporary variable
    // 3 - using the built-in function max()

    // implement the first way , using if-else statement
    cout << "1st : "; cin >> num1 ;
    cout << "2nd : "; cin >> num2 ;
    cout << "3rd : "; cin >> num3 ;

    if(num1 >= num2){

        if(num1 >= num3){
            cout << "The max is : " << num1 << endl;
        }else{
            cout << "The max is : " << num3 << endl;
        }
    }else{

        if(num2 >= num3){
            cout << "The max is : " << num2 << endl;
        }else{
            cout << "The max is : " << num3 << endl;
        }

    }

    // implement the second way , using temporary variable
    // int max => this is a special keyword in c++
    int _max  = num1;

    if(_max < num2)
        _max = num2;

    if(_max < num3)
        _max = num3;

    cout << "The max among the three numbers is : " << _max << endl;


    // implement the third way , using the built-in function max()
    // max() takes two parameters ,


    // directly
    cout << "The max among the three numbers is : " << max( num1 , max(num2,num3) ) << endl;

    // step by step
    _max = max(num1,num2);
    cout << "The max among the three numbers is : " << max( _max , num3 ) << endl;


    return 0;
}


/**

# The Algorithms :

* if-else statement

01- Start.
02- Input a, b, and c.
03- Check the condition a>=b
04- If step 3 is True go to step 5 else go to step 9.
05- Check the condition a>=c.
06- If step 5 is True go to step 7 else go to step 8.
07- Print “The Largest Among 3 is: a and go to step 13
08- Print “The Largest Among 3 is: c and go to step 13.
09- Check the condition b>=c.
10- If step 9 is True go to step 11 else go to step 12.
11- Print “The Largest Among 3 is: b and go to step 13.
12- Print “The Largest Among 3 is: c and go to step 13.
13- Stop.

* using the Temporary Variable

01- Create a new variable named max = a.
02- If max is less than b, then max = b.
03- If max is less than c, then max = c.
04- Return max.

* using the Built-in Function

C++ provides a library function named max() to find the maximum out of two numbers.
It is defined inside the <algorithm> header file.
We can use this function to find the maximum out of t

*/

/**

# Keywords : Reserved keywords


This is a list of reserved keywords in C++ :

and
bool
break
case
catch
char
class
const
continue
default
delete
do
double
else
false
float
for
if
int
long
namespace
new
not
or
private
protected
public
return
short
sizeof
static
switch
this
true
try
void
while
*/
