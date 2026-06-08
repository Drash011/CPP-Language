#include <iostream>
using namespace std;

class Laptop
{
private:
    string name;
    float price;
    string processor;

public:
    Laptop(string name, float price, string processor)
    {
        int i;

        this->name = name;
        this->price = price;
        this->processor = processor;
    }

    void display()
    {
        cout << endl
             << "----------------------------------" << endl;
        cout << "Name      \t: " << this->name << endl;
        cout << "Price     \t: " << this->price << endl;
        cout << "Processor \t: " << this->processor << endl
             << endl;
    }
};