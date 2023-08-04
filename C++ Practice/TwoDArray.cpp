#include <iostream>
using namespace std;

int main(){

    int s1,s2;
    cout<<"Enter Array Column Size : ";
    cin>>s1;
    cout<<"Enter Array Row Size : ";
    cin>>s2;

   int a[s1][s2];
   int i, j;

   cout<<"\nEnter Array Elements : \n";

   for(i=0; i<s1; i++){
    for(j=0; j<s2; j++){
        cin>>a[i][j];
    }
   }

   cout<<"\nYour 2D Array Elements:\n";
    
   for(i=0; i<s1; i++){
    for(j=0; j<s2; j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
   } 

}