// program to copy one array to another using pointers.
#include <stdio.h>
#define SIZE 50

int print(int n, int *arr)
{
  int i;
  for (i = 0; i < n; i++)
    printf("%d ", *(arr + i));
}

int copyArray(int n, int *ptr1)
{
  int arr2[n], i;
  int *ptr2 = arr2;

  for (i = 0; i <= n; i++)
    *(ptr2 + i) = *(ptr1 + i);
    
  printf("Output array:\n"); 
  print(n, arr2);
}

int main()
{
  int n, i, a[SIZE];

  // input
  printf("Enter the size of array:");
  scanf("%d", &n);
  printf("Enter the elements:\n");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  copyArray(n, a);

  return 0;
}
