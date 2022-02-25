// Assignment 1 Program 6
// Name: Shashi Kant
// Roll: 2021PGCACA050

#include <iostream>
using namespace std;

void printElements(int *p, int n, int pos)
{

    int leftCount = 0, rightCount = 0;

    for (int i = 0; i < pos; i++)
    {
        if (p[i] < p[pos])
            leftCount++;
    }

    for (int i = pos + 1; i < n; i++)
    {
        if(p[i]>p[pos])
            rightCount++;
    }

    cout << "Number of elements lesser than " << p[pos] << " in left sub array = " << leftCount << endl;
    cout << "Number of elements greater than " << p[pos] << " in right sub array = " << rightCount << endl;
}

int main()
{

    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> p[i];
    }

    int pos;
    cout << "Enter position: ";
    cin >> pos;
    printElements(p, n, pos);

    delete[] p;
}