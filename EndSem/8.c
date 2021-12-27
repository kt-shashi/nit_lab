#include <stdio.h>
void main()
{
    int n, bNum[32], r = 0, j;
    printf("Enter the decimal number to find binary :");
    scanf("%d", &n);
    int temp = n, i = 0;

    while (n > 0)
    {
        bNum[i] = n % 2;
        if (bNum[i] == 1)
            r++;
        n = n / 2;	
        i++;
    }

    printf("Binary of %d : ", temp);
    for (j = i - 1; j >= 0; j--)
        printf("%d", bNum[j]);
    printf("\nNumber of 1's : %d", r);
}
