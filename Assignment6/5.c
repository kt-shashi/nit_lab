#include <stdio.h>

int fact(int n)
{
    // Base condition
    if (n < 1)
        return 1;

    int previousFact = fact(n - 1);

    return n * previousFact;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d is %d!", n, fact(n));
}