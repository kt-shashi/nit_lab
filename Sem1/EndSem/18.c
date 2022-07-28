#include <stdio.h>
void getMatrix(int matrix[][10], int row, int column)
{
    int i, j;
    for (i = 0; i < row; ++i)
        for (j = 0; j < column; ++j)
            scanf("%d", &matrix[i][j]);
}
void multiply(int f[][10], int s[][10], int result[][10], int r1, int c1, int r2, int c2)
{
    int i, j, k;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
            result[i][j] = 0;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
            for (k = 0; k < c1; ++k)
                result[i][j] += f[i][k] * s[k][j];
}
void display(int result[][10], int row, int column)
{
    int i, j;
    printf("\nMultiply of two Matrix:\n");
    for (i = 0; i < row; ++i)
        for (j = 0; j < column; ++j)
        { printf("%d  ", result[i][j]);
            if (j == column - 1)
                printf("\n");
        }
}
int main()
{
    int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;
    printf("Enter rows and column for the first matrix: \n");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and column for the second matrix: \n");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2)
    { printf("These matrix can not be Multiply.\n");
        return 0;
    }
    printf("\nEnter elements of first matrix :\n");
    getMatrix(first, r1, c1);
    printf("\nEnter elements of second matrix :\n");
    getMatrix(second, r2, c2);
    multiply(first, second, result, r1, c1, r2, c2);
    display(result, r1, c2);
}
