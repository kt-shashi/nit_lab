// delete an element at desired position from an array

#include <stdio.h>
#define SIZE 50

int main()
{

    // Declaration
    int n, a[SIZE], index, i;

    // User input
    printf("Enter size of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter desired position to delete\n");
    printf("(Element 1 has index 1): ");
    scanf("%d", &index);

    // Deleting index
    for (i = index - 1; i < n - 1; i++)
        a[i] = a[i + 1];

    // Output
    printf("\nUpdated array: ");
    for (i = 0; i < n - 1; i++)
        printf("%d ", a[i]);

    return 0;
}