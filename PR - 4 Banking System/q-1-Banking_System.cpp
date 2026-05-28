#include <iostream>
#include <string.h>
using namespace std;

class BankAccount
{
protected:
    int accountNumber;
    char accountHolderName[50];
    double balance;

public:
    void createAccount()
    {
        cout << endl
             << "Enter Account Number : ";
        cin >> this->accountNumber;

        fflush(stdin);  
        cout << "Enter Account Holder Name : ";
        gets(this->accountHolderName);

        cout << "Enter Balance : ";
        cin >> this->balance;
    }

    void deposit(double amount)
    {
        this->balance = balance + amount;

        cout << endl
             << "Amount Deposited Successfullt... " << endl;
    }

    void withdraw(double amount)
    {
        if (amount <= this->balance)
        {
            this->balance = this->balance - amount;

            cout << endl
                 << "Withdraw Successful..." << endl;
        }
        else
        {
            cout << "Withdraw Unsuccessfull..." << endl;
        }
    }

    double getBalance()
    {
        return this->balance;
    }

    void displayAccountInfo()
    {
        cout << endl
             << endl;
        cout << "Account Number     \t:" << this->accountNumber << endl;
        cout << "Account Holder Name\t:" << this->accountHolderName << endl;
        cout << "Balance            \t:" << this->balance << endl;
    }
};

class SavingsAccount : public BankAccount
{
protected:
    double interestRate;

public:
    void createSavingsAccount()
    {
        createAccount();

        cout << endl
             << "Enter Interest Rate :";
        cin >> this->interestRate;
    }

    void calculateInterest()
    {
        double interest;

        interest = (balance * this->interestRate) / 100;

        cout << endl
             << "Interest      \t: " << interest << endl;
        cout << "Total Balance \t: " << balance + interest << endl;
    }
};

class CheckingAccount : public BankAccount
{
protected:
    int overdraftLimit;

public:
    void createCheckingAccount()
    {
        createAccount();

        cout << endl
             << "Enter Overdraft Limit :";
        cin >> this->overdraftLimit;
    }

    void checkOverdraft(double amount)
    {
        if (amount <= balance + this->overdraftLimit)
        {
            balance = balance - amount;

            cout << endl
                 << "Withdraw Successfull..." << endl;
        }
        else
        {
            cout << "Overdraft Limit Exceeded..." << endl;
        }
    }
};

class FixedDepositAccount : public BankAccount
{
protected:
    int term;
    double intrestRate;

public:
    void createFDAccount()
    {
        createAccount();

        cout << endl
             << "Enter FD Term (Months) : ";
        cin >> this->term;

        cout << endl
             << "Enter Interest Rate : ";
        cin >> this->intrestRate;
    }

    void checkOvecalculateInterest()
    {
        double interest;

        interest = (balance * this->intrestRate * this->term) / (100 * 12);

        cout << endl
             << "FD Interest  : " << interest << endl;
        cout << "Total Amount : " << balance + interest << endl;
    }
};