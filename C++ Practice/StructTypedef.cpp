#include<iostream>
using namespace std;

typedef struct stud
{
    int sid;
    string name;
    string topanNav;
    float marks;
} st;   //typedef struct to 'st'. now you can use 'st' name as struct.

int main(){
    st akshay;
    st radhika;
    st omkar;
    st shubham;

    akshay.sid = 1;
    akshay.name = "Akshay";
    akshay.topanNav = "ChadyaBoy";
    akshay.marks = 61.9;

    omkar.sid = 2;
    omkar.name = "Omkar";
    omkar.topanNav = "FracturedBeer";
    omkar.marks = 59.8;

    radhika.sid = 3;
    radhika.name = "Radhika";
    radhika.topanNav = "DumbGirl";
    radhika.marks = 64.8;
    
    shubham.sid = 4;
    shubham.name = "Shubham";
    shubham.topanNav = "AmhiZopalu";
    shubham.marks = 60.6;

    cout<<akshay.name<<"\t\t"<<radhika.name<<"\t\t"<<omkar.name<<"\t\t"<<shubham.name<<endl;
    cout<<akshay.sid<<"\t\t"<<radhika.sid<<"\t\t"<<omkar.sid<<"\t\t"<<shubham.sid<<endl;
    cout<<akshay.topanNav<<"\t"<<radhika.topanNav<<"\t"<<omkar.topanNav<<"\t"<<shubham.topanNav<<endl;
    cout<<akshay.marks<<"\t\t"<<radhika.marks<<"\t\t"<<omkar.marks<<"\t\t"<<shubham.marks<<endl;
 
    // cout<<akshay.sid<<endl;
    // cout<<akshay.name<<endl;
    // cout<<akshay.marks<<endl;

    enum box{a, r, o, s};
    
    cout<<a<<r<<o<<s;


    return 0;
}