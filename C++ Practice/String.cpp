#include<iostream>
#include<string.h>   //To use string pre-defined functions we have to include <string.h> header file.
using namespace std;

/*
String:-
    • String is a one-dimensional array of characters terminated by null characters.

*/
int main(){

    // char name[]="Akshay";
    // cout<<name<<endl;

    // To find Length of string---------------------------

    // int size=strlen(name);
    // cout<<size<<endl;


    //To Reverse the string--------------------------------

    // strrev(name);
    // cout<<name<<endl;


    //To Join or Concatinate string------------------------

    // char name2[]=" Chirme";
    // strcat(name, name2);
    // cout<<name<<endl;

    //To copy string from 1 to another string----------------

    // char empty[10];
    // strcpy(empty,name);
    // cout<<empty<<endl;

    //To make string in UPPER case----------------------------

    // strupr(empty);
    // cout<<empty<<endl;

    //To make string in LOWER case-----------------------------

    // strlwr(empty);
    // cout<<empty<<endl;

    // string a="Akshay chirme";
    // cout<<a;

    //String input form user-------------------------------------

    string x;
    cout<<"Enter the sentence = ";
    getline(cin,x);
    cout<<x;

    return 0;
}