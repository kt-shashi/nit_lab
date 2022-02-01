#include <stdio.h>
int r = 2, c = 2, sum;
int WeeklySalesOfEachStore(int a[r][c])
{
    int i, j;
    printf("\nTotal weekly sales of stores - ");
    for (i = 0; i < r; i++)
    {
        sum = 0;
        for (j = 0; j < c; j++)
            sum = sum + a[i][j];
        printf("\nStore %d : %d", i + 1, sum);
    }
}
int WeeklySalesOfEachDepartment(int a[r][c])
{
    int i, j;
    printf("\nTotal weekly sales of departments - ");
    for (j = 0; j < c; j++)
    {
        sum = 0;
        for (i = 0; i < r; i++)
            sum = sum + a[i][j];
        printf("\nDepartment %d : %d", j + 1, sum);
    }
}
int WeeklySalesOfTheChain(int a[r][c])
{
    int i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            sum = sum + a[i][j];
    printf("\nTotal weekly sales of the chain : %d", sum);
}
void main()
{
    int a[r][c], i, j;
    for (i = 0; i < r; i++)
    {
        printf("\nFor store no.%d sales\n", i + 1);
        for (j = 0; j < c; j++)
        {
            printf("Input weekly sale of department %d :", j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    WeeklySalesOfEachStore(a);
    WeeklySalesOfEachDepartment(a);
    WeeklySalesOfTheChain(a);
}
