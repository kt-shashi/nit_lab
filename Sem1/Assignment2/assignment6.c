// Write a program to enter a 3 digit number from keyboard. Add 7 to the
// number and then divide it by 3. Now, the modulus of that number is taken
// with 5 and then multiply the resultant value by 5. Display the final result.

#include <stdio.h>

int main()
{

    // User input
    int n; // Declaration
    printf("Enter a 3 digit number: \n");
    scanf("%d", &n);

    // Operations
    int result = (((n + 7) / 3) % 5) * 5;

    // Output
    printf("Result = %d\n", result);

    return 0;
}
