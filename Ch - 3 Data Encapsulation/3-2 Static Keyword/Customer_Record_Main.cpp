#include <iostream>
#include "Customer_Record.cpp"
using namespace std;

int main()
{

    int size;

    cout << "Enter Number of Customers :";
    cin >> size;

    CustomarRecord c[size];

    cout << "Customer Data Input" << endl;
    for (int i = 0; i < size; i++)
    {
        c[i].setCustomarRecord();
    }

    for (int i = 0; i < size; i++)
    {
        c[i].getCustomarRecord();
    }

    return 0;
}