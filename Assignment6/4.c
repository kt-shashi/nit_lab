// perform sum of elements of an array

#include <stdio.h>
#define SIZE 50

int findSum(int a[5], int n)
{
    int sum = 0,i;
    for (i = 0; i < n; i++)
        sum = sum + a[i];
    return sum;
}

void main()
{
    int n, a[SIZE],i;
    // User input
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for ( i = 0; i < n; i++)
        scanf("%d", &a[i]);
    // Output
    printf("Sum: %d", findSum(a, n));
}
