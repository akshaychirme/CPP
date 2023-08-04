#include <iostream>
using namespace std;
/*
Function:-
    Function is a block of code that runs only when it is called.

Types:-
    • Pre-defined functions.    //It does not have body and end with ';'.[strcpy, strcmp, etc]
    • User-defined functions.   //main(); is also user-defined function.
*/
int sum(int a, int b)       //If you want return from function use that 'datatype' and 'return' statement.
{
    int c = a + b;
    return c;
}

int main()
{
    int num1, num2;
    cout << "Enter the num1 = ";
    cin >> num1;

    cout << "Enter the num2 = ";
    cin >> num2;

    cout << "The sum is = " << sum(num1, num2);
    return 0;
}