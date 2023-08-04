#include<iostream>
//harry
using namespace std;

/*
Default Argument:-
    • It means the default values assigned to the function parameters.
    • Always write the default argument in the extream right side of parameters.
    • And normal argument in the left side of parameter.
*/
float moneyReci(int currentMoney, float factor=1.04){
    return currentMoney*factor;
}

int main(){
int money;
cout<<"Enter Money = ";
cin>>money;

cout<<"Money Received = "<<moneyReci(money) <<endl;     //Default argument ahe mhanun ekach value pass keli tari chalti.
cout<<"Money Received = "<<moneyReci(money, 1.08) <<endl;   //Default argument chya jagevar dusri value sudhha pass karu shkto. 
    return 0;
}