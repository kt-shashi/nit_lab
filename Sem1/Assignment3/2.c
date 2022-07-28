// Check a user given number is odd or even

#include <stdio.h>

int main()
{
    // Declaration
    int n;

    // User input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check odd or even
    if (n % 2 == 0)
        printf("%d is even.", n); // Output
    else
        printf("%d is odd.", n); // Output

    return 0;
}
