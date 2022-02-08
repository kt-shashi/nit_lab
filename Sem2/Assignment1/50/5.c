#include <stdio.h>
int main()
{

    // user input
    int i, j, k, r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int a1[r][c], a2[r][c], multiply[r][c];
    printf("Enter first Matrix: \n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a1[i][j]);
    printf("Enter second Matrix: \n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a2[i][j]);

    // Find multiplication
    int sum;
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            sum = 0;
            for (k = 0; k < r; ++k)
                sum = sum + *(*(a1 + i) + k) * *(*(a2 + k) + j);
            *(*(multiply + i) + j) = sum;
        }

    // Output
    printf("Multiplication of both matrices: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d ", *(*(multiply + i) + j));
        printf("\n");
    }
}

