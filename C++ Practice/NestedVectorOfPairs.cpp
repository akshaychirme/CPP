#include<iostream>
#include<vector>
using namespace std;

//Nested Vector is Vector of Vector.
//It's like an 2D array.

void display(vector<pair<int, int>> &nv){
    cout<< "size = "<<nv.size()<<endl;
    for(int i =0; i<nv.size(); i++){
        cout<<nv[i].first<<" "<<nv[i].second<<endl;
    }
    cout<<endl;
}

//Vector of pairs--------------->
int main(){

//Taking Static Values.
vector<pair<int, int>> nv = {{1,2}, {3,4}, {5,6}};
display(nv); 

//Taking Values from User.
int size;
cout<<"Enter the size = ";
cin>>size;

for(int i = 0; i<size; i++){
    int a,b;
    cin>>a>>b;
    nv.push_back({a,b});
}
display(nv);

    return 0;
}