#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){

map<string, int> marks; 
marks["Akshay"]=99;
marks["Omkar"]=78;
marks["Shubham"]=65;
marks["Radhika"]=45;

marks.insert({{"Gotya", 32},{"Motya", 49}});
map<string, int> :: iterator iter;
for(iter=marks.begin(); iter!=marks.end(); iter++){
    cout<<(*iter).first<<" = "<<(*iter).second<<"\n";
}
    return 0;
}