#include <iostream>
#include "q-1-Parameterized_Constructor.cpp"

int main()
{
    Laptop l1("HP", 50000, "i5");
    Laptop l2("Dell", 60000, "i7");

    l1.display();
    l2.display();

    return 0;
}