// Q-2 : Write a program in C to read values in a matrix, display it and also display the
// corresponding indices of the 1D array, for both row major order and column major order.
#include <bits/stdc++.h>
using namespace std;
#define N 100

void print_row_major(int array[N][N], int no_row, int no_column)
{  
    cout << "\nRow major representation-\n";

    for (int row = 0; row < no_row; row++)
        for (int column = 0; column < no_column; column++)
          cout<<row*no_row+column+1<<" - "<<array[row][column]<<"\n";
}

void print_column_major(int array[N][N], int no_row, int no_column)
{
    cout << "\nColumn major representation-\n";
    
    for (int column = 0; column < no_column; column++)
        for (int row = 0; row < no_row; row++)
          cout<<column*no_column+row+1<<" - "<<array[row][column]<<"\n";
}

int main()
{
    int no_row, no_col;

    cout << "Enter number of row : ";
    cin >> no_row;

    cout << "Enter number of column : ";
    cin >> no_col;

    int array[no_row][N];
    cout << "Enter Matrix elements : \n";

    for (int row = 0; row < no_row; row++)
        for (int column = 0; column < no_col; column++)
            
            cin >> array[row][column];

    int choice = -1;
    while (choice)
    {
        cout << "-----------------------------\n";
        cout << "\tChoose one option\n";
        cout << "1- Row Major Order.\n";
        cout << "2- Column Major Order.\n";
        cout << "0- Exit\n";
        cout << "-----------------------------\n";
        cout << "Enter your choice : ";

        cin >> choice;
        cout << "-----------------------------\n";

        switch (choice)
        {
        case (1):
            print_row_major(array, no_row, no_col);
            break;

        case (2):
            print_column_major(array, no_row, no_col);
            break;

        case (0):
            cout << "Exiting program.....";
            break;

        default:
            cout << "This is not the correct choice! Try again.\n";
            break;
        }
    }
    cout << "\nProgram ended!";
    return 0;
}
