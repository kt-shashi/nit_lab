// Assignment 2 Program 3
// Name: Shashi Kant
// Roll: 2021PGCACA050

#include <iostream>
#define R 8.31446261815324
#define G 9.2

using namespace std;

// Part 1. Verify Ideal Gas law
inline bool isIdealGasLaw(double p, double v, double n, double r, double t)
{
    return (p * v) == (n * r * t);
}

// Part 2. To compute buoyant force
inline double buoyantForce(double rho, double volume)
{
    return rho * volume * G;
}

// Part 4. To compute a XOR b
inline int findXOR(int a, int b)
{
    return a ^ b;
}

int main()
{

    // Part 1
    cout << "1. Verify Ideal gas law" << endl;
    double p, v, n, t;
    cout << "Enter Pressure: ";
    cin >> p;
    cout << "Enter Volume: ";
    cin >> v;
    cout << "Enter Amount of substance: ";
    cin >> n;
    cout << "Enter emperature(in K): ";
    cin >> t;
    if (isIdealGasLaw(p, v, n, R, t))
        cout << "Yes ideal gas law" << endl;
    else
        cout << "Not ideal gas law" << endl;

    // Part 4
    int a, b;
    cout << "4. a XOR b" << endl;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Result: " << findXOR(a, b) << endl;
}