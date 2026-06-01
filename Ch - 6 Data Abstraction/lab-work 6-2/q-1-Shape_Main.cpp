#include <iostream>
#include "q-1-Shape.cpp"

int main()
{
    Circle c1(8);
    Triangle t1(12, 8);
    Rectangle r1(7, 4);

    c1.calculate();
    t1.calculate();
    r1.calculate();

    return 0;
}