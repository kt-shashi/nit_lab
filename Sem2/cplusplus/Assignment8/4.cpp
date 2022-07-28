// Assignment 8
// Question 4
// 2021pgcaca050

#include <iostream>

using namespace std;

int fact(int n)
{
    try
    {
        if (n < 0)
            throw -1;
        else
        {
            try
            {
                if (n >= 17)
                    throw -1;
                if (n == 0)
                    return 1;
                return n * fact(n - 1);
            }
            catch (int)
            {
                cout << "Integer overflow occured\n";
                // abort();
            }
        }
    }
    catch (int)
    {
        cout << "Factorial of a negative number cannot be calculated\n";
        // abort();
    }
}
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    int f = fact(n);

    if (n >= 0 && n <= 16)
        cout << "Factorial of " << n << " is " << f << '\n';

    return 0;
}