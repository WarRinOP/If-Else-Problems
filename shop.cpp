#include<iostream>
using namespace std;
int main()
{
    int quantity,cost;
    cout<<"Enter Quantity: ";
    cin>> quantity;
    if(quantity>1000)
     {
    cost= (quantity*100)-(quantity*100*0.1);
    cout<<"Total cost is: "<< cost <<" You got a discount of " <<quantity*100*0.1 <<" taka!";
     }
     else{
        cost= quantity*100;
        cout<<"Total cost is: "<<cost;
     }

    }