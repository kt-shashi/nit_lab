#include <stdio.h>
int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
        f = f * i;

    return f;
}

void main()
{
    int n, r, nCr;
    printf("Enter the value of n and r to find nCr : \n");
    scanf("%d %d", &n, &r);
    if (n > 0 && n > r)
    {
        nCr = fact(n) / (fact(r) * fact(n - r));
        printf("Value of %dC%d = %d", n, r, nCr);
    }
    else
        printf("Your input value is not appreciate for nCr");
}
