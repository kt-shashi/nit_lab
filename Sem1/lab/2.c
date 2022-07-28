#include <stdio.h>

int main()
{

	// declaration
    int a, b, c, largest;

	// user input
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);

    largest = a > b ? (a > c ? a : c) : (b > c ? b : c);

	// output
    printf("The largest number is : %d", largest);

    return 0;
}
