#include<iostream>
//harry
using namespace std;

class Stud{

    private:
    int a,b;
    
    public:
    int x,y;
    //he method ahet
    void datataka(int a1, int b1);  //Declaration

    void databagha(){
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;
    cout<<"X = "<<x<<endl;
    cout<<"Y = "<<y<<endl;
    }
};

void Stud :: datataka(int a1, int b1){
    a=a1;
    b=b1;
}

int main(){
    Stud akshay;  //Object  ..But in java we call it referance
    // akshay.a =77;   //this will be error becase a is private we cannot access it directly.
    akshay.x=22;
    akshay.y=33;
    akshay.datataka(12,15);
    akshay.databagha();
    
    return 0;
}
