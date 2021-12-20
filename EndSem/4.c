//4.An Armstrong number is a number whose sum of the cubes of the digits is equal to the number itself. Write a program to display all the Armstrong numbers in between 100 and 999. (e.g. 153 is an Armstrong number since 13 + 53 + 33 = 153)
#include<stdio.h>
void main()
{
    int rem, sum, temp, tnum;
     printf("-----------------------------------\n");
     printf("The 3-digit Armstrong numbers are : ");
      for (int i=100 ; i <= 999; i++)
      {
        tnum = i;
        sum = 0;
         while (tnum > 0)
         {
            rem = tnum % 10;
            temp = rem * rem * rem;
            sum = temp + sum;
            tnum = tnum / 10;
         }
      
        if (i == sum)
         printf("%d ", sum);
      
      }
     printf("\n-----------------------------------\n"); 
}
