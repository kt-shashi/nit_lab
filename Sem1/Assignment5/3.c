// Check if two given matrices are identical.

#include <stdio.h>

int main()
{
    int i, j, c = 0, m, n;
    // user input
    printf("Enter rows and columns:");
    scanf("%d%d", &m, &n);
    int a[m][n], b[m][n];
    printf("Enter the element of 1st matrix: \n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("Enter the element of 2nd matrix: \n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    // check for identity matrix
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] != b[i][j])
            {
                c = 1;
                break;
            }
    // output
    if (c)
        printf("Matrices are not identical.");
    else
        printf("Matrices are identical");
    return 0;
}
