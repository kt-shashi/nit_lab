// Program for nCr Calculation

#include <stdio.h>

int factorial(int n)
{
    // Declaration
    int i, fact = 1; // Fact variable stores factorial

    // Iterating over 1-n to find factorial till n
    for (i = 2; i <= n; i++)
        fact *= i;

    return fact;
}

int main()
{
    // Declaration
    int n, r;

    // User Input
    printf("Enter 'n': ");
    scanf("%d", &n);
    printf("Enter 'r': ");
    scanf("%d", &r);

    // Get factorial of n, r and n-r
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nr = factorial(n - r);

    // Calculate combination
    float combination = (float)fact_n / (fact_r * fact_nr);

    // Output
    printf("%dC%d = %0.2f", n, r, combination);

    return 0;
}
