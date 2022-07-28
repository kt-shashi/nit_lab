#include <stdio.h>

// Swap by value
void swapv(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping by values a = %d, b = %d\n", a, b);
}
// Swap by reference
void swapr(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    //User input
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Before swapping the values a = %d, b = %d\n", a, b);
    // Swap
    swapv(a, b);
    swapr(&a, &b);
    printf("After swapping by reference a = %d, b = %d\n", a, b);
    return 0;
}
