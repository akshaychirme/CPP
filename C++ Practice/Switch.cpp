#include<iostream>

using namespace std;

int main(){

// int num;
// cout<<"Enter your choice between 1 to 7 = ";
// cin>>num;

// switch(num){
//     case 1:cout<<"Monday";break;
//     case 2:cout<<"Tuesday";break;
//     case 3:cout<<"Wednesday";break;
//     case 4:cout<<"Thrusday";break;
//     case 5:cout<<"Friday";break;
//     case 6:cout<<"Saturday";break;
//     case 7:cout<<"Sunday";break;
//     default:cout<<"Please enter number between 1 to 7 only.";
// }


//Calculater-----------------------------

char operant;
int num1, num2;

cout<<"Enter first number = ";
cin>>num1;
cout<<"Enter the operation you want to do = ";
cin>>operant;
cout<<"Enter second number = ";
cin>>num2;

switch(operant){
case '+':cout<<"Addition of "<<num1<<" "<<operant<<" "<<num2<<" is = "<<num1+num2;break;
case '-':cout<<"Subtraction of "<<num1<<" "<<operant<<" "<<num2<<" is = "<<num1-num2;break;
case '*':cout<<"Multiplication of "<<num1<<" "<<operant<<" "<<num2<<" is = "<<num1*num2;break;
case '/':cout<<"Divition of "<<num1<<" "<<operant<<" "<<num2<<" is = "<<(num1/num2);break;
default:cout<<"Wrong Input";
}



    return 0;
}