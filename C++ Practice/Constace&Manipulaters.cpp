#include<iostream>
#include<iomanip>

using namespace std;



int main()
{

    // constance -------------------------
    const int aa = 12;
    cout<< "A = "<<aa<<endl;

    // aa=15;
    // cout<< "redeclared A = "<<aa<<endl; // this will return error

     //Manipulaters  (setw)

     int a=1, b=12, c=121, d=1215;

    cout<< "a = "<<setw(4)<<a<<endl;
    cout<< "b = "<<setw(4)<<b<<endl;
    cout<< "c = "<<setw(4)<<c<<endl;
    cout<< "d = "<<setw(4)<<d<<endl;

    //operator Precedence

     

    return 0;
}
