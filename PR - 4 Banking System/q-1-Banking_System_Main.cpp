#include <iostream>
#include "q-1-Banking_System.cpp"

int main()
{
    SavingsAccount s1;
    CheckingAccount c1;
    FixedDepositAccount f1;

    int choice, transactionChoice;
    double amount;

    do
    {
        cout << endl;
        cout << "========== Banking System ==========" << endl;
        cout << "1. Savings Account" << endl;
        cout << "2. Checking Account" << endl;
        cout << "3. Fixed Deposit Account" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            s1.createSavingsAccount();

            do
            {
                cout << endl;
                cout << "===== Savings Account Menu =====" << endl;
                cout << "1. Deposit" << endl;
                cout << "2. Withdraw" << endl;
                cout << "3. Current Balance" << endl;
                cout << "4. Display Account Info" << endl;
                cout << "5. Calculate Interest" << endl;
                cout << "6. Back" << endl;

                cout << "Enter Your Choice : ";
                cin >> transactionChoice;

                switch (transactionChoice)
                {
                case 1:

                    cout << endl
                         << "Enter Deposit Amount : ";
                    cin >> amount;

                    s1.deposit(amount);
                    break;

                case 2:

                    cout << endl
                         << "Enter Withdraw Amount : ";
                    cin >> amount;

                    s1.withdraw(amount);
                    break;

                case 3:

                    cout << endl
                         << "Current Balance : "
                         << s1.getBalance() << endl;

                    break;

                case 4:

                    s1.displayAccountInfo();
                    break;

                case 5:

                    s1.calculateInterest();
                    break;

                case 6:

                    cout << endl
                         << "Back To Main Menu..." << endl;
                    break;

                default:

                    cout << "Invalid Choice..." << endl;
                }

            } while (transactionChoice != 6);

            break;

        case 2:

            c1.createCheckingAccount();

            do
            {
                cout << endl;
                cout << "===== Checking Account Menu =====" << endl;
                cout << "1. Deposit" << endl;
                cout << "2. Withdraw" << endl;
                cout << "3. Current Balance" << endl;
                cout << "4. Display Account Info" << endl;
                cout << "5. Back" << endl;

                cout << "Enter Your Choice : ";
                cin >> transactionChoice;

                switch (transactionChoice)
                {
                case 1:

                    cout << endl
                         << "Enter Deposit Amount : ";
                    cin >> amount;

                    c1.deposit(amount);
                    break;

                case 2:

                    cout << endl
                         << "Enter Withdraw Amount : ";
                    cin >> amount;

                    c1.checkOverdraft(amount);
                    break;

                case 3:

                    cout << endl
                         << "Current Balance : "
                         << c1.getBalance() << endl;

                    break;

                case 4:

                    c1.displayAccountInfo();
                    break;

                case 5:

                    cout << endl
                         << "Back To Main Menu..." << endl;
                    break;

                default:

                    cout << "Invalid Choice..." << endl;
                }

            } while (transactionChoice != 5);

            break;

        case 3:

            f1.createFDAccount();

            do
            {
                cout << endl;
                cout << "===== Fixed Deposit Account Menu =====" << endl;
                cout << "1. Deposit" << endl;
                cout << "2. Current Balance" << endl;
                cout << "3. Display Account Info" << endl;
                cout << "4. Calculate Interest" << endl;
                cout << "5. Back" << endl;

                cout << "Enter Your Choice : ";
                cin >> transactionChoice;

                switch (transactionChoice)
                {
                case 1:

                    cout << endl
                         << "Enter Deposit Amount : ";
                    cin >> amount;

                    f1.deposit(amount);
                    break;

                case 2:

                    cout << endl
                         << "Current Balance : "
                         << f1.getBalance() << endl;

                    break;

                case 3:

                    f1.displayAccountInfo();
                    break;

                case 4:

                    f1.checkOvecalculateInterest();
                    break;

                case 5:

                    cout << endl
                         << "Back To Main Menu..." << endl;
                    break;

                default:

                    cout << "Invalid Choice..." << endl;
                }

            } while (transactionChoice != 5);

            break;

        case 4:

            cout << "Thank You for Visiting..." << endl;
            break;

        default:

            cout << "Invalid Choice..." << endl;
        }

    } while (choice != 4);

    return 0;
}