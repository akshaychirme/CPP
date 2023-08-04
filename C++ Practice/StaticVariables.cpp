#include<iostream>
//learncoding
using namespace std;

/*
Static:-
    ○ Static Data Member -->
        • Whenwver we declare a data members as a static either inside or outside
          of the class is called as Static Data Members.
        • There is only one copy of static data members even if there are many class objects.
        • It is always initialized with zero because it's default value is 'Zero'.
        • It is shared memory for all objects of the class.
        • It retains it's values. (Shevatchi value lakshyat thewto.)
    
    ○ Static Member Function -->
        • If we create a member function of a class as a static is called as Static Member Function.
        • It is access only static data members.
        • It is also accessible if we don't have any object of a class.
*/

//Using '::' scope resolution because we are initializing value outside the class body.
//We have to inisalized 'b' as '0' because it is static data member. 


class A{
    int a;
    static int b;
    public:
    A(int x, int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<a<<" "<<b<<endl;
    }
    static void display(){
        //cout<<a;    //'a' is not accessible as it is static.
        cout<<b<<endl;
    }
};
int A::b=0;
int main(){
int x1,y1;

// cout<<"Enter the two numbers = ";
// cin>>x1>>y1;
A obj1(10,20);
A obj2(100,200);
obj1.show();        //10    20
obj2.show();        //100   200 (20 will get replace by 200)

A::display();       //200
obj1.show();        //10    200

    return 0;
}