
/*
What is Variable?
        Variable is the name of memory location where we can store any kind of value.
        • VAriables are case-sensetive in c++.
        • Variable must be start with (a-z, A-Z) or ( _ Underscore)
        • We cannot give extra space in variable.

Types of variables:-
        • Globle variables.
        • Local variables.
        • Static variables.
*/

#include<iostream>
using namespace std;

int main(){
        int z;                  //4 bytes
        int a =10;              //4 bytes
        char b = 'A';           //1 byte
        float c = 12.15f;       //4 bytes
        double d = 12.15;       //8 bytes
        bool e = true;          //1 byte

//To see size of datatypes -
        cout<<sizeof(z)<<endl; //Even if we did't store any value then also size is occupied.
        cout<<sizeof(a)<<endl;
        cout<<sizeof(b)<<endl;
        cout<<sizeof(c)<<endl;
        cout<<sizeof(d)<<endl;
        cout<<sizeof(e)<<endl;

        return 0;
}