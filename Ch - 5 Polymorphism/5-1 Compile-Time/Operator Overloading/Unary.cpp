#include <iostream>
using namespace std;

class Unary
{
private:
    int a;

public:
    void setData()
    {
        cout << "Enter a : ";
        cin >> this->a;
    }

    void getData()
    {
        cout << "A\t: " << this->a << endl;
    }

    Unary operator++(int n)
    {
        Unary obj;

        obj.a = this->a + 1;

        return obj;
    }

    Unary operator--(int n)
    {
        Unary obj;

        obj.a = this->a - 1;

        return obj;
    }
};