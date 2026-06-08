#include <iostream>
#include "q-5-Vehicle.cpp"

int main()
{
    Vehicle *v1[2];

    Car c1;
    Bike b1;

    v1[0] = &c1;
    v1[1] = &b1;

    for (int i = 0; i < 2; i++)
    {
        v1[i]->startEngine();
        v1[i]->drive();
    }

    return 0;
}