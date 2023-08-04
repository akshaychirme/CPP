#include<iostream>
using namespace std;

int main(){

    int num,count=0;
    cout<<"Enter the number = ";
    cin>>num;

    while(num>0){
        num=num/10;
        // num/=10;      //we can write in this format also.
        count++; 
    }
    cout<<count<<endl;
    return 0;
}