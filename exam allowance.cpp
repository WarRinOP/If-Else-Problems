#include<iostream>
using namespace std;
int main()
{
    float held,attend,j;
    int k;
    cout<< "Enter  total class number: ";
    cin>>held;
    cout<<"Enter attended class: ";
    cin>>attend;

    if(attend>=(held*0.75))
    {
    cout<<"Eligable to sit for the exam, your attendence is: "<<(attend/held)*100 << "%"; 
    }
    else {
    j= 0.75*held;
    k=(j-attend)+1; // Minimum Number of classes needed to attend for eligibility 
    cout<<"Not eligable to sit for the exam, your attendence is: " <<(attend/held)*100 << "%." 
    <<" You should have attended atleast " << k <<" classes more";
    }
}