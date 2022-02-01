// Program to Transpose a Matrix.

#include <stdio.h>
int main()
{
    int m, n, i, j, matrix[10][10], transpose[10][10];

    // user input
    printf("Enter rows and columns:");
    scanf("%d%d", &m, &n);
    printf("Enter elements of the matrix: \n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // find transpose
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            transpose[j][i] = matrix[i][j];

    // output
    printf("Transpose of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }

    return 0;
}