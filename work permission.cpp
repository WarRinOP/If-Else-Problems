#include <iostream>
using namespace std;
int main()
{
    char gender, marriage;
    int age;
    cout << "What is your gender? (M/F onlyy!): ";
    cin >> gender;
    cout << "Are you married? (Y/N)\n";
    cin >> marriage;
    cout << "Enter Your Age: ";
    cin >> age;
    if (gender == 'M' && age >= 20 && age <= 40)
    {
        cout << "Male. You may work anywhere.";
    }
    else if (gender == 'M' && age >= 40 && age <= 60)
    {
        cout << "Male. You may work in urban areas only.";
    }
    else if (gender == 'F')
    {
        cout << "Female. You may work in urbana areas only.";
    }
    else
        cout << "ERROR!!";
}