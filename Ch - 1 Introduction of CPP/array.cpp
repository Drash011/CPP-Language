#include <iostream>
using namespace std;

int main()
{

    int size;

    cout << "Enter size of Array :";
    cin >> size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter array elements : ";
        cin >> array[i];
    }

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }

    cout << endl;

    return 0;
}