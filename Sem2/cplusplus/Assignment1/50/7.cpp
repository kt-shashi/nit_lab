// Assignment 1 Program 7
// Name: Shashi Kant
// Roll: 2021PGCACA050

#include <iostream>

using namespace std;

// non-recursive function for computing sum of digits
int findSumIterative(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int r = n % 10;
        sum += r;
        n /= 10;
    }
    return sum;
}

// recursive function for computing sum of digits
int findSumIterativeRecursive(int n)
{
    // Base step
    if (n == 0)
        return 0;

    int previousSum = findSumIterativeRecursive(n / 10);
    int currentSum = previousSum + (n % 10);

    return currentSum;
}

int main()
{
    int n;

    // User input
    cout << "Enter Number to find sum of it's digits: ";
    cin >> n;

    // Output
    cout << "Sum of digits using Iterative method: " << findSumIterative(n) << endl;
    cout << "Sum of digits using Iterative method: " << findSumIterativeRecursive(n) << endl;

    return 0;
}
