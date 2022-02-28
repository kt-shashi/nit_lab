// Assignment 1 Program 1
// Name: Shashi Kant
// Roll: 2021PGCACA050

#include <iostream>

using namespace std;

void printPattern(int lines = 5, int diff = 1)
{

    cout << endl
         << "Printing the pattern" << endl;

    int n = 1;
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << n << " ";
            n += diff;
            if (n > 9)
                n = 1;
        }
        cout << endl;
    }
}

int main()
{

    // Print pattern for default arguments
    printPattern();

    int lines, diff;

    // User input
    cout << "Enter no of lines: ";
    cin >> lines;
    cout << "Enter the difference: ";
    cin >> diff;

    printPattern(lines, diff);
}