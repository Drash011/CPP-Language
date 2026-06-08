#include <iostream>
#include <cstring>
using namespace std;

class Shape
{
private:
    char color[20];
    float area;

public:
    void setColor(char c[])
    {
        strcpy(color, c);
    }

    void displayColor()
    {
        cout << "Color: " << color << endl;
    }

    void setArea(float a)
    {
        area = a;
    }

    void displayArea()
    {
        cout << "Area: " << area << endl;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    void setRadius(float r)
    {
        radius = r;
    }

    void calculateArea()
    {
        setArea(3.14 * radius * radius);
    }
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    void setData(float l, float w)
    {
        length = l;
        width = w;
    }

    void calculateArea()
    {
        setArea(length * width);
    }
};