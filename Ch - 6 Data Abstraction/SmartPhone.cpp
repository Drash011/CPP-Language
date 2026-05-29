#include <iostream>
using namespace std;

// Abstract Class
// Interface
class SmartPhone
{
public:
    // pure virtual function
    virtual void calling() = 0;
    virtual void message() = 0;

    void termsAndCondition()
    {
        cout << endl
             << "Reacharged...." << endl;
    }
};

class Vivo : public SmartPhone
{
public:
    void calling()
    {
        cout << endl
             << "My Vivo phone is calling....." << endl;
    }

    void message()
    {
        cout << endl
             << "My Vivo phone is send message....." << endl;
    }
};