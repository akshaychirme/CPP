#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(){
    string name;
    cout<<"Enter the String = "<<endl;
    cin>>name;

    reverse(name.begin(),name.end());
    cout<<name<<endl;
    return 0;
}