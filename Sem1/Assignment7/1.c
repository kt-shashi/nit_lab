// add two user given number using pointer

#include <stdio.h>

int add(int *p, int *q)
{
    return *p + *q;
}

int main()
{
    int a, b;

    // Input
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter first number:");
    scanf("%d", &b);

    // output
    printf("Sum = %d", add(&a, &b));
}