#include<iostream>

using namespace std;

//Logical Operators
int main()
{
    int a = 12;
    int b = 4;
    cout << "Akshay Chirme = "<< a+b<<"\n";
    cout << "Boss"<< endl;
    cout<< ((a!=b) && (a==12))  << endl;        //true 1
    cout<< ((a==b) && (a==12))  << endl;        //false 0
    cout<< ((a==b) || (a==12))  << endl;        //true 1
    return 0;
}
