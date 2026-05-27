#include <iostream>
#include "Unary.cpp"

int main()
{
    Unary u1, u2;

    u1.setData(); // u1 => a [22]

    // a = 10
    // a++ // a = a  + 1
    u2 = u1--; // u1.operator--(1)

    cout << endl;

    u1.getData(); // 22
    u2.getData(); // 21

    return 0;
}