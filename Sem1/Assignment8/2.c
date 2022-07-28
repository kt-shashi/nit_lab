#include <stdio.h>

int findPower(int x, int n)
{
    // base step
    if (n == 0)
        return 1;
    int smallOutput = findPower(x, n - 1);
    int output = x * smallOutput;
    return output;
}

int main()
{
    int n, p;
    // User input
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Enter it's power: ");
    scanf("%d", &p);
    // Output
    printf("%d to the power %d = %d", n, p, findPower(n, p));
    return 0;
}
