#include <iostream>
using namespace std;

/*
Jumping Statements:-
    1) break
    2) continue
    3) goto
    4) exit
    5) return
*/

int main()
{
    // 1) break; statement-------------------------------------
    int num1 = 10;

    // for (int i = 1; i <= num1; i++)
    // {
    //     if (i == 8)
    //         break;           //after 8 loop will be outof block {} and loop will exit.
    //         cout << i << " ";
    // }

    // 2) continue; statement-------------------------------------
        // •We cannot use continue jump statment in Switch.

    // for(int i = 1; i<=10; i++){
    //     if(i==5)                //only 5 will not print
    //     continue;
    //     cout<<i<<" ";
    // }

    // 3) goto and return statement-------------------------------------
    //    • goto is just a lable.

        int num2 = 11;
        if (num2 == 10)
            goto handsome;
        else
            goto nothandsome;

    handsome:
        cout << "He was born handsome so she said Yess..." << endl;
        return 0;
    nothandsome:
        cout << "He is not Handsome thats why she reject him." << endl;

        cout<<"Based on true story."<<endl;

    // exit statement-------------------------------------
    // • 'break' will throw out of that block BUT 'exit' will throw out of program.

    // cout << "Akshay" << endl;
    // cout << "Shubham" << endl;
    // exit(0);
    // cout << "Omkar" << endl;
    // cout << "Radhika" << endl;

    return 0;
}