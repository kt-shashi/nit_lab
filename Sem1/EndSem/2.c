#include <stdio.h>
void main()
{
    int n, sum = 0,i,j;
    printf("Enter the value N in 1+(1+2)+(1+2+3)+.....+(1+2+3+4+......+N): \n");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
        for ( j = 1; j <= i; j++)
            sum = sum + j;

    printf("Sum : %d", sum);
}
