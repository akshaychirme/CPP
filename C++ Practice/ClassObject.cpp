#include<iostream>
using namespace std;

/*
Class:- 
    • Class is an user define datatype.
    • It has its own data member and member function.
    • Which are used by creating an Object (Instace) of the class.
    • Class is logical entity and Object is a physical entity.
    • Class is a template.
    • There for by default access specifier of class is 'Private'.
Objects:-
    • Object is an instance of a class that have state and behaviour.
    • Properties of Object are Identity, state and behaviour.
*/

class stud{
    private:        //Mention data member as 'private' or not, it is private by default.
    int age;        //To use this data members we have to create functions.
    string name;    //Because data members are part of class which is logical identity,
                    //So cannot assign values to it.

    public:
    void age1(){
        age=27;
        cout<<"Age of Akshay is "<<age<<"."<<endl;
    };
    void name1(){
        name="Akshay Chirme";
        cout<<"Name of student is "<<name<<"."<<endl;
    };
};
int main(){

    stud box;
    box.name1();
    box.age1();

    return 0;
}