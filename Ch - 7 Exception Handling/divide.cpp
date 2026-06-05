#include <iostream>
using namespace std;

int main()
{

    int a, b, ans;
    double x;
    string error = "Can Not Divide By ZERO";

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    try
    {
        if (b == 0)
        {
            throw error;
        }
        else
        {
            ans = a / b;
            throw x;
        }
    }
    catch (string e)
    {
        cout << endl
             << e << endl;
    }
    catch (int val)
    {
        cout << endl
             << "ANS: " << val << endl;
    }
    catch (...)
    {
        cout << endl
             << "General Exception" << endl;
    }
}