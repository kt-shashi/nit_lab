#include <stdio.h>
void main()
{
    int index, sum, t;
    char num[1000];
    printf("Input an integer: \n");
    scanf("%s", num);
    sum = index = 0;

    while (num[index] != '\0')
    {
        t = num[index] - '0';
        sum = sum + t;
        index++;
    }

    printf("Sum of digits of %s = %d\n", num, sum);
}
