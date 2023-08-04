#include<iostream>
#include<vector>

using namespace std;

/*
Iterators are used to point at the memory addresses of STL containers.
Iterator is like a pointer.
They reduce the complexity and execution time of the program.
Iterator has 2 function :-
     begin():- This return the begining or start of the container.
     end()  :- This return the after end of the container.
In Iterator it++ ---> means Next iterator. (Can work in non-consecutive values.)
        and it+1 ---> means Next location. (Cannot work in Non-consecutive values.
                                            It will go to the next location not on next value.)
*/
int main(){
//Defining vector.
    vector<int> vec = {1,2,3,4,5,6};
//Printing vector.
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    vector<int> :: iterator it = vec.begin();
    for(it=vec.begin(); it!=vec.end(); it++){
        cout<<(*it)<<" ";
    }

//In the case of pair we can also write cout like this:-
//We can write in this type:-       cout<<(*it).first<<" "<<(*it).second;
//And this is also another type to write :-         cout<<(it->first)<<" "<<(it->second);
return 0;
}