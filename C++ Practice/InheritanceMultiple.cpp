#include <iostream>
using namespace std;

/*
Multiple Inheritance:-
        When a class cam inherit from more than one classes.

*/
int a, b, c; // global veriable
class A
{

public:
    void input();       //initializing function inside class.
    void sum();
};
//here purposely we are writing function body outside the class. By using scope operator.
void A ::input()
{
    cout << "Enter the two numbers = " << endl;
    cin >> a >> b;
}
void A ::sum()
{
    c = a + b;
    cout << "Sum = " << c << endl;
}
class B
{
public:
    void sub();
};
void B ::sub()
{
    c = a - b;
    cout << "Sub = " << c << endl;
}
class C : public A, public B
{
public:
    void multi();
    void divi();
};
void C :: multi()
{
    c = a * b;
    cout << "Multiplication = " << c << endl;
}
void C :: divi()
{
    c = a / b;
    cout << "Divide = " << c << endl;
}
int main()
{
    C obj;
    obj.input();
    obj.sum();
    obj.sub();
    obj.multi();
    obj.divi();
    return 0;
}