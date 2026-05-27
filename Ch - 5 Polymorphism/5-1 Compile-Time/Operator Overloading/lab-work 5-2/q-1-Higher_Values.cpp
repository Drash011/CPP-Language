#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    void setData()
    {
        cout << "Enter Number : ";
        cin >> this->num;
    }

    void operator<(Number obj)
    {
        if (this->num < obj.num)
        {
            cout << endl
                 << obj.num << " is Higher Value" << endl;
        }
        else if (num > obj.num)
        {
            cout << endl
                 << this->num << " is Higher Value" << endl
                 << endl;
        }
        else
        {
            cout << "Both Numbers are Equal" << endl
                 << endl;
        }
    }
};