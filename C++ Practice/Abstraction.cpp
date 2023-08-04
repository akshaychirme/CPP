#include <iostream>
using namespace std;

/*
Abstraction:-
    It is a technology by which only necessory data is shown to the user and
    unnecessary data is hidden.
*/

class mybank
{
private:
    int balance;
    int pin;

public:
    string bname;
    int accno;
    void boxin()    
    {
        balance = 10000;
        pin = 1212;
        bname = "citybank";
        accno = 12345;
    }
    void boxout()
    {
        cout << "balance = " << balance << endl;
        cout << "pin = " << pin << endl;
        cout << "bank name = " << bname << endl;
        cout << "account no = " << accno << endl;
    }
};

int main()
{
    mybank a;
    a.boxin();
    a.boxout();

    cout<<"Hi. Iam stranger. I want to see your bank details."<<endl;
    // cout << "balance = " << a.balance << endl;       //stranger cannot access private memeber.
    // cout << "pin = " << a.pin << endl;               
    cout << "bank name = " << a.bname << endl;
    cout << "account no = " << a.accno << endl;
    return 0;
}