// 3.Write a program to find the sum of digits of a given integer number.
#include <stdio.h>
void main()
{
  int index, sum, t;
  char num[1000];
    printf("Input an integer : ");
     scanf("%s",num);
    printf("-----------------------------------\n");
   sum = index = 0;
   
   while (num[index] != '\0')
   {
      t   = num[index] - '0';
      sum = sum + t;
      index++;
   }

   printf("Sum of digits of %s = %d\n", num, sum);
     printf("-----------------------------------\n");
}
