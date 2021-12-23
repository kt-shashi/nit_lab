#include <stdio.h>

int calculator(int a, int b, int choice)
{

    int result = 0;

    switch (choice)
    {
    case 1:
        result = a + b;
        break;
    case 2:
        result = a - b;
        break;
    case 3:
        result = a * b;
        break;
    case 4:
        if (b != 0)
            result = a / b;
        break;
    default:
        result = -1;
    }
    return result;
}

int main()
{

    int a, b, choice;

    // user input
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("\n1.Addition\n2.Subtraction\n3.Multiply\n4.Divide");
    printf("\nEnter choice: ");
    scanf("%d", &choice);

    // Output
    if (choice >= 1 && choice <= 4)
        printf("Output: %d", calculator(a, b, choice));
    else
        printf("Invalid input");
    return 0;
}
