#include<iostream>
//harry
using namespace std;

/*
Function Overloading:-
    • When multiple functions of same name are created but diffrant datatype of argument
      and number of arguments within the class.
*/


int sum(int a, int b){
    cout<<"Using function with two arguments."<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with three arguments."<<endl;
    return a+b+c;
}

//Volume of cylinder--------------------------------
int volume(double r, int h){
    return (3./14 * r * r * h);
}

//Volume of Cube-------------------------------------
int volume(int a){
    
}

int main(){
    
    cout<<"Sum is = "<<sum(2,2,2)<<endl;
    cout<<"Sum is = "<<sum(4,4)<<endl;
    
    
    return 0;
}