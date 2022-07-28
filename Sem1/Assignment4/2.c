// find the maximum and minimum element in an array

#include <stdio.h>
#include <limits.h>
#define SIZE 50

int main()
{
    // Declaration
    int n, a[SIZE], max = INT_MIN, min = INT_MAX, i;

    // User input
    printf("Enter size of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Find max and min
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    // Output
    printf("\nMax element: %d\n", max);
    printf("Min element: %d", min);

    return 0;
}
