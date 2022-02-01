// Program to Check the Number is Divisible by 9 and 27

#include <stdio.h>

int main()
{
    // Declaration
    int n;

    // User Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for divisibility
    if (n % 9 == 0 && n % 27 == 0)
        printf("%d is divisible by both 9 and 27", n); // Output
    else
        printf("%d is not divisible by both 9 and 27", n); // Output

    return 0;
}