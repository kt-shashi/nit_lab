#include <iostream>
using namespace std;

void check(int &r1, int &c1, int &r2, int &c2)
{
    while (c1 != r2)
    {
        cout << "This is not appropriate for matrix multiplication.\n";
        cout << "Try again!\n";
        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }
}

int main()
{
    int r1, c1, r2, c2;
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    check(r1, c1, r2, c2);


    // Enter elements of first matrix.
    cout << "Enter elements of matrix 1 : \n";
    int **arr1 = new int *[r1];
    for (int i = 0; i < r1; i++)
        arr1[i] = new int[c1];

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> arr1[i][j];


    // Enter elements of second matrix.
    cout << "Enter elements of matrix 2 : \n";
    int **arr2 = new int *[r2];
    for (int i = 0; i < r2; i++)
        arr2[i] = new int[c2];

    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> arr2[i][j];


    // Multiple matrix
    int **res = new int *[r1];
    for (int i = 0; i < r2; i++)
        res[i] = new int[c2];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < c2; k++)
                res[i][j] += arr1[i][k] * arr2[k][j];
        }
    }

    cout << "multiplication : \n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
            cout << res[i][j] << " ";
        cout << "\n";
    }


    // Delete the array created
    for (int i = 0; i < r1; i++) // To delete the inner arrays
    {
        delete[] arr1[i];
        delete[] res[i];
    }
    delete[] arr1, res;
    
    for (int i = 0; i < r2; i++) // To delete the inner arrays
        delete[] arr2[i];
    delete[] arr2;

    return 0;
}
