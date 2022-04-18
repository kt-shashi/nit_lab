// Assignment 6
// Question 2
// 2021pgcaca050

#include <iostream>

using namespace std;

class Student
{
protected:
    int Rollno;
    string studentName, branch, institute;
    double cgpa;

public:
    Student() {}

    Student(int r, string n, string b, string i, double c)
    {
        Rollno = r;
        studentName = n;
        branch = b;
        institute = i;
        cgpa = c;
    }

    ~Student()
    {
        cout << "Object destroyed for class Student" << endl;
    }

    void printdata();
};

void Student::printdata()
{
    cout << endl
         << "Print data of Student class" << endl;

    cout << "Rollno: " << Rollno << endl;
    cout << "name: " << studentName << endl;
    cout << "branch: " << branch << endl;
    cout << "institute: " << institute << endl;
    cout << "cgpa: " << cgpa << endl;
}

class Employee
{
protected:
    int empid;
    string name, organisation;
    double salary;

public:
    Employee() {}

    Employee(int e, string n, string o, double s)
    {
        empid = e;
        name = n;
        organisation = o;
        salary = s;
    }

    ~Employee()
    {
        cout << "Object destroyed for class Employee" << endl;
    }

    void printdata();
};

void Employee::printdata()
{
    cout << "Print data of Employee class" << endl;

    cout << "Employee id: " << empid << endl;
    cout << "Name: " << name << endl;
    cout << "Organisation: " << organisation << endl;
    cout << "Salary: Rs." << salary << endl;
}

class WorkingStudent : public Student, public Employee
{

public:
    WorkingStudent(int r, string n1, string b, string i, double c, int e, string n2, string o, double s) : Student(r, n1, b, i, c), Employee(e, n2, o, s)
    {
    }

    ~WorkingStudent()
    {
        cout << "Object destroyed for class WorkingStudent" << endl;
    }

    void printdata();
};

void WorkingStudent::printdata()
{

    cout << endl
         << "Print data of WorkingStudent class" << endl;

    cout << "Rollno: " << Rollno << endl;
    cout << "name: " << name << endl;
    cout << "branch: " << branch << endl;
    cout << "institute: " << institute << endl;
    cout << "cgpa: " << cgpa << endl;

    cout << "Employee id: " << empid << endl;
    cout << "Name: " << name << endl;
    cout << "Organisation: " << organisation << endl;
    cout << "Salary: Rs." << salary << endl;
}

int main()
{

    int r, e;
    string n1, b, i, n2, o;
    double c, s;

    cout << "Enter Rollno: ";
    cin >> r;
    cout << "Enter name: ";
    cin >> n1;
    cout << "Enter branch: ";
    cin >> b;
    cout << "Enter institute: ";
    cin >> i;
    cout << "Enter cgpa: ";
    cin >> c;

    cout << "Enter Employee id: ";
    cin >> e;
    cout << "Enter organisation: ";
    cin >> o;
    cout << "Enter salary: ";
    cin >> s;

    // Overriding
    WorkingStudent ws1(r, n1, b, i, c, e, n1, o, s);
    ws1.printdata();

    // Object slicing
    Student s1 = ws1;
    s1.printdata();
}