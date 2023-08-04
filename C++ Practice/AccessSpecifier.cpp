#include<iostream>
using namespace std;


/*
Access Specifier:-
    We use access specifiers to protect our data mambers and member function.
    To apply restiction on data mambers and member function.

1)Private -
        • Class itself
        • Friend of class
2)Protected -
        • Class itself
        • Inherited class
3)Public -
        • Anywhere accessible
*/

class box{
    public:
        int a;
    private:
        int b;
    protected:
        int c;
};

int main(){
    box obj;
    obj.a=10;
    //obj.b=20;     this is not allow because its private.
    //obj.c=30;     this is not allow because its protected.

    return 0;
}