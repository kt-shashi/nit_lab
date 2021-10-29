// Take input of some length in meter and covert it to feet and inches

#include <stdio.h>

int main()
{

    // User input
    float l; // Declaration
    printf("Enter length (in meter): \n");
    scanf("%f", &l);

    // Conversion
    float inch = 39.37 * l;
    float feet = 3.281 * l;

    // Output
    printf("%0.2f inch, %0.2f feet\n", inch, feet);

    return 0;
}