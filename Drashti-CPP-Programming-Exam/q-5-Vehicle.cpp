#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void startEngine() = 0;
    virtual void drive() = 0;
};

class Car : public Vehicle
{
public:
    void startEngine()
    {
        cout << "Car Engine Started" << endl;
    }

    void drive()
    {
        cout << "Car is Driving" << endl;
    }
};

class Bike : public Vehicle
{
public:
    void startEngine()
    {
        cout << "Bike Engine Started" << endl;
    }

    void drive()
    {
        cout << "Bike is Driving" << endl;
    }
};
