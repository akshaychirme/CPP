#include<iostream>
#include<vector>
//YT-Luv
using namespace std;

//In vector of vectors, number of rows are not fixed, we can change it dynamically.
//Parent vector size is not fixed, it is dynamic.
//In Vector of Arrays this parent vector size was fixed we cannot change it dynamically.
//All rows and columns will be dynamic.

void display(vector<int> &vec){
    cout<<"Size for the vector = "<<vec.size()<<endl;
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

int main(){
//Taking size of parent vector as input from user.
//(1) Parent vector--->
int size1;
cout<<"Enter the size of the parent vector = ";
cin>>size1;
vector<vector<int>> vec;
//(2) Child Vector --->
for(int i=0; i<size1;i++){
    int size2;
    cout<<"Enter the size of child vector = ";
    cin>>size2;
//Creating temporary vector becouse we dont have any predefine vector.(like predefine vector size.)
    vector<int> temp;
    for(int i = 0; i<size2; i++){
        int a;
        cout<<"Enter the elements for child vector = ";
        cin>>a;
        temp.push_back(a);
    }
//Now we have created our child vector. Now its time to put it in Parent Vector as a row.
    vec.push_back(temp);
    }
//Calling display function.
    for(int i=0; i<vec.size(); i++){
        display(vec[i]);
}
    return 0;
}