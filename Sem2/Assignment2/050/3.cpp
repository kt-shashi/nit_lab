// Assignment 2 Program 3
// Shashi Kant | 2021PGCACA050

#include <bits/stdc++.h>
using namespace std;
#define N 1000

// Display Memory storage
void displayMemoryStorage(int a[][N], int r, int c)
{

    // vr : vector that stores rows whose element is non zero
    // vr : vector that stores columns whose value is non zero
    // vr : vector stores non zero elements
    vector<int> vr, vc, vv;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (a[i][j] != 0)
            {
                vr.push_back(i);
                vc.push_back(j);
                vv.push_back(a[i][j]);
            }

    // Print row
    cout << "Row: ";
    for (int i : vr)
        cout
            << i << " ";
    cout << endl;

    // Print column
    cout << "Col: ";
    for (int i : vc)
        cout
            << i << " ";
    cout << endl;

    // Print value
    cout << "Val: ";
    for (int i : vv)
        cout
            << i << " ";
    cout << endl;
}

// Print lower triangle
void printLowerTriangular(int a[][N], int r, int c)
{
    cout << endl
         << "Lower Triangular Matrix:" << endl;
    for (int i = 1; i < r; i++)
    {
        for (int j = 0; j < i; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

// Print upper triangle
void printUpperTriangular(int a[][N], int r, int c)
{
    cout << endl
         << "Upper Triangular Matrix:" << endl;
    for (int i = 0; i < r - 1; i++)
    {
        for (int k = 0; k < i; k++)
            cout << "  ";
        for (int j = i + 1; j < c; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main()
{

    // User Input for Matrix
    int r, c, a[N][N];
    cout << "Enter total number of rows: ";
    cin >> r;
    cout << "Enter total number of columns: ";
    cin >> c;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            cout << "Enter row " << i + 1 << ", element " << j + 1 << " : ";
            cin >> a[i][j];
        }

    while (1)
    {

        // Menu
        cout << endl;
        cout << "1. Display memory storage representation" << endl;
        cout << "2. Display Upper triangular" << endl;
        cout << "3. Display Lower triangular" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            displayMemoryStorage(a, r, c);
            break;

        case 2:
            printUpperTriangular(a, r, c);
            break;

        case 3:
            printLowerTriangular(a, r, c);
            break;

        case 4:
            cout << "Exiting.." << endl;
            exit(0);
            break;

        default:
            cout << "Invalid Input. Please try again.";
        }
    }
    return 0;
}
