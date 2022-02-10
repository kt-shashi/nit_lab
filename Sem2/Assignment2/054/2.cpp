// Write a program in C to read values in a matrix, display it and also display the
// corresponding indices of the 1D array, for both row major order and column major order.
#include <bits/stdc++.h>
using namespace std;
#define N 100
void print_row_major(int array[N][N], int no_row, int no_column)
{
    cout << "\nRow major representation-\n";
    for (int row = 0; row < no_row; row++)
    {
        for (int column = 0; column < no_column; column++)
            cout << array[row][column] << " ";
        cout << "\n";
    }
}
void print_column_major(int array[N][N], int no_row, int no_column)
{
    cout << "\nColumn major representation-\n";

    for (int column = 0; column < no_column; column++)
    {
        for (int row = 0; row < no_row; row++)
            cout << array[row][column] << " ";
        cout << "\n";
    }
}
void find_order(int array[N][N], int row, int column)
{
    int find_row, find_column;

    cout << "\nEnter the indexe for find order's : ";
    cin >> find_row >> find_column;

    cout << "Element : " << array[find_row - 1][find_column - 1] << "\n";
    int choice = -1;
    while (choice)
    {
        cout << "-----------------------------\n";
        cout << "\tChoose one option\n";
        cout << "1- Row Major order.\n";
        cout << "2- Column Major order.\n";
        cout << "0- Exit\n";
        cout << "-----------------------------\n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case (1):
            cout << "Row Major order : " << (find_row - 1) * column + find_column << "\n";

            break;
        case (2):
            cout << "Column Major order : " << (find_column - 1) * row + find_row << "\n";
            break;
        case (0):
            cout << "Exiting program....\n";
            break;
        default:
            cout << "This is not the correct choice! Try again.\n";
            break;
        }
    }
}
int main()
{
    int r, c;
    cout << "Enter number of row : ";
    cin >> r;
    cout << "Enter number of column : ";
    cin >> c;
    int array[N][N];
    cout << "Enter Matrix elements : \n";
    for (int row = 0; row < r; row++)
        for (int column = 0; column < c; column++)
            cin >> array[row][column];
    cout << "-------------------------------";
    print_row_major(array, r, c);
    cout << "-------------------------------";
    print_column_major(array, r, c);
    cout << "-------------------------------";
    find_order(array, r, c);
    cout << "-------------------------------";
    return 0;
}
