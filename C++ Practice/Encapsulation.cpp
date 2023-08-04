#include <iostream>
using namespace std;

/*
Encapsulation:-
    Encapsulation is the concept of Oops, that is used to wrap
    the data member and member function into a single unit.
    • Class is the best example of Encapsulation.
    • The main purpose of encapsulation is to secure the data.
*/

class thief
{
private:
    string name, address;
    int mob;

public:
    void infoin()
    {
        name = "Shubham";
        address = "katraj";
        mob = 123456789;
    }
    void infoout()
    {
        cout << name << endl;
        cout << address << endl;
        cout << mob << endl;
    }
};
class police : public thief
{
};
int main()
{

    thief a;
    a.infoin();
    a.infoout();

    police b;
    b.infoin();
    b.infoout();

    return 0;
}