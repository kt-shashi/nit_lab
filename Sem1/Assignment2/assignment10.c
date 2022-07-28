#include <stdio.h>

int main()
{
    int a = 1, b = 3;
    b = a++ + a++ + a++ + a++ + a++;
    printf("a = %d \n b = %d", a, b);
    return 0;
}