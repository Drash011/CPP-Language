#include <iostream>
using namespace std;

class Restaurant_order
{
private:
    int order_id;
    string item_name;
    int quantity;
    float price;

public:
    void setRestaurantorder()
    {
        cout << endl
             << endl;

        cout << "Enter Restaurant Order ID :";
        cin >> order_id;

        cout << "Enter Restaurant Order Item Name :";
        cin >> item_name;

        cout << "Enter Restaurant Order Quantity :";
        cin >> quantity;

        cout << "Enter Restaurant Order Price :";
        cin >> price;
    }

    void getRestaurantorder()
    {
        cout << endl
             << endl;

        cout << "Restaurant Order ID :" << order_id << endl;
        cout << "Restaurant Order Item Name :" << item_name << endl;
        cout << "Restaurant Order Quantity :" << quantity << endl;
        cout << "Restaurant Order Price :" << price << endl;

        cout << endl;
    }
};