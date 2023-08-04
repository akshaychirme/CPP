#include<iostream>
//learncoding
using namespace std;

/*
Function Overriding:-
    function overriding in which we can define a function of same name,
    same parameters and their datatypes in both the base class and devived class
    with the differant function defination.
*/

class A{
    public:
//    virtual void name(){      //virtual keyword will override the functon and
                                //compiler will move to derived class and find same name function. 
    void name(){
        cout<<"Akshay";
    }
};
class B : public A{
    public:
    void name(){
        cout<<"Chirme";
    }
};
int main(){
    // B obj;
    // obj.name();     //This will call derived class function.
    // obj.A::name;    //This will call base class function.
//:: scop resolution operator is use to call out side function from the class.


//call by using pointer-----------------------------------

A* ptr;
B obj;
ptr=&obj;
ptr->name();        //pointer ni call karayla arrow operator vaprayche (->).
    return 0;
}