// Assignment 1 Program 6
// Name: Shashi Kant
// Roll: 2021PGCACA050

#include <iostream>

using namespace std;

void printElements(int *p, int n, int pos)
{

    int leftCount = 0, rightCount = 0;

    // Count elements less than element at pos index in the left sub array
    for (int i = 0; i < pos; i++)
        if (p[i] < p[pos])
            leftCount++;

    // Count elements greater than element at pos index in the right sub array
    for (int i = pos + 1; i < n; i++)
        if (p[i] > p[pos])
            rightCount++;

    // Output
    cout << "Number of elements lesser than " << p[pos] << " in left sub array = " << leftCount << endl;
    cout << "Number of elements greater than " << p[pos] << " in right sub array = " << rightCount << endl;
}

int main()
{

    int n;

    // User input
    cout << "Enter size of array: ";
    cin >> n;
    // Creating the array by using pointer
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> p[i];
    }
    int pos;
    cout << "Enter position: ";
    cin >> pos;

    printElements(p, n, pos);

    // Deallocating memory
    delete[] p;
}