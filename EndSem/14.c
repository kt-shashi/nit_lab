// 14. Write a program to find the G.C.D of two numbers using recursion.
#include <stdio.h>
int GCD(int n1, int n2) {
    if (n2 != 0)
        return GCD(n2, n1 % n2);
    else
        return n1;
}
void main()
{
   int n1, n2;
    printf("Enter two positive integers: ");
     scanf("%d %d", &n1, &n2);
    
    printf("-------------------------------------\n");  
    printf("G.C.D of %d and %d is %d.", n1, n2, GCD(n1, n2));
    printf("\n-------------------------------------");  
}
//GCD : Greatest Common Divisor
//The HCF or GCD of two integers is the largest integer that can exactly divide both numbers (without a remainder).
