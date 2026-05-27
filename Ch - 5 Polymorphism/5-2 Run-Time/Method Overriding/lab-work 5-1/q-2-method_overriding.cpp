#include <iostream>
using namespace std;

class Cricket
{
public:
    void getTotalOvers()
    {
        cout << endl
             << "--- Total Overs in Cricket Match ---" << endl;
    }
};

class T20Match : public Cricket
{
public:
    void getTotalOvers()
    {
        Cricket::getTotalOvers();
        cout << endl
             << "Total Overs in T20 Match\t: 20 Overs" << endl;
    }
};

class TestMatch : public Cricket
{
public:
    void getTotalOvers()
    {
        cout << endl
             << "Total Overs in Test Match\t: 90 Overs" << endl
             << endl;
    }
};