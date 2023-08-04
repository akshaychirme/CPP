#include<iostream>
using namespace std;

int main(){

    int year;
    cout<<"Enter year = ";
    cin>>year;
    
    int box = year%4;
    if(box==0){
        cout<<"Leap Year.";
    }else{
        cout<<"Not a Leap Year.";
    }

    return 0;
}