#include<iostream>
#define num 1215                    //Object macro
#define max(a,b) ((a>b)?a:b)        //function macro
using namespace std;

/*
Macro:-
    • Macro is a piece of code in the programm which is given some name.
    • Whenever the name is used, then name will replace with the value of that macro.
    • Macro is define by the help of '#define macro_name value.

Types of Macro:-
    1) Object macro
    2) Function macro
*/

int main(){

    //Object macro----------------------------------------

cout<<"Jupiter vehicle no. = "<<num<<endl;
cout<<"Apache vehicle no. = "<<num<<endl;
cout<<"Gixxer vehicle no. = "<<num<<endl;
cout<<"XUV 5oo vehicle no. = "<<num<<endl;
    
    //function macro--------------------------------------

    cout<<max(12,11)<<endl;
    cout<<max(2354,2352)<<endl;
    cout<<max(6454564,57354343)<<endl;
    
    return 0;
}