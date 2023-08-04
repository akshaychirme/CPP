#include <iostream>
using namespace std;

class amazon
{
protected:
    int a;

public:
    void delivery()
    {
        a = 100;
        cout << "Delivery charge = " << a << endl;
    }
};
class order1 : public amazon
{
public:
    void mobile()
    {
        cout << "Mobile Ordered." << endl;
    }
};
class order2 : public amazon
{
public:
    void tv()
    {
        cout << "TV Ordered." << endl;
    }
};
int main()
{
    order1 obj1;
    order2 obj2;

    obj1.mobile();
    obj1.delivery();
    obj2.tv();
    obj2.delivery();
    return 0;
}