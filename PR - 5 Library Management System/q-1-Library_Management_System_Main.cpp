#include <iostream>
#include <string.h>
#include "q-1-Library_Management_System.cpp"

int main()
{
    LibraryItem *items[100];
    int count = 0;
    int choice;

    do
    {
        cout << endl
             << endl
             << "===== LIBRARY MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Add DVD" << endl;
        cout << "3. Add Magazine" << endl;
        cout << "4. Display All Items" << endl;
        cout << "5. Check Out Item" << endl;
        cout << "6. Return Item" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter Choice : " << endl;
        cin >> choice;

        try
        {
            if (choice == 1)
            {
                char title[50], author[50], dueDate[50], isbn[14];

                fflush(stdin);
                cout << "Enter Title : ";
                gets(title);

                cout << "Enter Author : ";
                gets(author);

                cout << "Enter Due Date : ";
                gets(dueDate);

                cout << "Enter ISBN (13 Characters) : ";
                gets(isbn);

                items[count] = new Book(title, author, dueDate, isbn);
                count++;

                cout << endl
                     << "Book Added Successfully.";
            }

            else if (choice == 2)
            {
                char title[50], author[50], dueDate[50];
                int duration;

                fflush(stdin);

                cout << "Enter Title : ";
                gets(title);

                cout << "Enter Author : ";
                gets(author);

                cout << "Enter Due Date : ";
                gets(dueDate);

                cout << "Enter Duration : ";
                cin >> duration;

                items[count] = new DVD(title, author, dueDate, duration);
                count++;

                cout << endl
                     << "DVD Added Successfully.";
            }

            else if (choice == 3)
            {
                char title[50], author[50], dueDate[50];
                int issueNumber;

                fflush(stdin);

                cout << "Enter Title : ";
                gets(title);

                cout << "Enter Author : ";
                gets(author);

                cout << "Enter Due Date : ";
                gets(dueDate);

                cout << "Enter Issue Number : ";
                cin >> issueNumber;

                items[count] = new Magazine(title, author, dueDate, issueNumber);
                count++;

                cout << endl
                     << "Magazine Added Successfully.";
            }

            else if (choice == 4)
            {
                if (count == 0)
                {
                    cout << endl
                         << "No Items Available.";
                }
                else
                {
                    for (int i = 0; i < count; i++)
                    {
                        cout << endl
                             << "Item Number : " << i + 1;
                        items[i]->displayDetails();
                    }
                }
            }

            else if (choice == 5)
            {
                int num;

                cout << "Enter Item Number : ";
                cin >> num;

                if (num >= 1 && num <= count)
                {
                    items[num - 1]->checkOut();
                }
                else
                {
                    cout << endl
                         << "Invalid Item Number.";
                }
            }

            else if (choice == 6)
            {
                int num;

                cout << "Enter Item Number : ";
                cin >> num;

                if (num >= 1 && num <= count)
                {
                    items[num - 1]->returnItem();
                }
                else
                {
                    cout << endl
                         << "Invalid Item Number.";
                }
            }
        }
        catch (const char *msg)
        {
            cout << endl
                 << "Error : " << msg;
        }

    } while (choice != 7);

    for (int i = 0; i < count; i++)
    {
        delete items[i];
    }

    cout << endl
         << "Program Ended Successfully.";

    return 0;
}