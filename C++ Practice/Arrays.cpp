#include<iostream>
using namespace std;

/*
Array:-
    • Array is a derived datatype which is constructed by the help of "Primitive datatype".
    • It stores muliple values in single variable with continous memory location.
Types of array:-
    • 1D Array
    • 2D Array
*/
int main(){

    //1D Array:-

    // int box[] = {1,2,3,4,5};
    // // box[2] = 777;        //To insert any value at specific index.
    // // cout<<box[2]<<endl;  //To print value at any index.

    // for(int i = 0; i<5; i++){
    //     cout<<box[i]<<" ";
    // }

    //2D Array:-
    int box1[3][3], i,j;
    cout<<"Enter the elements = ";
    for(i=0; i<3; i++){
        for(j=0; j<3;j++){
            cin>>box1[i][j];
        }
    }

    for(i=0;i<3;i++){
        cout<<"|";
        for(j=0;j<3;j++){
            
            cout<<" "<<box1[i][j]<<" ";
        }
        cout<<"|"<<endl;
    }

    return 0;
}