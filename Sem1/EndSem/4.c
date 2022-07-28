#include <stdio.h>
void main()
{
    int rem, sum, temp, tnum, i;
    printf("The 3-digit Armstrong numbers are: \n");
    for (i = 100; i <= 999; i++)
    {
        tnum = i;
        sum = 0;
        while (tnum > 0)
        {
            rem = tnum % 10;
            temp = rem * rem * rem;
            sum = temp + sum;
            tnum = tnum / 10;
        }
        if (i == sum)
            printf("%d ", sum);
    }
}
