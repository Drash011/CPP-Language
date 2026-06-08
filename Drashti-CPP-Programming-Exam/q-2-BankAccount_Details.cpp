#include <iostream>
#include <string.h>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    float balance;
    char ownerName[50];

public:
    void setData()
    {
        cout << "Enter Account Number: ";
        cin >> this->accountNumber;

        cout << "Enter Balance: ";
        cin >> this->balance;

        fflush(stdin);
        cout << "Enter Owner Name: ";
        gets(this->ownerName);
    }

    void creditamount()
    {
       float amount;

        cout << "Enter Credit Amount: ";
        cin >> amount;

        balance = balance + amount;
    }

    void debitamount()
    {
         float amount;

        cout << "Enter Debit Amount: ";
        cin >> amount;

        if (amount <= balance)
            balance = balance - amount;
        else
            cout << "Insufficient Balance" << endl;
    }

    void displayBalance()
    {
        cout << endl
             << "Account Number : " << accountNumber << endl;
        cout << "Owner Name       : " << ownerName << endl;
        cout << "Balance          : " << balance << endl;
    }
};