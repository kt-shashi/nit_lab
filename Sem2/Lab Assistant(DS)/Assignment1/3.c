#include<stdio.h>
void print_array(int n, int *a){

  for(int i=0; i<n; i++)
   printf("%d ",*(a+i)); 
 }

void section_sort(int *a,int n)
{
  for(int i=0;i<n;i++)
  {
    int min_index=i;
    for(int j=i+1;j<n;j++)
     if(*(a+j)<*(a+min_index))
      min_index=j;
    int temp=*(a+i);
    *(a+i)=*(a+min_index);
    *(a+min_index)=temp;
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

  section_sort(a,n);
  
printf("\n-------------------------------");

 printf("\nSorted Array :\n"); 
  print_array(n, a);

printf("\n-------------------------------\n");

 return 0;
}
