#include<iostream>
using namespace std;

int main(){
    int a=10;
    // int *ptr;
    // ptr=&a;
    int *ptr=&a;

    cout<<"Value of a is = "<<a<<endl;
    cout<<"Value of Pointer is = "<<ptr<<endl;
    cout<<"Value at Pointer a (*ptr) is = "<<*ptr<<endl;
    cout<<"Value of Address a (&a) is = "<<&a<<endl;

    return 0;
}