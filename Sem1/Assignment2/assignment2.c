// Program to input temperature in Celsius and find the temperature in Fahrenheit.

#include <stdio.h>

int main()
{

    // User input
    float c; // Declaration
    printf("Enter temperature in Celsius: \n");
    scanf("%f", &c);

    // Convert ot Fahrenheit
    float f = (c * ((float)9 / 5)) + 32;

    // Output
    printf("Temperature in Fahrenheit: %0.2f", f);

    return 0;
}