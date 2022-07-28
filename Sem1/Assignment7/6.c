#include <stdio.h>
#define SIZE 50

void findOccurance(int n, int a[])
{

   int i, j, b[n], c = 0;
   for (i = 0; i < n; i++)
   {
      c = 1;
      if (a[i] != -1)
         for (j = i + 1; j < n; j++)
            if (a[i] == a[j])
            {
               c++;
               a[j] = -1;
            }
      b[i] = c;
   }

   // Print the occurance
   printf("Number - Occurance\n");
   for (i = 0; i < n; i++)
      if (a[i] != -1)
         printf("%d - %d \n", a[i], b[i]);
}
int main()
{

   int n, i, a[SIZE];

   // user input
   printf("Enter the number of elements : ");
   scanf("%d", &n);
   printf("Enter the elements  : ");
   for (i = 0; i < n; i++)
      scanf("%d", &a[i]);

   findOccurance(n, a);

   return 0;
}
