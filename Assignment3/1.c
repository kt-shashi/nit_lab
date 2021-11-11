// Program to find relation between two integer using (=,<,>)

#include <stdio.h>

int main()
{
    // Declaration
    int n1, n2;

    // User input
    printf("Enter 1st number: ");
    scanf("%d", &n1);
    printf("Enter 2nd number: ");
    scanf("%d", &n2);

    // Find relation
    if (n1 > n2)
        printf("%d is greater than %d", n1, n2);
    else if (n1 < n2)
        printf("%d is smaller than %d", n1, n2);
    else if (n1 == n2)
        printf("%d is equal to %d", n1, n2);

    return 0;
}
