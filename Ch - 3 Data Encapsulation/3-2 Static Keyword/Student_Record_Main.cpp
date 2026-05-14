#include <iostream>
#include "Student_Record.cpp"
using namespace std;

int main()
{

    int size;

    cout << "Enetr Number of Students : ";
    cin >> size;

    StudentRecord s[size];

    cout << "Student Data Input" << endl;
    for (int i = 0; i < size; i++)
    {
        s[i].setStudentRecord();
    }

    s[0].StudentHeader();

    for (int i = 0; i < size; i++)
    {
        s[i].getStudentRecord();
    }

    s[0].StudentFooter();

    return 0;
}