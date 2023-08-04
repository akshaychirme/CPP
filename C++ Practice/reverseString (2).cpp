#include <iostream>
using namespace std;

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string str;
        int size = S.length();
        int position;
        for(int i = size-1; i>=0; i--){
            if(S[i] =='.'){
                position=size-i;
                size=i-1;
                str.append(S.substr(i+1, position));
                str.append(".");
            }
        }
     str.append(S.substr(0,size+1));
     return str;
    }
};
int main(){

string S ="Akshay.Chirme.Pune.Maharashtra.India";
Solution obj;

string sentence = obj.reverseWords(S);
cout<<sentence<<endl;
    return 0;
}