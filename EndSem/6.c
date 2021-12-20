// 6. Twin primes is a pair of consecutive prime numbers whose difference is two. Write a program to generate twin primes numbers between 1 and 200. (e.g. 3 and 5 are twin primes).
//TWIN-PRIMES : Two prime numbers are known as twin-primes if there is only one composite number between them.
//OR diffrence between two prime number is 2.
#include<stdio.h>
int Prime(int i)
 {
  if(i==1)
    return 0;
 
  for(int j=2;j<i;j++)
   if(i%j==0)
    return 0;
 
  return 1;
 }
void main()
 {
 printf("-------------------------------------\n"); 
   printf("Twin Primes between 1 to 200 are : ");
    for(int i=2;i<=200;i++)
     {
      if(Prime(i)&&Prime(i+2))
      printf("(%d,%d) ",i,i+2);
     }
  printf("\n-------------------------------------"); 
 }
