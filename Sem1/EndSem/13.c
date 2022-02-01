#include <stdio.h>
int Ack(int m, int n)
{
    if (m == 0)
        return n + 1;

    else if ((m > 0) && (n == 0))
        return Ack(m - 1, 1);

    else if ((m > 0) && (n > 0))
        return Ack(m - 1, Ack(m, n - 1));
}

void main()
{
    int A, n, m;
    printf("Eneter the value of m & n : \n");
    scanf("%d %d", &m, &n);

    A = Ack(m, n);
    printf("Voalue of function Ack(m,n) : %d", A);
}
