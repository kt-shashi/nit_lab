//  program in C to search a number in an array using pointer
#include <stdio.h>
#define SIZE 50

int search(int n, int *ptr, int num)
{
  int flag = 0,i;

  for (i = 0; i < n; i++)
    if (num == *(ptr + i))
    {
      flag = 1;
      break;
    }

  if (flag)
    printf("Number Found");
  else
    printf("Number Not Found");
}

int main()
{
  int n, element, a[SIZE],i;

  // user input
  printf("Enter the size of array: ");
  scanf("%d", &n);
  printf("Enter the elements:\n");
  for ( i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("Enter element that you want to search: ");
  scanf("%d", &element);

  search(n, a, element);
  return 0;
}
