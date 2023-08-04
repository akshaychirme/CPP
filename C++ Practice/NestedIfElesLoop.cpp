#include<iostream>

using namespace std;

int main(){

int age;
cout<<"Enter the age = ";
cin>> age;

if(age>=18){
    if(age>=18 && age<=40){
        cout<<"You can give Government Exams.";
    }else{
        cout<<"You are too old to give Government Exams.";
    }
}else{
    cout<<"You are kid. You need to grow up little big kido.";
}
    return 0;
}