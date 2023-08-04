#include <iostream>
using namespace std;

/*
User defined Datatypes -->
Structure:-
    Structure is a user defined datatype which are use to store dis-similar types of value.
    Size of Structure is = Sum of all structure member size.
Union:-
    Union is same as structure.
    Size of Union is = Its biggest member. 
*/

struct box1
{
    int b;          //4 byte
    float d;        //4 byte
    double e;       //8 byte
};

union box2
{
    int b;          //4 byte
    float d;        //4 byte
    double e;       //8 byte
};

int main()
{
    struct box1 x;
    union box2 y;

    cout << "Structure size = " << sizeof(x)<<endl;       //4+4+8=16 byte     It will add all size.
    cout << "Union size = " << sizeof(y);                 //8 byte            Takes only bigger one.
    // cout << sizeof(x)<<endl;
    return 0;
}