#include <iostream>
#include <iomanip>
using namespace std;
class person
{
private:
    char name[15];
    double temperature;

public:
    void input(int);
    double convert();
    void display();
};

void person::input(int i)
{
    cout << "Enert name of person No. " << i + 1 << " : ";
    cin >> name;
    cout << "Enter temperature :";
    cin >> temperature;
}

double person::convert()
{
    return (temperature - 32) * 5 / 9;
}

void person::display()
{
    cout << "Name  : " << name;
    cout << fixed;
    cout << "\nTemperature : " << setprecision(1) << convert() << " Centigrate\n";
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
    for (int i = 0; i < n; i++)
        data[i].display();
    
    return 0;
}
