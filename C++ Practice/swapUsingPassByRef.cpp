#include <iostream>
using namespace std;

void ref(int &a, int &b)
{
    // int temp;
    // temp = a;
    // a = b;
    // b = temp;

    a=a+b;
    b=a-b;
    a=a-b;

    // cout << &temp << "temp " << endl;
    cout << "After Swapping ------------------"<< endl;
    cout <<"Address of a = "<< &a << "    Address of b = " << &b << endl;
    cout << "a = " <<a<< "    b = " <<b<< endl;
}

int main()
{
   
    int a = 10;
    int b = 20;
    cout <<"Address of a = "<< &a << "    Address of b = " << &b << endl;
    cout << "a = " <<a << "    b = " << b << endl;
    ref(a, b);

    cout << "After Swapping numbers passing by address original value also change----"<< endl;
    cout << "a = " <<a << "    b = " << b << endl;

    return 0;
}