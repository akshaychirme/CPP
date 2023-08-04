#include<iostream>
using namespace std;

/*
Conditional Statement:-
    1) if Statement
    2) if-else Statement
    3) else-if ladder Statement
    4) nested if-else Statement
    5) Switch statement

1) if Statement:-
    If condition is true then if block code will be executed
    otherwise no action taken.

2) if-else Statement:-
    It is used to execute two statemnet for a  single condition,
    if given condition is true 'if' block executed otherwise 'else' block will be executed.

3) else-if ladder Statement:-
    if-else ladder statement is used when we have multiple conditions.(More then one condition)

4) nested if-else Statement:-
    Whenever we defined if-else block inside another if-else block called nested if-else statement.
*/
int main(int argc, char const *argv[])
{
    
    // int age;
    // cout<< "ENter age = ";
    // cin>>age;

    // [1] Selection Control Structure (if)---------------------------

    // if(age==27){
    //     cout<<"This is succsessfull message from if statement."<<endl;
    // }

    // [2] Selection Control Structure (if-else)---------------------------

    // if(age==28){
    //     cout<<"This is 'if' statement of if-else statement"<<endl;
    // }else{
    //     cout<<"Its not a wedding year"<<endl;
    // }

    // [3] Selection Control Structure (else-if ladder Statement)---------------------------
    
    // if(age<12){
    //     cout<<"Kid";
    // }else if(age>=12 && age<=18){
    //     cout<< "Teen";
    // }else{
    //     cout<<"Adult";
    // }

    // [4] Selection Control Structure (nested if-else Statement)---------------------------

    int x,y,z;
    cout<<"Enter the 3 numbers to find max bet them = "<<endl;
    cin>>x>>y>>z;

    if(x>y){
        if(x>z){
            cout<<"x is Max = "<<x<<endl;
        }else{
            cout<<"z is Max = "<<z<<endl;
        }
    }else{
        if(y>z){
            cout<<"y is Max = "<<y<<endl;
        }else{
            cout<<"z is Max = "<<z<<endl;
        }
    }


    //By Using Ternary Operater ========

    // string vote=(age==18)?"You can vote.":"You cant Vote.";
    // cout<<vote<<endl;


    // Selection Control Structure (switch)---------------------------
    //    • Switch Statement used when we want to start only one case out of multiple cases.
   
    // switch(age){
    //     case 18:
    //     cout<< "Graduation year.";
    //     break;

    //     case 28:
    //     cout<< "Wedding year.";
    //     break;

    //     case 31:
    //     cout<< "Time to grow your family...♥";
    //     break;
        
    //     default:
    //     cout<<"Plans kay ahet tuze?";
    //     break;
    // }
    
    return 0;
}
