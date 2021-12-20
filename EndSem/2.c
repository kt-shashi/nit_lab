// 2.Write a program to find the sum of the following series: 1 + (1+2) + (1+2+3) +…………….+ (1+2+3 +……….+N)
#include<stdio.h>
void main()
{
   int n,sum=0;
    printf("Eneter the value N in 1+(1+2)+(1+2+3)+.....+(1+2+3+4+......+N): ");
     scanf("%d",&n);
     printf("-----------------------------------\n");

     for(int i=1;i<=n;i++)
     {
        for(int j=1;j<=i;j++)
         {
            sum=sum+j;
         }
     }
    
     printf("\tSum : %d",sum);
    printf("\n-----------------------------------");
}
