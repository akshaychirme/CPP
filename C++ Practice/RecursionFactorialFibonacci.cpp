#include<iostream>
//harry
using namespace std;

//Recursion:- Function that calls itself is called as Recursion.

//Recursion Factorial-------------------------------------

// int fact(int a){    //a=5
//     if(a<=1){       //false
//         return 1;
//     }
//     return a * fact(a-1);   //5*fact(4)
// }

// int main(){
//     int a;
//     cout<<"Enter the number = ";
//     cin>>a;
//     cout<<"Factorial of "<<a<<" is "<<fact(a)<<endl;
// return 0;
// }

//Factorial without recursion---------------------------------

// int main(){
// int num=5, mul=1;
// int i=1;
// while(i<=5){
//     mul = mul * i;
//     i++;
// }
// cout<<mul;
// return 0;
// }

    //Recursion Fibonacci-------------------------------------
    //Sum of all fibonacci numbers of nth value.

int fibo(int b){
    if(b<2){
        return 1;
    }
    return fibo(b-2) + fibo(b-1);  // Tyachya magchi value + Magchi value
}
int main(){
    int b;
    cout<<"Enter the number = ";
    cin>>b;
    cout<<"Fibonacci value of "<<b<<" is "<<fibo(b)<<endl;
    
    return 0;
}