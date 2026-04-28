#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNo;
    int pin;
    string holderName;
    string accountType;
    string branch;
    double balance;
    double deposit;
    double withdraw;

public:
    void setAccount()
    {
        cout << endl
             << endl;

        cout << "Enter Account Number :";
        cin >> accountNo;

        cout << "Enter Account Pin :";
        cin >> pin;

        cout << "Enter Account Holder Name :";
        cin >> holderName;

        cout << "Enter Account Account Type :";
        cin >> accountType;

        cout << "Enter Account Branch :";
        cin >> branch;

        cout << "Enter Account Balance :";
        cin >> balance;

        cout << "Enter Account Deposit :";
        cin >> deposit;

        cout << "Enter Account Withdraw :";
        cin >> withdraw;
    }

    void getAccount()
    {
        cout << endl
             << endl;

        cout << "Enter Account Number :" << accountNo << endl;
        cout << "Enter Account Pin :" << pin << endl;
        cout << "Enter Account Holder Name :" << holderName << endl;
        cout << "Enter Account Account Type :" << accountType << endl;
        cout << "Enter Account Branch :" << branch << endl;
        cout << "Enter Account Balance :" << balance << endl;
        cout << "Enter Account Deposit :" << deposit << endl;
        cout << "Enter Account Withdraw :" << withdraw << endl;

        cout << endl;
    }
};