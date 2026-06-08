#include <iostream>
#include "q-3-Shape.cpp"

int main()
{
    char red[] = "Red";
    char blue[] = "Blue";

    Circle c1;
    c1.setColor(red);
    c1.setRadius(5);
    c1.calculateArea();

    cout << "Circle Details" << endl;
    c1.displayColor();
    c1.displayArea();

    cout << endl;

    Rectangle r1;
    r1.setColor(blue);
    r1.setData(10, 5);
    r1.calculateArea();

    cout << "Rectangle Details" << endl;
    r1.displayColor();
    r1.displayArea();

    return 0;
}