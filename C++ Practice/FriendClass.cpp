#include <iostream>
using namespace std;

class shubham
{
private:
    int num1;
    int num2;

public:
    void values()
    {
        num1 = 100;
        num2 = 200;
    }
    friend class omkar;
};

class omkar
{
private:
    int ans;

public:
    void sum(shubham v)
    {
        ans = v.num1 + v.num2;
        cout<<ans<<endl;
    }
};

int main()
{
    shubham obj1;
    obj1.values();

    omkar obj2;
    obj2.sum(obj1);
    return 0;
}