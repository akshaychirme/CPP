#include<iostream>
#include<vector>
//YT-Luv
using namespace std;

//Nested Vector Of Arrays------------------------->
//In this number of Rows of vector is fixed. You cannot extend afterwards.
//But Vector of Vector has overcome on this and it can change the size of rows.
void display(vector<int> &vec){
for(int i=0; i<vec.size(); i++ ){
    cout<<vec[i];
}
    cout<<endl;
}

int main(){
//Taking size of vector form user.
//This size means how many number of vectors will be add in parent vector.
int size;
cout<<"Enter the size of vector array = ";         //This is where we fixed parent vector size or Rows.
cin>>size;
//Defining parent vector.
vector<int> vec[size];

//Now we have to add array of vector in i position.
//For that first we need to take size of each vector.
for(int i=0; i<size; i++){
    int ssize;
    cout<<"Enter the size of one vector from vector of array = ";
    cin>>ssize;

//Now taking input for every single vector.
    for(int j=0; j<ssize; j++){
        int x;
        cin>> x;
        //here for every position of single vector we will add element.
        vec[i].push_back(x);        
    }
    for(int i=0; i<size; i++){
        display(vec[i]);
    }
}
    return 0;
}