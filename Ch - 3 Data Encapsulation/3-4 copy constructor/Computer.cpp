#include <iostream>
using namespace std;

class Computer
{
private:
    double storage;
    int ram;
    string processer;

public:
    // Default Constructor
    // Computer()
    // {
    //     cout << "Default Constructor" << endl;
    //     this->storage = 0;
    //     this->ram = 0;
    //     this->processer = "";
    // }

    // Parameterized Constructor
    Computer(double storage, int ram, string processer)
    {
        this->storage = storage;
        this->ram = ram;
        this->processer = processer;
    }

    // Deep Copy Constructor
    Computer(Computer &obj) 
    {
        this->storage = obj.storage;
        this->ram = obj.ram;
        this->processer = obj.processer;
    }

    // Destructor
    ~Computer ()
    {
        cout << "LET'S FINISH WORK HERE..." << endl;
    }

    // Method
    void getComputerData()
    {
        cout << "Storage : " << this->storage << endl;
        cout << "Ram : " << this->ram << endl;
        cout << "Processer: " << this->processer << endl
             << endl;
    }
};