#include<iostream>
#include<vector>

using namespace std;

int main(){
//Simple way to print/access Vector Using for loop.
vector<int> vec1 = {1,2,3,4,5};
for(int i=0; i<vec1.size(); i++){
    cout<<vec1[i]<<" ";
}
cout<<endl;
//Using Iterator we can access vector.
vector<int> :: iterator it;
for(it=vec1.begin();it!=vec1.end(); it++){
    cout<<(*it)<<" ";
}
cout<<endl;
//Using range based Loops.
//In Range based Loops elements get copied to value.
//To get actual elements in value we can use '&value'.
for(int value : vec1){
    cout<<value<<" ";
}
cout<<endl;

//auto


    return 0;
}