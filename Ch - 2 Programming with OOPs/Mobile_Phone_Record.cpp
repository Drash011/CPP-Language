#include <iostream>
using namespace std;

class MobilePhoneRecord {
    private:
    int mobile_id;
    string brand;
    string model;
    float price;

    public:
    void setMobileRecord ()
    {
        cout << endl << endl;

        cout << "Enter Mobile ID :";
        cin >> mobile_id;

        cout << "Enter Mobile Brand :";
        cin >> brand;

        cout << "Enter Mobile Model :";
        cin >> model;

        cout << "Enter Mobile Price :";
        cin >> price;
    }

    void getMobileRecord ()
    {
        cout << endl << endl;

        cout << "Mobile ID :" << mobile_id << endl;
        cout << "Mobile Brand :" << brand << endl;
        cout << "Mobile Model :" << model << endl;
        cout << "Mobile Price :" << price << endl;

        cout << endl;
    }
};