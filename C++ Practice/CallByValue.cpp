#include<iostream>

using namespace std;
/*
Call By Value :-
    • In call by value the actual value of variable can't be changed.
    • If you change the value of function parameter it is only changed
    for currunt function block.

*/
int change_value(int num2){         //Defination
num2 += 10;
cout<<"Changed value = "<<num2<<endl;
}

int main(){
 int num = 100;
 cout<<"Actual value befor calling = "<<num<<endl;
 change_value(num);         //Calling function
 cout<<"Actual value after calling = "<<num<<endl;
 cout<<"Actual value dose not changed."<<endl;

    return 0;
}