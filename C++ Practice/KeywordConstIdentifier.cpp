/*
Keyword:-
    Keyword is nothing but reserved word, whose meaning already defined on the compiler.
    • We cant use keyword as a variable & constant name.
    • Keyword must be in lowercase.
    • 48+ keywords

Constant:-
    Constant means fixed value, which does not change in run time.
    • const - keyword is used to declare a constant.
    • Constant can be of any datatype.
    • Constants are also called as literals.
    • We can change the value of constant forcely using pointers.

Identifier:-
    Identifier refers a name used to identify variable, function,
    class, module or any other user-defined item.
    • Keyword cannot be used as a identifier name.
*/

#include<iostream>
using namespace std;

int main(){
    int box = 10;
    cout<<"Before changing box value = "<<box<<endl;
    box =20;        //changing the values
    cout<<"After changing box valueas 20 = "<<box<<endl;

    // const int box2 = 10;
    // cout<<"Before changing box value = "<<box2<<endl;
    //box2 = 20;      // It will throw error. We cannot modify const value at run time.
    // cout<<"Before changing box value = "<<box2<<endl;

    return 0;
}