// find the sum of digits of a given integer number

#include <stdio.h>

int main()
{
    // Declaration
    int n, sum = 0, remainder, copy_n;

    // User input
    printf("Enter a number: ");
    scanf("%d", &n);
    copy_n = n;

    // Find sum
    while (n)
    {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }

    // Output
    printf("Sum of %d is %d.", copy_n, sum);

    return 0;
}
