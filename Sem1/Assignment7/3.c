// program in C to sort an array using pointer
#include <stdio.h>
#define SIZE 50

void sort(int n, int *ptr)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (*(ptr + j) < *(ptr + i))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }

    // output
    printf("Sorted Array : ");
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}

int main()
{
    int n, i, a[SIZE];

    // user input
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter the elements : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sort(n, a);

    return 0;
}