// Assignment 8
// Question 1
// 2021pgcaca050

#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

#include <iostream>
using namespace std;

void test(int a, int b)
{

    try
    {
        if (b == 0)
            throw b;
        else if (b < 0)
            throw 'b';
        else
            throw(double) b;
    }
    catch (signed int i)
    {
        cout << "Caught exception : denominator equal to zero \n";
    }
    catch (char c)
    {
        cout << "Caught exception : negative number \n";
    }
    catch (double d)
    {
        cout << "Caught exception : long long type \n";
    }
}
int main()
{

    int a, b;
    cout << "\nEnter the value of numerator and denominator,respectively : ";
    cin >> a >> b;
    cout << "\n\nUser Defined exception Handling : \n";
    test(a, b);
    cout << "\n\nTesting multiple catches\n";
    test(a, 0);
    test(a, -10);
    test(a, INT_MAX);
    return 0;
}