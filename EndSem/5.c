#include <stdio.h>
void main()
{
    int i, j, num, Prime;
    printf("Enter any number to print Prime Factors: ");
    scanf("%d", &num);
    printf("All Prime Factors of %d are: ", num);
    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            Prime = 1;
            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    Prime = 0;
                    break;
                }
            }
            if (Prime == 1)
                printf("%d ", i);
        }
    }
}
