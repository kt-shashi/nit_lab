#include <stdio.h>
#include <string.h>

int fact(int n)
{
    int i, fact = 1;
    for (i = n; n >= 1; n--)
        fact = fact * n;

    return fact;
}

int main()
{
    int n;
    printf("enter value of n: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d", n, fact(n));
}

