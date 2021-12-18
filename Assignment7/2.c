// program in C to store n elements in an array and add the elements using pointer
#include <stdio.h>
#define SIZE 50

int add(int n, int *ptr)
{

  int sum = 0,i;
  for (i = 0; i < n; i++)
  {
    sum += *ptr;
    ptr++;
  }

  return sum;
}

int main()
{

  int n, i, a[SIZE];
  // User input
  printf("Enter the size of array:\n");
  scanf("%d", &n);
  printf("Enter the elements : ");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  // output
  printf("Sum of all the elements = %d", add(n, a));

  return 0;
}
