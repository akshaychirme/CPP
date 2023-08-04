#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

ofstream myout("demo2.txt");   //connecting our file with myline stream.
string myname;      //creating a string and filling it eith a string getting from user.
cout<<"Enter your name = ";
cin>>myname;

myout<<"My name is "+ myname +".";     //writing a string into the file.
myout.close();         //closeing the access of file.


ifstream myin("demo2.txt");
string content;
// myin>>content;
getline(myin, content);
cout<<"The content of file is = "<<content;

    return 0;
}