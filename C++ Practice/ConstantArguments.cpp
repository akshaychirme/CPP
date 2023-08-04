#include<iostream>
//https://www.youtube.com/watch?v=pqyRfcvSMqY
using namespace std;

/*
Constant Argument:-
    
    • Argument value which we dont want to change accidentlly.
*/
float Acircle(int r, const float pi= 3.14 ){
    //Here I don't want anybody to change 'pi' value thats why I have created it const.
    //pi=3.11;  //This will create error because of const.
    float ans = pi * (r*r);
    return ans;
}
int main(){
int radius;
cout<<"Insert Radius = ";
cin>>radius;
cout<<"Area of circle is = "<<Acircle(radius, 3.11)<<endl;
    return 0;
}