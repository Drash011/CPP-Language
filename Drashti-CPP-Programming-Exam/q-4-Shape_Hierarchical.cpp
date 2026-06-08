#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void displayDetails()
    {
        cout << "Shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void displayDetails()
    {
        cout << "This is Circle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void displayDetails()
    {
        cout << "This is Rectangle" << endl;
    }
};
