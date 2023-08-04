#include <iostream>
using namespace std;
/*
Multilevel Inheritence:-
        • It is a process of deriving a class from another derived class.
        • When one class inherits another class it is further inherited by another class.
          It.is known as multilevel inheritance.

          class A
            |
          class B
            |
          class C
*/
class A
{
protected:      //make it protected then only derived class will have access to this data members;
    int a;
    int b;

public:
    void input()
    {
        cout << "Enter tow numbers = " << endl;
        cin >> a >> b;
    }
};
class B : public A
{
    int c;

public:
    void sum()
    {
        c = a + b;
        cout << "Addition = " << c << endl;
    }
    void sub()
    {
        c = a - b;
        cout << "Substraction = " << c << endl;
    }
};
class C : public B
{
    int d;

public:
    void multi()
    {
        d = a * b;
        cout << "Multiplication = " << d << endl;
    }
    void divi()
    {
        d = a / b;
        cout << "Divide = " << d << endl;
    }
};

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