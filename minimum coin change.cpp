#include<iostream>
using namespace std;
int main(){
    float price,paid,change;
    int x1=0,c75=0,c5=0,c25=0,c1=0;
    cout<<"Enter total price: ";
    cin>>price;
    cout<<"Enter Paid amount: ";
    cin>>paid;
    change=(paid-price);
    cout<<"Your change is "<<change<<endl;
    while(change>=1){
        change-=1;
        x1++;
    }
    while(change>=0.75){
        change-=0.75;
        c75++;
    }
    while(change>=0.5){
        change-=0.5;
        c5++;
    }
    while(change>=0.25){
        change-=0.25;
        c25++;
    }
    while(change>=0.01){
        change-=0.01;
        c1++;
    }
    cout<<"1$-- "<<x1<<endl
    <<"0.75$-- "<<c75<<endl<<"0.5$-- "<<c5<<endl<<"0.25$-- "<<c25<<endl
    <<"0.01$-- "<<c1<<endl;
}