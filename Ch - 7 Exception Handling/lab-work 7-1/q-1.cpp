#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int a, b, age;
    string password;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    try
    {
        if (b == 0)
        {
            throw string("Can Not Divide By ZERO");
        }
        else
        {
            throw a / b;
        }
    }
    catch (string e)
    {
        cout << endl
             << e << endl;
    }
    catch (int ans)
    {
        cout << endl
             << "ANS: " << ans << endl;
    }

    cout << endl
         << "Enter Age: ";
    cin >> age;

    try
    {
        if (age < 18)
        {
            throw string("Not Eligible For Voting");
        }
        else
        {
            throw age;
        }
    }
    catch (string e)
    {
        cout << endl
             << e << endl;
    }
    catch (int)
    {
        cout << endl
             << "Eligible For Voting" << endl;
    }

    cout << endl
         << "Enter Password: ";
    cin >> password;

    try
    {
        int flag = 0;

        for (int i = 0; i < password.length(); i++)
        {
            if (password[i] >= 'A' && password[i] <= 'Z')
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            throw string("Password Must Contain At Least One Uppercase Letter");
        }
        else
        {
            throw password;
        }
    }
    catch (string e)
    {
        if (e == "Password Must Contain At Least One Uppercase Letter")
            cout << endl
                 << e << endl;
        else
            cout << endl
                 << "Password Valid" << endl;
    }

    return 0;
}