#include <stdio.h>
void main()
{
	int n,i;
    printf("Perfect numbers in between 1 and 100: \n");

    for ( n = 1; n <= 100; n++)
    {
        int sum = 1;
        for ( i = 2; i * i <= n; i++)
            if (n % i == 0)
            {
                if (i * i != n)
                    sum = sum + i + n / i;
                else
                    sum = sum + i;
            }

        if (sum == n && n != 1)
            printf("%d ", n);
    }
}
