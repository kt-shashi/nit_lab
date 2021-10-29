// Program to calculate sum, difference, multiplication, division and mod of two integers

#include <stdio.h>

int main()
{

    // User input
    int n1, n2; // Declaration
    printf("Enter 2 integers: \n");
    scanf("%d %d", &n1, &n2);

    // Output
    printf("Addition: %d\n", n1 + n2);
    printf("Subtraction: %d\n", n1 - n2);
    printf("Multiplication: %d\n", n1 * n2);
    printf("Division: %d\n", n1 / n2);
    printf("Mod: %d\n", n1 % n2);

    return 0;
}