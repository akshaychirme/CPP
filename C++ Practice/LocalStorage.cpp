#include<iostream>
using namespace std;

/*
Storage class:-
    Storage class defines the scope and lifetime of variable and functions.

Types:-
    1) Local (auto)
    2) Static
    3) Register
    4) Global (extern)

Storage class     Memory      Default             Scope                 Life-time

    local           RAM         Garbage         within block      till block is active.
    static          RAM         0               within block      till the termination of program.
    global          RAM         0               anywhere          till the termination of program.
    register        Register    Garbage         within block      till block is active.

*/
int sum(int a, int b){
    int box = (a+b);
    
    return box;
    // return a+b;
}
// int a;                      //Global (Extern) storage class.
int main(){

    // int b;                  //local(auto) storage class.
    // static int c;           //static storage class
    // register int d;         //register storage class.

    //              cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    //Default value = '0'  'garbage'  '0'   'garbage'


    int num1,num2;
    cout<<"Enter 2 numbers"<<endl;
    cin>>num1>>num2; 

    int s = sum(num1,num2);

    cout<<s<<endl;
    cout<<sum(num1,num2)<<endl;

    return 0;
}