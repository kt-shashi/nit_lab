// Assignment 8
// Question 1
// 2021pgcaca050

#include <iostream>
#define SIZE 50
using namespace std;

int main()
{
    int a[SIZE];
    int n, i;

    cout << "Enter the number of elements: " << endl;
    cin >> n;
    cout << "Enter the index number in which you want to add an element: " << endl;
    cin >> i;

    try
    {
        if (i >= n)
            throw i;
        else
        {
            cout << "Enter data to insert: ";
            cin >> a[i];
        }
    }
    catch (int i)
    {
        cout << "Out-of-bounds exception" << endl;
    }

    return 0;
}
