#include<iostream>
// #include "OopsByBabbarClass.cpp"    //We can include external file.
using namespace std;

class Hero{
/*
• Empty class has size = 1.
• Class has private member by default.
• Access modifier:- 
        ◘ public: can access all over code.
        ◘ private: can access within class.
        ◘ protected: can access 

• We can access Private member of class by using getter and setter.
*/

private:
char sex;

public:         
string name;
int age;



string getName(){
    return name;
}

int getAge(){
    return age;
}

char getSex(){
    return sex;
}

void setName(string name1){
    name=name1;
}

void setAge(int age1){
    age=age1;
}

void setSex(char sex1){
    sex=sex1;
}

};

int main(){
//This is static way

// //Creating Object.
// Hero h1;

// //Use setter to set value.

// h1.setAge(27);
// h1.setName("Akshay");
// h1.setSex('M');     //We can access private member of class by using getter and setter.

// cout<<"Name "<<h1.name<<endl; 
// cout<<"Age = "<<h1.age<<endl; 
// cout<<"Sex = "<<h1.getSex()<<endl; 

//This is Dynamic way

Hero *h2 = new Hero;

cout<<"Name "<<(*h2).name<<endl; 
cout<<"Age = "<<(*h2).age<<endl; 
cout<<"Sex = "<<(*h2).getSex()<<endl; 




    return 0;
}