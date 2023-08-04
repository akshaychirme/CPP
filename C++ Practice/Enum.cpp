#include<iostream>
using namespace std;

/*
Enum:-
• Enumeration is a user defined name that consist of integral constant.
• It means it create array like structure and add values in list by giving
  numerical index from 0,1,2,3,... and so on.
• When we print value it will print index of that value.
*/
int main(){

 enum day{
    Monday,     //0
    Tuesday,    //1
    Wednesday,  //2
    Thursday,   //3
    Friday,     //4
    Saturday,   //5
    Sunday      //6
 };

enum day a;
cout<<Sunday<<endl;     //It will print 6.
    return 0;
}