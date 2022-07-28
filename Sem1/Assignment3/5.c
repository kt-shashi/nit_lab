// Program to print prime numbers in between 1 and 100

#include <stdio.h>

int main()
{
    // Declaration
    int i, j, flag;

    printf("Prime numbers from 1 to 100\n", i);

    // Iterate from 1 to 100
    for (i = 2; i <= 100; i++)
    {
        flag = 1;
        // Check for prime
        for (j = 2; j < i; j++)
            if (i % j == 0)
                flag = 0;

        if (flag)
            printf("%d ", i);   // Output
    }
    return 0;
}
