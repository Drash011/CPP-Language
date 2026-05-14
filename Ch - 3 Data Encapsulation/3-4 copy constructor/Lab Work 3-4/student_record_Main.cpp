#include <iostream>
#include "student_record.cpp"

int main()
{
    Student s1("Priti", 101, 8.5);
    Student s2("Gudi", 102, 7.8);
    Student s3("Jeni", 103, 9.1);

    Student s4 = s1;

    StudentRecordManager manager;

    manager.addStudent(s1);
    manager.addStudent(s2);
    manager.addStudent(s3);
    manager.addStudent(s4);

    manager.showStudents();

    int roll;

    cout << endl
         << "Enter Roll Number to Search : ";
    cin >> roll;

    manager.searchStudent(roll);

    return 0;
}