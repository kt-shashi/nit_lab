// find the sum of all elements of the array

#include <stdio.h>
#define SIZE 50

int main()
{
    // Declaration
    int n, a[SIZE], sum = 0, i;

    // User input
    printf("Enter size of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Find sum
    for (i = 0; i < n; i++)
        sum += a[i];

    // Output
    printf("\nSum of all elements of Array: %d", sum);

    return 0;
}
