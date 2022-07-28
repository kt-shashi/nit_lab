// Program to in place merge two sorted arrays
#include <stdio.h>
int main()
{
    int n, m, a[10], b[10], c[100], i, j, k;
    // user input
    printf("The size of 1st array: ");
    scanf("%d", &n);
    printf("The size of 2nd array: ");
    scanf("%d", &m);
    printf("Enter elements of 1st array: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter elements of 2nd array: \n");
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    // Merge
    i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while (i < n)
        c[k++] = a[i++];
    while (j < m)
        c[k++] = b[j++];

    // output
    for (i = 0; i < n + m; i++)
        printf("%d ", c[i]);
    return 0;
}
