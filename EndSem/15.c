// 15. Write a program to generate Fibonacci sequence of n given number using recursion.
#include<stdio.h>
int f(int n)
{ 
  if(n==1)
    return 1;
  if(n==2)
    return 1;
   
 return f(n-1) + f(n-2);
}
void main()
{
   int n;
    
    printf("Enter the number of term for fibonacci sequence : ");
     scanf("%d",&n);
    
     for(int i=1;i<=n;i++)
      {
        printf("%d ",f(i));
      }
}
