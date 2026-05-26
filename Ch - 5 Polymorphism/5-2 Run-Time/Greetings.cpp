#include <iostream>
using namespace std;

class Greeting
{
public:
    void greetings()
    {
        cout << endl
             << "Welcome to my City..." << endl;
    }
};

class WelcomeGreeting : public Greeting
{
public:
    void greetings()
    {
        cout << endl
             << "Welcome to Surat the Green and Clean City..." << endl;
        Greeting::greetings();
    }
};