#include <iostream>
#include "q-4-Shape_Hierarchical.cpp"

int main()
{
    Shape *s1[2];

    Circle c1;
    Rectangle r1;

    s1[0] = &c1;
    s1[1] = &r1;

    for (int i = 0; i < 2; i++)
    {
        s1[i]->displayDetails();
    }

    return 0;
}