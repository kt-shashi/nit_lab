#include <stdio.h>

int sum(int n)
{
	// base condition
    if (n <= 1)
        return n;
        
    return n + sum(n - 1);
}

int main()
{

	// declaration
    int n;
    
    // user input
    printf("Enter N: ");
    scanf("%d", &n);

	// output
    printf("Sum from 1 to N is: %d", sum(n));

    return 0;
}
