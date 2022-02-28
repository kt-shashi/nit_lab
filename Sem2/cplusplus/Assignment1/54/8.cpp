/**
 * ASSIGNMENT – 1
 * Q : 8
 * Reg. No : 2021PGCACA054
 * Name : Shubhanshu Singh
 **/

#define __STDCPP_WANT_MATH_SPEC_FUNCS__ 1 // to use beta function
#include <iostream>
#include <cmath>
#include <assert.h>
using namespace std;

// gama fucntion
void check_gamma()
{
    int x;
    cout << "Enter the value of x :";
    cin >> x;

    // gamma() is called inline
    cout << "Gamma(x) : " << tgamma(x) << "\n";
}

// beta function
void check_beta()
{
    int x, y;
    cout << "Enter the value of x : ";
    cin >> x;
    cout << "Enter the value of y : ";
    cin >> y;

    // beta() is called inline
    cout << "Beta(x,y) : " << beta(x, y) << "\n";
}

// psi fucntion
void check_psi()
{
    double x;
    cout << "Enter the value of x :";
    cin >> x;

    // digamma
    double result = 0, xx, xx2, xx4;
    assert(x > 0);
    for (; x < 7; ++x)
        result -= 1 / x;
    x -= 1.0 / 2.0;
    xx = 1.0 / x;
    xx2 = xx * xx;
    xx4 = xx2 * xx2;
    result += log(x) + (1. / 24.) * xx2 - (7.0 / 960.0) * xx4 + (31.0 / 8064.0) * xx4 * xx2 - (127.0 / 30720.0) * xx4 * xx4;
    
    cout << "PSI(x) : " << result << "\n";
}

// choice cheking
void check_choice(int choice)
{
    switch (choice)
    {
    case 1:
        check_gamma();
        break;

    case 2:
        check_beta();
        break;

    case 3:
        check_psi();
        break;

    case 0:
        cout << "Exiting program....\n";
        break;

    default:
        cout << "This is not the choice! Try again.\n";
        break;
    }
}

int main()
{
    // user choice
    int choice = 1;
    while (choice)
    {
        cout << "-----------------------\n";
        cout << "Chooce one option\n";
        cout << "1 - Gamma\n";
        cout << "2 - Beta\n";
        cout << "3 - PSI\n";
        cout << "0 - Exit\n";
        cout << "-----------------------\n";
        cout << "Enter your choice : ";
        cin >> choice;
        // check which choice is input
        check_choice(choice);
    }
    return 0;
}
