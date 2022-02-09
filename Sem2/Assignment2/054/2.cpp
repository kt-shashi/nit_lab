#include <bits/stdc++.h>
using namespace std;
#define N 100
void print_row_major(int array[N][N], int no_row, int no_column)
{
    cout << "\nRow major representation-\n";
    for (int row = 0; row < no_row; row++)
        for (int column = 0; column < no_column; column++)
            cout << array[row][column] << " ";
}
void print_column_major(int array[N][N], int no_row, int no_column)
{
    cout << "\nColumn major representation-\n";

    for (int column = 0; column < no_column; column++)
        for (int row = 0; row < no_row; row++)
            cout << array[row][column] << " ";
}
void find_order(int array[N][N],int row,int column)
{
    int find_row, find_column;

    cout << "\nEnter the indexe for find order's : ";    
    cin >> find_row >> find_column;

    cout<<array[find_row-1][find_column-1]<<"\n";
    cout << "Row Major order : " << (find_row - 1) * sizeof(int) + find_column << "\n";
    cout << "Column Major order : " << (find_column - 1) * sizeof(int) + find_row;
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
    cout << "\n-------------------------------";
    print_row_major(array, r, c);
    cout << "\n-------------------------------";
    print_column_major(array, r, c);
    cout << "\n-------------------------------";
    find_order(array,r,c);
    cout << "\n-------------------------------";
    return 0;
}
