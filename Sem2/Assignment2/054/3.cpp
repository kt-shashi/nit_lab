// Q-3 : Write a menu driven program to display the memory storage representation of a sparse
// matrix for triangular matrices (Lower and Upper triangular matrices).
#include <bits/stdc++.h>
using namespace std;
#define N 1000

void print_MST(int MST[3][N], int count)
{
    cout << "----------------------------------\n";
    cout << "Memory Storege Representation -\n";
    for (int row_col_val = 0; row_col_val < 3; row_col_val++)
    {
        if (row_col_val == 0)
            cout << "Row    : ";
        else if (row_col_val == 1)
            cout << "Column : ";
        else if (row_col_val == 2)
            cout << "Value  : ";
        for (int value = 0; value < count; value++)
            cout << MST[row_col_val][value] << " ";
        cout << "\n";
    }
}

void count_MST(int matrix[][N], int show_MST[3][N], int row, int column, int count)
{
    for (int row_index = 0, non_zero = 0; row_index < row; row_index++)
        for (int column_index = 0; column_index < column; column_index++)
            if (matrix[row_index][column_index] != 0)
            {

                show_MST[0][non_zero] = row_index;
                show_MST[1][non_zero] = column_index;
                show_MST[2][non_zero] = matrix[row_index][column_index];

                non_zero++;
            }
}

void enter_matrix()
{
    int matrix[N][N];
    int row, column;

    cout << "Enter the number of row and column : ";
    cin >> row >> column;

    if (row != column)
    {
        cout << "For the triangular matrix row and column should be same!\nTry to enter data again.\n";
        return;
    }

    cout << "Eneter the Matrix: \n";

    for (int row_index = 0; row_index < row; row_index++)
        for (int column_index = 0; column_index < column; column_index++)
        {
            cin >> matrix[row_index][column_index];
        }

    int show_MST[3][N];
    
    count_MST(matrix, show_MST, row, column, floor(row * (row + 1) / 2));
    print_MST(show_MST, floor(row * (row + 1) / 2));
}

int main()
{
    int choise = 1;
    while (choise != 0)
    {
        cout << "------------------------------\n";
        cout << "\tChoose one option\n";
        cout << "1- Upper triangular matrices\n";
        cout << "2- Lower triangular matrices\n";
        cout << "0- Exit\n";
        cout << "------------------------------\n";
        cout << "Enter your choice : ";
        cin >> choise;
        cout << "------------------------------\n";
        switch (choise)
        {
        case (1):
            enter_matrix();
            break;
                
        case (2):
            enter_matrix();
            break;
                
        case (0):
            cout << "Program Exiting.....";
            break;
                
        default:
            cout << "This is not the correct choice!\n";
            break;
        }
    }

   return 0;
}
