#include<stdio.h>
void print_array(int n,int *a){

  for(int i=0;i<n;i++)
   printf("%d ",*(a+i)); 
 }

void bubble_sort(int n,int *a){

  int flag=1;
  
   for(int i=0; i<n&&flag==1; i++)
   {
    flag=0;
     for(int j=0; j<n-(i+1); j++)
      if (*(a+j)>*(a+j+1))
      {
        int temp=*(a+j);
       *(a+j)=*(a+j+1);
       *(a+j+1)=temp;
       flag=1;
      }
   }
}

int main()
{
 printf("Enter the number of elements you wants : ");
  
  int n;
  scanf("%d",&n);

 int a[n];
 printf("Eenter elements : ");
 for(int i=0;i<n;i++)
  scanf("%d",&a[i]);

printf("-------------------------------\n");

 printf("Array :\n");
  for(int i=0;i<n;i++)
   printf("%d ",a[i]);

  bubble_sort(n,a);

printf("\n-------------------------------");

 printf("\nSorted Array :\n"); 
  print_array(n,a);

printf("\n-------------------------------\n");

return 0;
}
