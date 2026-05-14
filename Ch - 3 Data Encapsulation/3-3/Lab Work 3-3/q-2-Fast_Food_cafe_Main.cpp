#include <iostream>
#include "q-2-Fast_Food_cafe.cpp"

using namespace std;

int main()
{
    int n;

    cout << "Enter Number of Cafes : ";
    cin >> n;

    FastFoodCafe cafe[n];

    cout << endl
         << "Cafe Details  << endl;

        for (int i = 0; i < n; i++)
    {
        cafe[i].display();
    }

    return 0;
}