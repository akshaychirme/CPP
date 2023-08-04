#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator ito;
    for(ito=lst.begin(); ito!=lst.end(); ito++){
        cout<<*ito<<" ";
    }
    cout<<endl;
};

int main(){

    list<int> list1;          //Empty List with size=0.
    list<int> list2(4);       //Empty List with size=4.

    //Inserting elements in list1.
    list1.push_back(501);
    list1.push_back(101);
    list1.push_back(401);
    list1.push_back(301);
    list1.push_back(201);

    //Inserting element in list2.

    list<int> :: iterator iter(list2.begin());
    *iter=30;
    iter++;
    *iter=40;
    iter++;
    *iter=10;
    iter++;
    *iter=20;
     

   display(list1);
//   list1.pop_back();          //Remove element from back of list.
//   display(list1);
//   list1.pop_front();         //Remove element from front of list.
//   display(list1);
//   list1.remove(301);         //Remove element from middle of list.
//   display(list1);
//   list1.sort();              //Sorting element of list.
//   cout<<"List1 after sorting = ";
//   display(list1);
//   list1.merge(list2);        //Merging list2 into list1.
//   cout<<"List1 after merging = ";
//   display(list1);
//   list1.reverse();           //Reversing the list1.
//   cout<<"Reverse list1 = ";
//   display(list1);

    display(list2);



    return 0;
}