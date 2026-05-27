#include <iostream>
#include "q-2-method_overriding.cpp"

int main()
{
    T20Match t20;
    TestMatch test;

    t20.getTotalOvers();
    test.getTotalOvers();

    return 0;
}