#include <iostream>
using namespace std;

/*
Friend Function:-
    Friend Function is a function which is not the member of a class,
    instead of that it can access private and protected member of class.
    • Friend function is declared with 'friend' keyword.
    • Using friend function we can work with two differant classes members.

*/
class radhika;      //initializing second class because we are using it in first class.
class akshay
{
private:
    int a;          //variable is private.

public:
    void cash1()
    {
        a = 10;
        cout << "Akshay has rupees = " << a << endl;
    }
    friend void omkar(akshay x, radhika y);     //friend function omkar has 2 friends.
};

class radhika
{
private:
    int b;

public:
    void cash2()
    {
        b = 10;
        cout << "Radhika have repees = " << b << endl;
    }
    friend void omkar(akshay x, radhika y);
};

void omkar(akshay x, radhika y)
{
    cout << "Akshay give Omkar rupees = " << x.a << endl;
    cout << "And Radhika give Omkar rupees = " << y.b << endl;
    cout << "Omkar has total rupees = " << x.a + y.b << endl;       
};
int main()
{

    akshay box1;
    box1.cash1();
    radhika box2;
    box2.cash2();
    omkar(box1, box2);

    return 0;
}