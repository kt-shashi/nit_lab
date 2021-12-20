// 10. Write a program to check whether a pair of given numbers is amicable or not.
#include<stdio.h>
void main()
{
   int num1,num2,sum1=0,sum2=0;
    printf("Enter a two positive integer: ");
     scanf("%d %d", &num1, &num2);
   
    for (int i = 1; i <num1; ++i)
        if (num1 % i == 0)
            sum1=sum1+i;

    for (int i = 1; i <num2; ++i)
        if (num2 % i == 0)
            sum2=sum2+i;
   printf("-------------------------------------\n"); 
    if((sum1==num2)&&(sum2==num1))    
     printf("%d and %d are amicable numbers.",num1,num2);

    else
     printf("These two number are not amicable numbers.");

   printf("\n-------------------------------------"); 
}
//  two numbers are amicable if each is equal to the sum of the proper divisors of the other (for example, 220 and 284).
