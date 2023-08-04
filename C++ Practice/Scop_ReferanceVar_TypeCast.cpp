#include<iostream>

using namespace std;
//video7
float c = 10.3f;
int main(int argc, char const *argv[])
{
   int a,b,c;
    cout<< "A = ";
    cin>>a;

    cout<< "B = ";
    cin>>b;

    cout<< "A and B is "<<a<<" and "<<b<<endl;
    //scope resolution operater.
    cout<< "C = "<<::c<< endl;

    //sizeof() method for finding size in byte.
    cout<< "Size of c is = "<<sizeof(c);

    cout<< "Size of 12.15 double is = "<<sizeof(12.15)<<endl;
    cout<< "Size of 12.15f float is = "<<sizeof(12.15f)<<endl;
    cout<< "Size of 12.15l long double is = "<<sizeof(12.15l)<<endl;
   
    //Referance Variable.--------------------------------------

    int x = 10;
    int & y = x;
    cout<< "X = "<<x<<endl;
    cout<< "Y = "<<y<<endl;

    // Type Casting ------------------------------------------

    int s = 45;
    float t = 12.15;

    cout<< "S = "<<(float)s<<endl;
    cout<< "T = "<<(int)t<<endl;
    return 0;
}



