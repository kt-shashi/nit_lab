#include <stdio.h>
int Prime(int i)
{
	int j;
    if (i == 1)
        return 0;

    for ( j = 2; j < i; j++)
        if (i % j == 0)
            return 0;

    return 1;
}
void main()
{
	int i;
    printf("Twin Primes between 1 to 200 are: \n");
    for ( i = 2; i <= 200; i++)
        if (Prime(i) && Prime(i + 2))
            printf("(%d,%d) ", i, i + 2);
}
