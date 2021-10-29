// Program to find area of a circle

#include <stdio.h>

int main()
{

    // User input
    float r; // Declaration
    printf("Enter radius: \n");
    scanf("%f", &r);

    // Conversion
    float area = 3.14 * r * r;

    // Output
    printf("Area = %0.2funit sq.\n", area);

    return 0;
}
