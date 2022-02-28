// Assignment 2 Program 4
// Name: Shashi Kant
// Roll: 2021PGCACA050

#include <iostream>

#define MAXSIZE 10

using namespace std;

float plusoverloaded(float a, float b)
{
    return a + b;
}

string plusoverloaded(string s1, string s2)
{
    return s1 + s2;
}

void plusoverloaded(int a[], int size, int n)
{
    for (int i = 0; i < size; i++)
        a[i] += n;
}

// Helper function for 4th sub question
// It returns true if an element x is present in the array a
bool isElementPresent(int a[], int size, int x)
{
    for (int i = 0; i < size; i++)
        if (a[i] == x)
            return true;
    return false;
}

// Print an array
void printArray(int a[], int size)
{
    //     // Display merged array
    //     cout << "Merged array" << endl;
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}

void plusoverloaded(int a1[], int size1, int a2[], int size2)
{

    int a3[MAXSIZE], size3 = 0;

    for (int i = 0; i < size1; i++)
        if (!isElementPresent(a3, size3, a1[i]))
            a3[size3++] = a1[i];

    for (int i = 0; i < size2; i++)
        if (!isElementPresent(a3, size3, a2[i]))
            a3[size3++] = a2[i];

    cout << "Output after eliminating duplicate entries" << endl;
    printArray(a3, size3);
}

int main()
{

    int ch;
    cout << endl;
    cout << "1. Part 1 (2 floats)" << endl;
    cout << "2. Part 2 (2 strings)" << endl;
    cout << "3. Part 3 (Array, Size, Integer)" << endl;
    cout << "4. Part 4 (2 Arrays)" << endl;
    cout << "Enter choice: ";
    cin >> ch;

    switch (ch)
    {
    case 1:
        float f1, f2;
        cout << "Enter float 1: ";
        cin >> f1;
        cout << "Enter float 2: ";
        cin >> f2;
        cout << "Output: " << plusoverloaded(f1, f2) << endl;
        break;

    case 2:
    {
        string s1;
        string s2;
        cout << "Enter string 1: ";
        cin >> s1;
        cout << "Enter string 2: ";
        cin >> s2;
        cout << "Output: " << plusoverloaded(s1, s2) << endl;
        break;
    }

    case 3:
        int a[MAXSIZE], size, x;
        cout << "Enter size of array: ";
        cin >> size;

        for (int i = 0; i < size; i++)
        {
            cout << "Enter element " << i + 1 << " : ";
            cin >> a[i];
        }
        cout << "Enter a number: ";
        cin >> x;

        plusoverloaded(a, size, x);

        printArray(a, size);
        break;

    case 4:
        int a1[MAXSIZE], a2[MAXSIZE], size1, size2;

        cout << "Input for first array" << endl;
        cout << "Enter size of array: ";
        cin >> size1;
        for (int i = 0; i < size1; i++)
        {
            cout << "Enter element " << i + 1 << " : ";
            cin >> a1[i];
        }

        cout << "Input for second array" << endl;
        cout << "Enter size of array: ";
        cin >> size2;
        for (int i = 0; i < size2; i++)
        {
            cout << "Enter element " << i + 1 << " : ";
            cin >> a2[i];
        }

        plusoverloaded(a1, size1, a2, size2);
        break;

    default:
        cout << "Invalid input.";
        break;
    }

}