// Assignment 1 Program 4
// Name: Shashi Kant
// Roll: 2021PGCACA050

#include <iostream>
#include <climits>

#define MAXSIZE 10

using namespace std;

// Count duplicate values
int countDuplicates(int(&a)[MAXSIZE], int &n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            // Check if elemeent at ith index is present more than 1 time
            // If yes, then increment count and remove all occurances of ith index element
            if (a[i] == a[j] && i != j && a[j] != INT_MIN)
            {
                flag = 1;
                a[j] = INT_MIN;
            }
        }
        if (flag)
            count++;
    }
    return count;
}

int main()
{
    int a[MAXSIZE], n;

    // User input
    cout << "Enter number of elements : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
    }

    // Output
    cout << "There are " << countDuplicates(a, n) << " numbers that have duplicate values" << endl;

    return 0;
}
