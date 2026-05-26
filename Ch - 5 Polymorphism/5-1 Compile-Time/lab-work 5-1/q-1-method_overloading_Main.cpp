#include <iostream>
#include "q-1-method_overloading.cpp"

int main()
{
    MathCalculation m1;

    m1.calculate(85, 5);
    m1.calculate(198, 95, 45);
    m1.calculate(8, 6, 5, 4);
    m1.calculate(150, 160, 170, 180, 190);

    return 0;
}