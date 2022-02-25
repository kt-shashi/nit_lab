#include <iostream>
#include <iomanip>
using namespace std;
class person
{
private:
    char name[15] = "______________";
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
         << name;
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
         << "\t\tTemperature(Centigrate)";
    for (int i = 0; i < n; i++)
        data[i].display();
    cout << "-----------------------------\n";
    return 0;
}
