// Assignment 1 Program 3
// Name: Shashi Kant
// Roll: 2021PGCACA050

#include <iostream>

using namespace std;

int main()
{
    int r1, r2, c1, c2;
    cout << "Enter no of rows for first matrix: ";
    cin >> r1;
    cout << "Enter no of columns for first matrix: ";
    cin >> c1;

    // Allocate memory
    int **m1 = new int *[r1];
    for (int i = 0; i < r1; i++)
        m1[i] = new int[c1];
    // User input for first matrix
    cout << "Input for first matrix" << endl;
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter element for row " << i + 1 << " , column " << j + 1 << ": ";
            cin >> m1[i][j];
        }

    cout << "Enter no of rows for second matrix: ";
    cin >> r2;
    cout << "Enter no of columns for second matrix: ";
    cin >> c2;
    // Allocate memory
    int **m2 = new int *[r2];
    for (int i = 0; i < r2; i++)
        m2[i] = new int[c2];
    // User input for second matrix
    cout << "Input for second matrix" << endl;
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
        {
            cout << "Enter element for row " << i + 1 << " , column " << j + 1 << ": ";
            cin >> m2[i][j];
        }

    // Check if multiplication is possible
    if (c1 != r2)
        cout << "No of columns in 1st Matrix must be equal to No of Rows of 2nd Matrix." << endl;
    else
    {

        // Allocate memory for Resultant matrix
        int **result = new int *[r1];
        for (int i = 0; i < r2; i++)
            result[i] = new int[c2];

        // Multiple matrix
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < c2; j++)
            {
                result[i][j] = 0;
                for (int k = 0; k < r2; k++)
                    result[i][j] += m1[i][k] * m2[k][j];
            }

        // Output 
        cout << "Resultant Matrix: " << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
                cout << result[i][j] << " ";
            cout << endl;
        }

        // Deallocating memory
        for (int i = 0; i < r1; i++)
        {
            delete[] m1[i];
            delete[] m2[i];
            delete[] result[i];
        }
        delete[] m1, m2, result;

        return 0;
    }
}
