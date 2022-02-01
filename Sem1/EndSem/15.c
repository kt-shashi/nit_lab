#include <stdio.h>
int f(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;

    return f(n - 1) + f(n - 2);
}
void main()
{
    int n, i;

    printf("Enter the number of term for fibonacci sequence : \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        printf("%d ", f(i));
}
