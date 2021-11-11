// calculator using switch case statement

#include <stdio.h>

int main()
{
    // Declaration
    int choice, n1, n2;

    // User input
    printf("Calculator\n\n1. Add\n2. Subtract\n");
    printf("3. Multiply\n4. Divide\nEnter choice: ");
    scanf("%d", &choice);
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    // Decision Making
    switch (choice)
    {
    case 1:
        printf("%d + %d = %d", n1, n2, n1 + n2);
        break;
    case 2:
        printf("%d - %d = %d", n1, n2, n1 - n2);
        break;
    case 3:
        printf("%d * %d = %d", n1, n2, n1 * n2);
        break;
    case 4:
        printf("%d / %d = %.2f", n1, n2, (float)n1 / n2);
        break;
    default:
        printf("Invalid input.");
    }

    return 0;
}
