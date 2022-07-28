#include <stdio.h>
void main()
{
    int num1, num2, sum1 = 0, sum2 = 0, i;
    printf("Enter a two positive integer: \n");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i < num1; ++i)
        if (num1 % i == 0)
            sum1 = sum1 + i;

    for (i = 1; i < num2; ++i)
        if (num2 % i == 0)
            sum2 = sum2 + i;

    if ((sum1 == num2) && (sum2 == num1))
        printf("%d and %d are amicable numbers.", num1, num2);

    else
        printf("These two number are not amicable numbers.");
}
