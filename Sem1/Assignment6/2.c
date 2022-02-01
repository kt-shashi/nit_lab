// Convert a decimal number into its binary form
#include <stdio.h>
#define SIZE 50
int decimalToBinary(int decimal)
{
    int index = 0,i;
    int binary[SIZE];
    // Store binary in array
    while (decimal > 0)
    {
        if (decimal % 2 == 0)
            binary[index++] = 0;
        else
            binary[index++] = 1;
        decimal = decimal / 2;
    }
    // Convert array to number
    int binaryNumber = 0;
    for (i = index - 1; i >= 0; i--)
        binaryNumber = (binaryNumber * 10) + binary[i];
    return binaryNumber;
}
int main()
{
    int decimal;
    // User input
    printf("Enter a Decimal number: ");
    scanf("%d", &decimal);
    // Output
    printf("Binary equivalent of %d is %d", decimal, decimalToBinary(decimal));
    return 0;
}
