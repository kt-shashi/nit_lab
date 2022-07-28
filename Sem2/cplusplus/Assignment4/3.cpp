#include <iostream>
#include <iomanip>

using namespace std;

class MyDate
{

private:
    int day;
    int month;
    int year;

public:
    MyDate()
    {
        day = 0;
        month = 0;
        year = 0;
    }

    MyDate(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    friend class Employee;
};

class Employee
{

private:
    int empno;
    MyDate doj;
    double salary;

public:
    Employee() {}

    // 1. Parameretized constructor
    Employee(int empno, MyDate doj, double salary)
    {
        this->empno = empno;
        this->doj = doj;
        this->salary = salary;
    }

    // 2. Copy constructor
    Employee(const Employee &emp)
    {
        empno = emp.empno;
        doj = emp.doj;
        salary = emp.salary;
    }

    void setEmpdata(int employeeNo, MyDate myDate, double salary)
    {
        empno = employeeNo;
        doj = myDate;
        this->salary = salary;
    }

    void showEmpdata()
    {
        cout << "Employee Number: " << empno << endl;
        cout << "Date of joining: " << doj.day << "/" << doj.month << "/" << doj.year << endl;
        cout << "Salary: Rs." << salary << endl;
    }

    friend void TaxPayable(Employee emp);
};

void TaxPayable(Employee emp)
{
    if (emp.salary < 100000)
        cout << "No Tax" << endl;
    else if (emp.salary >= 100000 && emp.salary < 200000)
    {
        double tax = emp.salary * 0.1;
        cout << "Tax: " << tax << endl;
    }
    else if (emp.salary >= 200000 && emp.salary < 500000)
    {
        double tax = emp.salary * .15;
        cout << "Tax: " << tax << endl;
    }
    else
    {
        double tax = emp.salary * .2;
        cout << "Tax: " << tax << endl;
    }
}

int main()
{
    int empno;
    int date, month, year;
    double sal;

    cout << "Enter employee number: ";
    cin >> empno;
    cout << "Enter date of joining" << endl;
    cout << "Enter day: ";
    cin >> date;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    cout << "Enter Your salary: ";
    cin >> sal;

    MyDate d1(date, month, year);
    Employee e1(empno, d1, sal);

    e1.showEmpdata();
    TaxPayable(e1);

    return 0;
}