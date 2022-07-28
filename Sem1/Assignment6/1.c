// Compute power of a number
#include <stdio.h>

int power(int base, int exponent)
{
    // Base condition
    if (exponent == 0)
        return 1;
    int previousResult = power(base, (exponent - 1));
    return base * previousResult;
}

int main()
{
    int b, e;
    // User input
    printf("Enter base: ");
    scanf("%d", &b);
    printf("Enter exponent: ");
    scanf("%d", &e);
    // Output
    printf("%d to the power %d is %d", b, e, power(b, e));
    return 0;
}
