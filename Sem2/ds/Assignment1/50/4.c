#include <stdio.h>

int main()
{
	
    int i, j, r, c;
	// User input
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d",&c);
    printf("Enter first Matrix: \n");
    int a1[r][c], a2[r][c], sum[r][c];
	for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a1[i][j]);
    printf("Enter second Matrix: \n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a2[i][j]);

	// Find sum
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            *(*(sum + i) + j) = *(*(a1 + i) + j) + *(*(a2 + i) + j);

	// Output
    printf("Addition of both matrices: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d ", *(*(sum + i) + j));
        printf("\n");
    }
    
}

