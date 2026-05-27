#include <iostream>
#include "Binary.cpp"

int main()
{
    Operator o1, o2, o3;

    o1.setData(); // o1 =>  a [20]
    o2.setData(); // o2 =>  a [30]

    o3 = o1 + o2; // o3 = o1.operator+(o2)
    // o3 = o1 - o2; // o3 = o1.operator-(o2)
    // o3 = o1 * o2; // o3 = o1.operator*(o2)
    // o3 = o1 / o2; // o3 = o1.operator/(o2)

    // o3 => a [50]

    cout << endl;
    o1.getData(); // 20
    o2.getData(); // 30
    o3.getData(); // 50

    return 0;
}