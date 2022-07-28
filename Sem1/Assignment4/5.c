// find the second largest element in an array

#include <stdio.h>
#include <limits.h>
#define SIZE 50

int main()
{
    // Declaration
    int n, a[SIZE], max = INT_MIN, second_max, i;

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
        if (a[i] > second_max && a[i] < max)
            second_max = a[i];
        else if (a[i] > max)
        {
            second_max = max;
            max = a[i];
        }
    }

    // Output
    printf("\nSecond Max element: %d", second_max);

    return 0;
}