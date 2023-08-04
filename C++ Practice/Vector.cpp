#include <iostream>
#include <vector>
using namespace std;

//Vector is an Array witch we can change its size dynamically.
//If we have vector of size 5, and then if we want to increse size to 10 then,
//Vector creates another vector of size 10 and move copy all element to new memory allocation.
//And old vector will go to garbage collection.

void display(vector<int> &v){       //taking referance(&v) becouse we need original vector.
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //Declaring vector with its datatype.
    //Inside datatype we can put pair<int,int> also.
    vector<int> vec1;
    
    // vector<int> vec2(10, 7);
//Taking Input from user.
    int ele,size;
    cout<<"Enter the size of the vector = "<<endl;
    cin>>size;
    for (int i=0; i<size; i++){
        cout<< "Enter the ele to add in this vector = "<<endl;
        cin>>ele;
        vec1.push_back(ele);        //Adding element at the end of the vector. complexity = O(1)
    }
    // vec1.pop_back();     //To remove element from end.
    display(vec1);
    vector<int> :: iterator iter = vec1.end();
    vec1.insert(iter-2, 777);     //To insert element in vector.
    display(vec1);
    // display(vec2);
    return 0;
}