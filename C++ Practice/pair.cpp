#include<iostream>

using namespace std;

//pair is use to maintain relation between two elements.

int main(){
//Initializing pair.
    pair<int, string> p;

//Declaration of pair.

    //p= make_pair(1215, "Akshay");       //Type - 1
    p={1215, "Akshay"};                   //Type - 2

    cout<<p.first<<" " <<p.second<<endl;

//We can also copy pair
    pair<int, string> p1=p;     
    p1.first = 100;             //This will not change the original value.

//We can also make referance of pair
    pair<int, string> &p2 = p;         //Taking address of p.
    p2.first = 100;                     //Now this will change the original value.

//We can also make array of pair
    pair<int, int> pArray[3];
    pArray[0] = {1,4};
    pArray[1] = {2,5};
    pArray[2] = {3,6};

    for(int i=0; i<=2; i++){            //To print array
        cout<<pArray[i].first<<" "<<pArray[i].second<<endl;
    }

//If i want to swap element of index 0 and 2 without loosing relation between elements.
    swap(pArray[0], pArray[2]);

    cout<<"After swaping pair = "<<endl;
    for(int i=0; i<=2; i++){            //To print array
        cout<<pArray[i].first<<" "<<pArray[i].second<<endl;
    }
//We can also take input from user.
    pair<int, string> a;
    cout<<"Enter two values = ";
    cin>>a.first;
    cin>>a.second;
    cout<<a.first<<" "<<a.second<<endl;

    return 0;
}