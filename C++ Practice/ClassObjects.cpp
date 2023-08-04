#include<iostream>
using namespace std;

class shop{
    int itemID[20];
    int itemPrice[20];
    int count;

    public:
    void initcount(void){
        count = 0;
        }
    void displayPrice(void);
    void setPrice(void);
};

void shop :: setPrice(void){
    cout<<"Enter Id of Item = "<<count+1<<endl;
    cin>>itemID[count];

    cout<<"Enter Price of Item = "<<endl;
    cin>>itemPrice[count];

    count++;
}

void shop :: displayPrice(void){
    for (int i = 0; i<count; i++){
        cout<<"The Price of item no "<< count+1<<" with ID "<<itemID[i]<<" is Rs/- "<<itemPrice[i]<<endl;
    }
}

int main(){ 
    
    shop dukan;
    dukan.initcount();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}