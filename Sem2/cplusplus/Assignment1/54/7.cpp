/**
 * ASSIGNMENT – 1
 * Q : 7
 * Reg. No : 2021PGCACA054
 * Name : Shubhanshu Singh
 **/

#include <iostream>
using namespace std;

// non-recursive function for computing sum of digits
int Find_Sum_Non_Recursive(int n)
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
int Find_Sum_Recursive(int n)
{
    // Base step
    if (n == 0)
        return 0;

    int Previous_Sum = Find_Sum_Recursive(n / 10);
    int Sum = Previous_Sum + (n % 10);
    return Sum;
}

int main()
{
    int n;
    cout << "---------------------------\n";
    cout << "Enter a integer : ";
    cin >> n;
    cout << "---------------------------\n";

    // Output
    cout << "Sum of digits using Iterative method : " << Find_Sum_Non_Recursive(n);
    cout << "\n---------------------------\n";
    cout << "Sum of digits using Iterative method : " << Find_Sum_Recursive(n);
    cout << "\n---------------------------";
    return 0;
}
