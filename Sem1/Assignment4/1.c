// Copy the contents of one array into
// another in the reverse order

#include <stdio.h>
#define SIZE 50

int main()
{
    // Declaration
    int n, a1[SIZE], a2[SIZE], i, j;

    // User input
    printf("Enter size of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a1[i]);
    }

    // Copy in reverse order
    for (i = n - 1, j = 0; i >= 0, j < n; i--, j++)
        a2[j] = a1[i];

    // Print array with reverse elements
    printf("\nElements in reverse order from 2nd array: \n");
    for (i = 0; i < n; i++)
        printf("%d ", a2[i]);

    return 0;
}
