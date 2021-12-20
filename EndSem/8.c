// 8.Write a program to convert the given decimal number to its binary equivalent, and also print the number of 1’s in it.
#include<stdio.h>
void main()
{
    int n,bNum[32],r=0;
     printf("Enter the decimal number to find binary :");
      scanf("%d",&n);
    int temp=n,i = 0;
     
     while (n > 0)
     {
        bNum[i] = n % 2;
         if(bNum[i]==1)
            r++;
        n = n / 2;
        i++;
    }

    printf("-------------------------------------\n"); 
    printf("Binary of %d : ",temp);
 
     for (int j = i - 1; j >= 0; j--)
        printf("%d",bNum[j]);
 
    printf("\nNumber of 1's : %d",r);
    printf("\n-------------------------------------");     
}
