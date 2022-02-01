// * 
// * * 
// * * * 
// * * * * 
// * * * * *

#include <stdio.h>

int main()
{
    // Declaration
    int n = 5, i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}
