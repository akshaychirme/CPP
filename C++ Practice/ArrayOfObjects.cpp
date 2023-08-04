#include<iostream>
using namespace std;


class baseclass{
public:
int varB;
void display(){
    cout<<"Baseclass"<<varB<<endl;
}
};

class derivedclass : public baseclass{
public:
int varD;
void display(){
    cout<<"Baseclass"<<varB<<endl;
    cout<<"Derivedclass"<<varD<<endl;
}
};


int main(){
    baseclass * bcpointer;
    baseclass objB;
    derivedclass objD;
    bcpointer = &objD;      //pointing base class to derived class

    bcpointer -> varB = 777;
    bcpointer->display();
    return 0;
}