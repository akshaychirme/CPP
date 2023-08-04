#include<iostream>
using namespace std;

/*
Pointer:-
    • Pointer is a variable that will hold address of an another variable.
    • To work with pointer we need two unary operators.
        - & is a address of operator.
        - * value at operator. (jya * kad konacha & address ahe tyachi value tyat yete.)
*/
int main(){
    int a = 10;
    int *b = &a;
    int **c = &b;

    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<*b<<endl;
    //** address of address
    cout<<c<<endl;
    cout<<**c<<endl;    //'a' chi value *b kade ahe ani *b madhe ji value ahe ti **c madhe ahe.
                        //mhanjech 'a' chi value **c madhe ahe.


    return 0;
}