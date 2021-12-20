// 9.A perfect number is an integer number whose sum of its factors, including 1 is equal to the number itself. Write a program to print all perfect numbers in between 1 and 100. (e.g. 6 is a perfect number since 1+2+3 = 6)
#include<stdio.h>
void main()
{
   printf("-------------------------------------\n"); 
   printf("Perfect numbers in between 1 and 100 : ");

    for(int n=1;n<=100;n++)
     { int sum = 1;
      
      for (int i=2; i*i<=n; i++)
       {
        if (n%i==0)
         {
           if(i*i!=n)
            sum = sum + i + n/i;
           else
            sum=sum+i;
         }  
       }
     
     if (sum == n && n != 1)
         printf("%d ",n); 
     }

   printf("\n-------------------------------------");      
}
