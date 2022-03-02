// Assignment 2 Program 3
// Name: Shashi Kant
// Roll: 2021PGCACA050

#include <iostream>
#define R 8.31446261815324
#define G 9.8

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

// Part 3. Final displacement
inline double findFinalDisplacement(double a, double i, double t)
{
    return ((i * t) + (a * t * t) / 2);
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

    // Part 2
    int rho, volume;
    cout << "2. Buoyant Force" << endl;
    cout << "Enter density: ";
    cin >> rho;
    cout << "Enter volume: ";
    cin >> volume;
    cout << "Result: " << buoyantForce(rho, volume) << endl;

    // Part 3
    double acceleration, i, time;
    cout << "3. Final displacement" << endl;
    cout << "Enter Accelaration: ";
    cin >> acceleration;
    cout << "Enter initial valocity: ";
    cin >> i;
    cout << "Enter time: ";
    cin >> time;
    cout << "Result: " << findFinalDisplacement(acceleration, i, time) << endl;

    // Part 4
    int a, b;
    cout << "4. a XOR b" << endl;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Result: " << findXOR(a, b) << endl;
}