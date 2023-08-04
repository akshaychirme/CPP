#include<iostream>
#include<fstream>
using namespace std;

/*
File Handling:-
    • File Handling is a mechanism that we can store the output of the program
      in the file and we can perform many operations in the data present in a file.
    • Generally file data is store in RAM, and RAM is an voletile memory as soon as 
      program ends memory will will be deleted. So to store data permanantly in 
      secondary storage we use File Handling.
File Operations:-
    • Create (ofstream)
    • Write (ofstream)
    • read (ifstream)
*/
int main(){
    //To create a file in secondary storage------------------------------
    //here 'myfile' is an object.
    //File location(url) with double back slash.

    // ofstream myfile("D:\\JS\\C++\\FileHandeling.txt");

    //To Write a file-----------------------------------------------------

    // myfile<<"Omkar Mali."<<endl<<"Shubham Abnave."<<endl<<"Radhika Kolap."<<endl<<"Akshay Chirme.";
    
    //To read the content from file---------------------------------------

    string filo;        //Taking string type variable because file content is of string type.
    ifstream myfile("D:\\JS\\C++\\FileHandeling.txt");
    while(getline(myfile,filo)){       //getline helps to read content line-by-line.
        cout<<filo<<endl;              //Printing that content.('myfile' cha content 'filo' madhe ala)
    };

    //Every time after working on file we have to close it----------------

    myfile.close();
    
    //To
    
    return 0;
}