#include<iostream>
using namespace std;


/*
Constructor:-
    Constructor is a soecial type of function which is automatically get call
    when object is created.
    • The main purpose of constructor is used to initialize the object.
types:-
    • Default Constructor.
    • Parameterized Constructor.
    • Copy Constructor.
*/

class box{
    int a,b,x,y;
    public:
    box(){                       //Default constructor
        a=10;
        b=20;
        cout<<a<<" "<<b<<endl;
    }
    box(int c, int d){          //Parameterize constructor
        x=c;y=d;
        cout<<c<<" "<<d<<endl;
    }
    box(box &ref){
        x=ref.x;
        y=ref.y;
        cout<<x<<" "<<y<<endl;
    }

};
int main(){

    // box obj; 
    // box obj1=box();     //this is the ex of constructor is use to initialize an object.
    box obj(12, 15);
    box obj2=obj;
    
    return 0;
}