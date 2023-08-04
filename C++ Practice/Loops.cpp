#include<iostream>
using namespace std;

/*
Loop:- 
    Loop is used to repeat a block of code until the given condition is true.

Types of loops:-
    1)While loop -->
            While loop is also konwn as "entry controlled loop". The statement will be
            executed continously until the given condition as no loger satisfied.
    2)For loop -->
            Unlike while loop for loop perform all operations in single line.
    3)do-while loop -->
            • It is also known as "exit controlled loop", because it tests condition at
              the end of loop body.
            • It executes at once even the given condition is true or false.
*/
int main(int argc, char const *argv[])
{
    //While Loop---------------------------------------

    int a = 1;
    while(a<=10){
        cout<<"While loop "<<a<<endl;
        a++;
    }

    //For Loop---------------------------------------

    //for (initialization; condition; updation)
    for (int i=1; i<=10; i++){
        cout<<i<<" ";
    }

    cout<<"\n"; // This is for  Next Line.

    //Do While

    int b = 11;
    do{
        cout<<"once loop will executed Even condition is false.";
    }while(b<10);  //condition will check after first loop is executed.

    return 0;
}
