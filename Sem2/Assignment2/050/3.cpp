// Assignment 2 Program 3
// Shashi Kant | 2021PGCACA050

#include <bits/stdc++.h>
using namespace std;
#define N 1000

// Display Memory storage
void displayMemoryStorage(int a[][N], int r, int c)
{

    cout << endl
         << "Memory storage representation" << endl;

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

int main()
{

    while (1)
    {

        // Menu
        cout << endl;
        cout << "1. Input Upper triangular matrix" << endl;
        cout << "2. Input Lower triangular matrix" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            // User Input for Matrix
            {
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
                displayMemoryStorage(a, r, c);
            }
            break;

        case 2:
            // User Input for Matrix
            {
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
                displayMemoryStorage(a, r, c);
            }
            break;

        case 3:
            cout << "Exiting.." << endl;
            exit(0);
            break;

        default:
            cout << "Invalid Input. Please try again.";
        }
    }
    return 0;
}
