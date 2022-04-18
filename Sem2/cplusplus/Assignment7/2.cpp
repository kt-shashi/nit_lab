// Assignment 7
// Question 2
// 2021pgcaca050

#include <iostream>

using namespace std;

class FamilyMember
{
protected:
    string n;
    string familyname;
    string origin;

public:
    FamilyMember() {}
    FamilyMember(string name, string fn, string o)
    {
        n = name;
        familyname = fn;
        origin = o;
    }
    ~FamilyMember()
    {
        cout << "Object destroyed for FamilyMember" << endl;
    }

    // prints about father object
    virtual void about()
    {
        cout << "Name: " << n << endl
             << "Familyname: " << familyname << endl
             << "Origin: " << origin << endl;
    }
};

class Citizen
{
protected:
    string name;
    string country;
    string year;

public:
    Citizen() {}
    Citizen(string n, string c, string y)
    {
        name = n;
        country = c;
        year = y;
    }
    ~Citizen()
    {
        cout << "Object destroyed for Citizen" << endl;
    }

    // prints about mother object
    virtual void about()
    {
        cout << "Name: " << name << endl
             << "Country: " << country << endl
             << "Year: " << year << endl;
    }
};

class Employee : public FamilyMember, public Citizen
{

protected:
    int nameEmployee;

public:
    Employee() {}
    Employee(string name, string fn, string o, string c, string y) : FamilyMember(name, fn, o), Citizen(name, c, y)
    {
        nameEmployee = name;
    }
    ~Employee()
    {
        cout << "Object destroyed for Employee" << endl;
    }

    // prints about mother object
    void about()
    {
        cout << "Name: " << name << endl
             << "Familyname: " << familyname << endl
             << "Origin: " << origin << endl
             << "Country: " << country << endl
             << "Year: " << year << endl;
    }
};

int main()
{
    return 0;
}