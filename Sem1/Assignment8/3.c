#include <stdio.h>
#define SIZE 50

void searchElement(int a[], int size, int n)
{
    int flag = 0, i;
    for (i = 0; i < size; i++)
        if (a[i] == n)
        {
            flag = 1;
            break;
        }
    if (flag)
        printf("Element found at position %d\n", i);
    else
        printf("Element not found.\n");
}
int main()
{
    int a[SIZE], size, n, i;
    // User input
    printf("Enter size of the array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter element you want to search: ");
    scanf("%d", &n);
    searchElement(a, size, n);
    return 0;
}
