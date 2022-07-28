//       *
//     * * *
//    * * * * *
//  * * * * * * *
// * * * * * * * * *

#include <stdio.h>

int main()
{
    // Declaration
    int n = 5, i, j, k, l;

    for (i = 0; i < n; i++)
    {
    	// Whitespace
        for (k = n - i; k > 0; k--)
            printf(" "); 
		// First triangle
        for (j = 0; j <= i; j++)
            printf("*");

        if (i == 0)
        {
            printf("\n");
            continue;
        }
		// Second Triangle
        for (l = 1; l <= i; l++)
            printf("*");
        printf("\n");
    }
    return 0;
}
