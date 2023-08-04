#include <iostream>
using namespace std;

/*
Exception Handling:-
    • An exception is unexpected / unwanted / abbnormal situation that occured at runtime
      called Exception.

    ◘ try - statement allows you to define a block of code to be tested for errors while
        it is being executed.
    ◘ throw - keyword throws an exception when a problem is detected, which lets us
        create a custum error.
    ◘ catch - statement allows you to define a block of code to be executed, if an error
        occurs in the try block.
*/
int c;
int divide(int a1, int b1)
{

    try
    {
        if (b1 == 0)
            throw b1;       //this throw b1 to catch block.
        c = a1 / b1;
        cout << "Answer is = " << c << endl;
    }
    catch (int x)           //datatype of b1 is int so, taking int variable x.
    {
        cout << "Ooops...Cannot Divide by Zero." << endl;
    };

    return c;
};
int main()
{

    int a, b;
    cout << "Enter first number = " << endl;
    cin >> a;
    cout << "Enter second number = " << endl;

    cin >> b;
    divide(a, b);

    //before applying exception if we get error in above code below code will not execute.
    cout << "Printing even though getting error.";

    return 0;
}