#include <iostream>
using namespace std;

struct regi
{
    int rollno;
    char name[20];
    int marks;
};

union regi1{
int rollno;
char name[20];
int marks;
};

int main()
{

    struct regi a;
    cout << "Enter rollno = " << endl;
    cin >> a.rollno;
    cout << "Enter name = " << endl;
    cin >> a.name;
    cout << "Enter marks = " << endl;
    cin >> a.marks;

    cout<<a.rollno<<" "<<a.name<<" "<<a.marks<<endl;

union regi1 b;

//Jasa input gheyil tasa lagech output deycha karan Union la ekach datatype chi memory asti.
// Pahila print karun zalyavarach ti memory dusryala bhetel mhanun.
    cout << "Enter rollno = " << endl;
    cin >> a.rollno;
    cout<<"Rollno = "<<a.rollno<<endl;
    cout << "Enter name = " << endl;
    cin >> a.name;
    cout<<"Name = "<<a.name<<endl;
    cout << "Enter marks = " << endl;
    cin >> a.marks;
    cout<<"Marks = "<<a.marks<<endl;

    return 0;
}