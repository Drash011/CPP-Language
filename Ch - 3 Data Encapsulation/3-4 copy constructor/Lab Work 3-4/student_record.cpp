#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll_number;
    float gpa;

public:
    Student()
    {
        name = "Unknown";
        roll_number = 0;
        gpa = 0.0;
    }

    Student(string name, int roll_number, float gpa)
    {
        this->name = name;
        this->roll_number = roll_number;
        this->gpa = gpa;
    }

    Student(Student &s)
    {
        this->name = s.name;
        this->roll_number = s.roll_number;
        this->gpa = s.gpa;
    }

    string getName()
    {
        return name;
    }

    int getRollNumber()
    {
        return roll_number;
    }

    float getGPA()
    {
        return gpa;
    }
};

class StudentRecordManager
{
private:
    Student students[100];
    int count;

public:
    StudentRecordManager()
    {
        count = 0;
    }

    void addStudent(Student &s)
    {
        students[count] = s;
        count++;
    }

    void showStudents()
    {
        cout << endl
             << "Student Records" << endl;

        for (int i = 0; i < count; i++)
        {
            cout << "\nStudent " << i + 1 << endl;

            cout << "Name        : "
                 << students[i].getName() << endl;

            cout << "Roll Number : "
                 << students[i].getRollNumber() << endl;

            cout << "GPA         : "
                 << students[i].getGPA() << endl;
        }
    }

    void searchStudent(int roll)
    {
        for (int i = 0; i < count; i++)
        {
            if (students[i].getRollNumber() == roll)
            {
                cout << "\nStudent Found\n";

                cout << "Name        : "
                     << students[i].getName() << endl;

                cout << "Roll Number : "
                     << students[i].getRollNumber() << endl;

                cout << "GPA         : "
                     << students[i].getGPA() << endl;

                return;
            }
        }

        cout << "\nStudent Not Found\n";
    }
};