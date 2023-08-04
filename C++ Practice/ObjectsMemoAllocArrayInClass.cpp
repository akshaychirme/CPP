#include <iostream>
// harry
using namespace std;

class shop
{
    int ItemID[100];
    int ItemPrice[100];
    int counter;

public:
    void list(void);
    void initcounter(void) { counter = 0; };
    void setPrice(void);
    void displayPrice(void);
};
void shop ::list(void)
{
    int list;
    cout << "Enter your total numbers of item to add in a list = ";
    cin >> list;
    for (int i = 1; i <= list; i++)
    {
        setPrice();
    }
}
void shop ::setPrice(void)
{
    cout << "Enter Item ID = ";
    cin >> ItemID[counter];
    cout << "Enter Item Price = ";
    cin >> ItemPrice[counter];
    counter++;
}

void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Item ID = " << ItemID[i] << " has price = " << ItemPrice[i] << endl;
    }
}

int main()
{

    shop obj;
    obj.initcounter();
    obj.list();
    obj.displayPrice();

    return 0;
}