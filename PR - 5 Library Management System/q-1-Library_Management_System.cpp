#include <iostream>
#include <string.h>

using namespace std;

class LibraryItem
{
private:
    string title;
    string author;
    string dueDate;

public:
    LibraryItem(string t, string a, string d)
    {
        title = t;
        author = a;
        dueDate = d;
    }

    void setTitle(string t)
    {
        title = t;
    }

    void setAuthor(string a)
    {
        author = a;
    }

    void setDueDate(string d)
    {
        dueDate = d;
    }

    void getTitle()
    {
        cout << title;
    }

    void getAuthor()
    {
        cout << author;
    }

    void getDueDate()
    {
        cout << dueDate;
    }

    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() = 0;

    virtual ~LibraryItem() {}
};

// Book Class
class Book : public LibraryItem
{
private:
    string isbn;

public:
    Book(string t, string a, string d, string i)
        : LibraryItem(t, a, d)
    {
        if (i.length() != 13)
            throw "ISBN must contain 13 characters.";

        isbn = i;
    }

    void checkOut()
    {
        cout << endl
             << "Book Checked Out Successfully.";
    }

    void returnItem()
    {
        cout << endl
             << "Book Returned Successfully.";
    }

    void displayDetails()
    {
        cout << endl
             << "----- BOOK -----";
        getTitle();
        getAuthor();
        getDueDate();
        cout << endl
             << "ISBN : " << isbn;
    }
};

// DVD Class
class DVD : public LibraryItem
{
private:
    int duration;

public:
    DVD(string t, string a, string d, int dur)
        : LibraryItem(t, a, d)
    {
        if (dur <= 0)
            throw "Duration must be greater than 0.";

        duration = dur;
    }

    void checkOut()
    {
        cout << endl
             << "DVD Checked Out Successfully.";
    }

    void returnItem()
    {
        cout << endl
             << "DVD Returned Successfully.";
    }

    void displayDetails()
    {
        cout << endl
             << "----- DVD -----";
        getTitle();
        getAuthor();
        getDueDate();
        cout << endl
             << "Duration : " << duration << " Minutes";
    }
};

// Magazine Class
class Magazine : public LibraryItem
{
private:
    int issueNumber;

public:
    Magazine(string t, string a, string d, int issue)
        : LibraryItem(t, a, d)
    {
        if (issue <= 0)
            throw "Issue Number must be greater than 0.";

        issueNumber = issue;
    }

    void checkOut()
    {
        cout << endl
             << "Magazine Checked Out Successfully.";
    }

    void returnItem()
    {
        cout << endl
             << "Magazine Returned Successfully.";
    }

    void displayDetails()
    {
        cout << endl
             << "----- MAGAZINE -----";
        getTitle();
        getAuthor();
        getDueDate();
        cout << endl
             << "Issue Number : " << issueNumber;
    }
};