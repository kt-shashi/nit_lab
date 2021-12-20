// 13. For all non-negative values of m and n, the Ackerman function is defined as:
//               { n + 1 if m=0
// Ack(m, n) =   { Ack(m-1, 1) if m≠0 but n=0
//               {  Ack(m-1, Ack(m, n-1)) if m≠0 and n≠0
// Write a recursive C function to implement Ack(m, n).
#include <stdio.h>
int Ack(int m, int n)
{
    if (m == 0)
      return n + 1;
    
    else if((m > 0) && (n == 0))
      return Ack(m - 1, 1);
    
    else if((m > 0) && (n > 0))
      return Ack(m - 1, Ack(m, n - 1));
}

void main()
{
   int A,n,m;
    printf("Eneter the value of m & n : ");
     scanf("%d %d",&m,&n);
    
    A = Ack(m, n);
    printf("-------------------------------------\n");  
     printf("Voalue of function Ack(m,n) : %d",A);
    printf("\n-------------------------------------");  
}
