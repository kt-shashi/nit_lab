// Assignment 1 Program 5
// Name: Shashi Kant
// Roll: 2021PGCACA050

#include <iostream>
#include <iomanip>

#define MAXSIZE 2

using namespace std;

double findCentigrade(double temperatureF)
{
    return ((temperatureF - 32) * 5) / 9;
}

int main()
{

    double temp[MAXSIZE];

    int n;
    cout << "Enter total number of people: ";
    cin >> n;

    for (int i = 0; i < MAXSIZE; i++)
    {
        cout << "Enter temp of person " << i + 1 << " (in Fahrenheit): ";
        cin >> temp[i];
    }

    cout << "Name" << setw(10) << " "
         << "Temperature (in celsius)"
         << "\n";

    for (int i = 0; i < MAXSIZE; i++)
    {
        cout << setw(15) << setfill('_') << " ";
        cout << fixed << setprecision(1) << findCentigrade(temp[i]) << endl;
    }

    return 0;
}