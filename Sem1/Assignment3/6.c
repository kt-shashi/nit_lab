// reverse the digits of a given four digit positive integer number.

#include <stdio.h>

int main()
{
    // Declaration
    int n, reverse = 0, remainder, copy_n;

    // User input
    printf("Enter a number: ");
    scanf("%d", &n);
    copy_n = n;

    // Find sum
    while (n)
    {
        remainder = n % 10;
        reverse = (reverse * 10) + remainder;
        n /= 10;
    }

    // Output
    printf("Reverse of %d is %d.", copy_n, reverse);

    return 0;
}
