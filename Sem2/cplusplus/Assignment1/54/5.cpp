/**
 * ASSIGNMENT – 1
 * Q : 5
 * Reg. No : 2021PGCACA054
 * Name : Shubhanshu Singh
 **/

#include <iostream>
#include <iomanip>
using namespace std;
class person
{
private:
    string name;
    double temperature;

public:
    void input(int);
    double convert();
    void display();
};

void person::input(int i)
{
    cout << "Enert temperature of person No. " << i + 1 << " (Farenheit) : ";
    cin >> temperature;
}

double person::convert()
{
    return (temperature - 32) * 5 / 9;
}

void person::display()
{
    cout << "\n"
         << name << setw(15) << setfill('_');
    cout << fixed;
    cout << "     " << setprecision(1) << convert() << "\n";
}

int main()
{
    cout << "-----------------------------\n";

    int n;
    cout << "How many person are there : ";
    cin >> n;

    person data[n];

    cout << "-----------------------------\n";
    for (int i = 0; i < n; i++)
        data[i].input(i);

    cout << "-----------------------------\n";

    cout << "   NAME"
         << "\t    Temperature(Centigrate)";
    for (int i = 0; i < n; i++)
        data[i].display();
    cout << "-----------------------------\n";
    return 0;
}
