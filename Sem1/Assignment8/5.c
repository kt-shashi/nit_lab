#include <stdio.h>

int main()
{
    int a[5][5], i, j;
    int rt[5]={0,0,0,0,0}, ct[5]={0,0,0,0,0};
    // User input
    for (i = 0; i < 5; i++)
    {
        printf("Enter row %d: ",i+1);
        for (j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    }
    // Find sum
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
        {
            rt[i] += a[i][j];
            ct[i] += a[j][i];
        }
    // Output
    printf("\nRow Total :");
    for (i = 0; i < 5; i++)
        printf("%d ", rt[i]);
    printf("\nColumn Total :");
    for (i = 0; i < 5; i++)
        printf("%d ", ct[i]);
}
