#include <iostream>
using namespace std;

/*
Inheritance:-
    When One class access the property of another class is called Inheritance.
    We make data member 'protected' because inherited class can access that.
Types:-
    • Single Inheritance.
    • Multiple Inheritance.
    • Multilevel Inheritance.
    • Hierarchical Inheritance.
    • Hybrid Inheritance.
*/

class dad
{
protected:
    int amount1;

public:
    void show1()
    {
        amount1 = 4000;
    }
};
class son : public dad
{
    int amount2;

public:
    void show2()
    {
        amount2 = 20000;
        cout << "son = " << amount2 << endl;
        cout << "dad = " << amount1 << endl;
    }
};
int main()
{
    son obj;
    obj.show1();
    obj.show2();
    return 0;
}