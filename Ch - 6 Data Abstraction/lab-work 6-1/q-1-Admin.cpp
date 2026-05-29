#include <iostream>
#include <stdio.h>

using namespace std;

class Admin
{
protected:
    char company_name[50];
    float manager_salary;
    float employee_salary;
    int total_staff;

public:
    float total_annual_revenue;
    int can_terminate;

    Admin()
    {
        fflush(stdin);
        cout << "Enter Company Name : ";
        gets(company_name);

        cout << "Enter Manager Salary : ";
        cin >> manager_salary;

        cout << "Enter Employee Salary : ";
        cin >> employee_salary;

        cout << "Enter Total Staff : ";
        cin >> total_staff;

        cout << "Enter Total Annual Revenue : ";
        cin >> total_annual_revenue;

        cout << "Enter Can Terminate (1 = Yes, 0 = No) : ";
        cin >> can_terminate;
    }

    virtual void myAccess()
    {
        cout << endl
             << "----- Admin Details -----" << endl;
        cout << "Company Name        : " << company_name << endl;
        cout << "Manager Salary      : " << manager_salary << endl;
        cout << "Employee Salary     : " << employee_salary << endl;
        cout << "Total Staff         : " << total_staff << endl;
        cout << "Annual Revenue      : " << total_annual_revenue << endl;
        cout << "Can Terminate       : " << can_terminate << endl;
    }
};

class Manager : public Admin
{
public:
    void myAccess()
    {
        cout << endl
             << "----- Manager Access -----" << endl;
        cout << "Company Name        : " << company_name << endl;
        cout << "Manager Salary      : " << manager_salary << endl;
        cout << "Employee Salary     : " << employee_salary << endl;
        cout << "Total Staff         : " << total_staff << endl;
        cout << "Annual Revenue      : " << total_annual_revenue << endl;
        cout << "Can Terminate       : " << can_terminate << endl;
    }
};

class Employee : public Manager
{
public:
    void myAccess()
    {
        cout << endl
             << "----- Employee Access -----" << endl;
        cout << "Company Name        : " << company_name << endl;
        cout << "Employee Salary     : " << employee_salary << endl;
        cout << "Annual Revenue      : " << total_annual_revenue << endl;
        cout << "Can Terminate       : " << can_terminate << endl;
    }
};