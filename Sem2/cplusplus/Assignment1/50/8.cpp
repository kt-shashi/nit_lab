// Assignment 1 Program 8
// Name: Shashi Kant
// Roll: 2021PGCACA050

#define __STDCPP_WANT_MATH_SPEC_FUNCS__ 1

#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{

    double inputG;
    // Gamma function
    cout << "Enter number to find value if it's Gamma function: ";
    cin >> inputG;

    cout << "Gamma function value for " << inputG << " is: " << tgamma(inputG) << endl;

    double inputB1, inputB2;
    // Beta function
    cout << "Enter the first value for Beta function: ";
    cin >> inputB1;
    cout << "Enter the second value for Beta function: ";
    cin >> inputB2;

    cout << "Result of Beta function for " << inputB1 << " and " << inputB2 << " is: " << beta(inputB1, inputB2) << "\n";

}