// Program to swap adjacent elements of an array.

#include <stdio.h>

int main()
{
    int n, temp, i;

    // user input
    printf("Enter size of Array: ");
    scanf("%d", &n);
    printf("Enter elements of Array: \n");
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Swap
    for (i = 0; i < n - 1; i += 2)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    // Outpput
    printf("Array after swapping is \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}