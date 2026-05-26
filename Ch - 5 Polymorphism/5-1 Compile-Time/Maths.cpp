#include <iostream>
using namespace std;

class Math
{
public:
    void sum(int a)
    {
        cout << endl
             << "Sum 1\t: " << a << endl;
    }

    void sum(int x, int y)
    {
        cout << endl
             << "Sum 2\t: " << x + y << endl;
    }

    void sum(int p, int q, int r)
    {
        cout << endl
             << "Sum 3\t: " << p + q + r << endl;
    }
};