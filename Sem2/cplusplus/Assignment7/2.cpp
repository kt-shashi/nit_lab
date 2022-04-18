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
    string nameEmployee;

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
             << "Family name: " << familyname << endl
             << "Origin: " << origin << endl
             << "Country: " << country << endl
             << "Year: " << year << endl;
    }
};

int main()
{
    string name, fn, o, c, y;

    cout<<"Enter name: "<<endl;
    cin>>name;
    cout<<"Enter family name: "<<endl;
    cin>>fn;
    cout<<"Enter origin: "<<endl;
    cin>>o;
    cout<<"Enter country: "<<endl;
    cin>>c;
    cout<<"Enter year: "<<endl;
    cin>>y;

    cout<<endl<<endl<<"Output"<<endl<<endl;

    Employee e1(name,fn,o,c,y);

    FamilyMember *fmobj1, fmobj2(name,fn,o);

    cout<<endl<<"Object of FamilyMember(Base) Class: "<<endl<<endl;
    fmobj1=&fmobj2;
    fmobj1->about();

    cout<<endl<<"Object of Employee(Derived): "<<endl<<endl;
    fmobj1=&e1;
    fmobj1->about();

    Citizen *cobj1, cobj2(name,c,y);

    cout<<endl<<"Object of Citizen(Base) class: "<<endl<<endl;
    cobj1=&cobj2;
    cobj1->about();

    cout<<endl<<"Object of Employee(Derived): "<<endl<<endl;
    cobj1=&e1;
    cobj1->about();

    cout<<endl;

    return 0;
}
