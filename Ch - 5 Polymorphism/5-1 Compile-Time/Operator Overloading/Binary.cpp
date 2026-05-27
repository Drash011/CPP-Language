#include <iostream>
using namespace std;

class Operator
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

    Operator operator+(Operator obj)
    {
        Operator demo; // demo => a [50]

        demo.a = this->a + obj.a;

        return demo;
    }

    Operator operator-(Operator obj)
    {
        Operator demo; // demo => a [50]

        demo.a = this->a - obj.a;

        return demo;
    }

    Operator operator*(Operator obj)
    {
        Operator demo; // demo => a [50]

        demo.a = this->a * obj.a;

        return demo;
    }

    Operator operator/(Operator obj)
    {
        Operator demo; // demo => a [50]

        demo.a = this->a / obj.a;

        return demo;
    }
};
