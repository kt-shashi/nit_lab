// Armstrong number

#include <stdio.h>

int main()
{
    // Declaration
    int i, armstrong, remainder, copy1, copy2;

    printf("armstrong numbers between 100 and 999\n");

	// Iterate over 101 to 998
    for (i = 101; i < 999; i++)
    {
        copy1 = i;
        copy2 = i;
        armstrong = 0;
        while (copy1)
        {
            remainder = copy1 % 10; 
            armstrong += remainder * remainder * remainder;
            copy1 /= 10;
        }
        if (armstrong == copy2)
            printf("%d ", armstrong);	// Output
    }

    return 0;
}
