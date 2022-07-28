/**
 * ASSIGNMENT – 1
 * Q : 6
 * Reg. No : 2021PGCACA054
 * Name : Shubhanshu Singh
 **/

#include <iostream>
using namespace std;

void Print_Pose(int *arr, int n, int pos)
{

    int Left_Count = 0, Right_Count = 0;

    // Count elements less than element at pos index in the left sub array
    for (int index = 0; index < pos; inxdex++)
        if (arr[i] < arr[pos])
            Left_Count++;

    // Count elements greater than element at pos index in the right sub array
    for (int index = pos + 1; index < n; index++)
        if (arr[i] > arr[pos])
            Right_Count++;

    // Output
    cout << "left < array[pos] = " << Left_Count;
    cout << ", right > array[pos] = " << Right_Count;
}

int main()
{

    int n;
    // User input
    cout << "-------------------------\n";
    cout << "Enter number of elements : ";
    cin >> n;

    // Creating the array by using pointer
    int *arr = new int[n];
    cout << "Enter the elements : ";
    for (int index = 0; index < n; index++)
        cin >> arr[index];
    cout << "-------------------------\n";

    int pos;
    cout << "Enter position: ";
    cin >> pos;

    cout << "-------------------------\n";
    Print_Pose(arr, n, pos-1);
    cout << "\n-------------------------";

    // Deallocating memory
    delete[] p;
}
