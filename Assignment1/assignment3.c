// Program to Swap Two Numbers

#include <stdio.h>

int main()
{
    // Initialization
    int n1 = 10, n2 = 20;

    printf("Before Swap- \n");
    printf("1st number: %d\n2nd number: %d\n", n1, n2);

    // Swap
    int temp = n1;
    n1 = n2;
    n2 = temp;

    printf("After Swap- \n");
    printf("1st number: %d\n2nd number: %d\n", n1, n2);

    return 0;
}
