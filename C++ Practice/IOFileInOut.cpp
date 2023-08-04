#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // string st ="Akshay the boss.";
    // //opening file using contructor and writing in it
    // ofstream out("demo.txt");  // write operation
    // out<<st;

    string st2;
    //opeing file using constructor and Reading it
    ifstream in("demo.txt");  //hya file madhun mala read karaychay
    //in>>st2;   //file madhla content strng st2 madhe anla pan, space yet nahi.
    getline(in, st2);    // ata file madhla purn content read hoil including space
     cout<<st2;          
    getline(in, st2);   //(pan fakt ekach line yeil. dusrya lines print karaychya stil tar titkya vela getline() taka)
    cout<<st2;  //st2 madhla content console la print karaycha.


    return 0;
}