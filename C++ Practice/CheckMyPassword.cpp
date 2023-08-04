#include<iostream>

using namespace std;

int main (){
int pwd;
int mypwd;
cout<<"Set Your Password = ";
cin>>pwd;
cout<<"\n*** You have successfully saved your password. ***\n\n";

cout<<"Enter the Password to Login = ";
cin>>mypwd;

while(pwd>0){
    if(pwd != mypwd){
        cout<<"Ooops!!! Wrong Password. Please enter correct password = ";
        cin>>mypwd;
    }else{
        cout<<"\n*** Correct Password. Login Succsessfull. ***\n\n";
        break;
    }
}
    return 0;
}