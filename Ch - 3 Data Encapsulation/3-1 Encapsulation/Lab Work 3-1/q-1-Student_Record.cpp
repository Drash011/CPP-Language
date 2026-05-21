#include <iostream>
using namespace std;

class StudentRecord
{
    private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;  
    string stu_email;  
    string stu_college;  


    public:
    void setStudentRecord()
    {
        cout << endl;

        cout << "Enter Your Id :";
        cin >> this->stu_id;

        cout << "Enter Your Name :";
        cin >> this->stu_name;

        cout << "Enter Your Age :";
        cin >> this->stu_age;

        cout << "Enter Your Course :";
        cin >> this->stu_course;

        cout << "Enter Your City :";
        cin >> this->stu_city;

        cout << "Enter Your Email :";
        cin >> this->stu_email;

        cout << "Enter Your College :";
        cin >> this->stu_college;
    }


    void getStudentRecord()
    {
        cout << endl << endl;
        cout << "Student Id\t: " << this->stu_id << endl;
        cout << "Student Name\t: " << this->stu_name << endl;
        cout << "Student Age\t: " << this->stu_age << endl;
        cout << "Student Course\t: " << this->stu_course << endl;
        cout << "Student City\t: " << this->stu_city << endl;
        cout << "Student Emial\t: " << this->stu_email << endl;
        cout << "Student College\t: " << this->stu_college << endl;

    }
};