#include <iostream>
using namespace std;

int main()
{

    int size;

    cout << "Enter size of array : ";
    cin >> size;

    int a[size];

    cout << endl;
    
    cout << "Enter array elements : ";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl;
    
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0) 
        cout << a[i] << "\t";
    }

    return 0;
}