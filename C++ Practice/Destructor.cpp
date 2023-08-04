#include<iostream>
using namespace std;

/*
Destructor:-
    It is a special type of member function that is used to deallocate the memory,
    which was allocated by constructor.
    • to create destructor use '~' symbol at the front of class name.
    • Destructor destroys objects.
*/
int count=0;
class box{

    public:
    box(){                  //Contructor
        cout<<"Object "<<++count<<" Created."<<endl;
    }
    ~box(){                 //Destructor
        cout<<"Object "<<count--<<" Delected."<<endl;
    }
};
int main(){
    box obj1,obj2,obj3;     //purposely we created 3 objects to see order of constru & destru.
    return 0;
}