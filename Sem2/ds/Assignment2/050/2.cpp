// Assignment 2 Program 2
// Shashi Kant | 2021PGCACA050

#include <bits/stdc++.h>
using namespace std;
#define N 1000

// Print matrix
void displayMatrix(int a[][N], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

// Print row major order
// Using formula: (Row number * No of rows * (Column number + 1))
// Since index starts from 0
void printRowMajor(int a[][N], int r, int c)
{
    cout << "Row major order:" << endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cout << ((i * r) + j + 1) << " : " << a[i][j] << endl;
}

// Print column major order
// Using formula: (Column number * No of columns * (Row number + 1))
// Since index starts from 0
void printColumnMajor(int a[][N], int r, int c)
{
    cout << "Column major order:" << endl;
    for (int j = 0; j < c; j++)
        for (int i = 0; i < r; i++)
            cout << ((j * c) + i + 1) << " : " << a[i][j] << endl;
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
        cout << "1. Display matrix" << endl;
        cout << "2. Row major order" << endl;
        cout << "3. Column Major Order" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            displayMatrix(a, r, c);
            break;

        case 2:
            printRowMajor(a, r, c);
            break;

        case 3:
            printColumnMajor(a, r, c);
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
