#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void calculate() = 0;
};

class Circle : public Shape
{
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void calculate()
    {
        cout << endl
             << "Area of Circle\t\t: " << 3.14 * radius * radius << endl;
    }
};

class Triangle : public Shape
{
    float base, height;

public:
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }

    void calculate()
    {
        cout << endl
             << "Area of Triangle\t: " << 0.5 * base * height << endl;
    }
};

class Rectangle : public Shape
{
    float length, width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    void calculate()
    {
        cout << endl
             << "Area of Rectangle\t: " << length * width << endl
             << endl;
    }
};