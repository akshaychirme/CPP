#include<iostream>
#include<string>
//Harry
using namespace std;

/*
C++ --> Initially called --> C with classes by stroutrop
class --> extension of structure (in C).
Structure had limitations
    -Members are public
    -No methods are in structure.
classes --> structures + more features.
classes --> can have methodes and properties.
classes --> can make few members as private & few as public.
stuctures in C++ are typedefed
You can declare objects along with the class declaration like this:
    class Student{
        //class definition
    } akshay, radhika, shubham;
akshay.marks = 99; (This makes no sense if marks are private.)
*/

//Nesting of Member Functions-----------------------------------------
class binary{
    string num;     //By default class member is Private.

    public:
    void takeInput(void);
    void cheackInput(void);     //If we write checkInput as private then we cannot call manually.
    void onceCompliment(void);
    void display(void);
};

void binary :: takeInput(void){
    cout<<"Enter the number = ";
    cin>>num;
}

void binary :: cheackInput(void){
    for(int i=0; i<num.length(); i++){
        if(num.at(i)!='0' && num.at(i)!='1'){       //.at is a function of string.
            cout<<"It is not a binary number."<<endl;
            exit(0);
        }
    }
}

void binary :: onceCompliment(void){
    cheackInput();      //This is Nesting of Member Function. User can't see this. It works internally.
for(int i=0; i<num.length(); i++){
    if(num.at(i) == '0'){
        num.at(i) = '1';
    }else{
        num.at(i) = '0';
    }
}
}

void binary :: display(void){
    for(int i=0; i<num.length(); i++){
        cout<<num.at(i);
    }
}

int main(){

binary obj;
obj.takeInput();
// obj.cheackInput();       //we are calling cheackInput() function at the time of calling onceCompliment() function.
obj.onceCompliment();
obj.display();
    return 0;
}