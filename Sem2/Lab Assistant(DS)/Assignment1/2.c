#include<stdio.h>
void print_array(int n, int *a){

  for(int i=0; i<n; i++)
   printf("%d ",*(a+i)); 
 }

void merge(int *a, int lb, int mid, int ub)
{
  
    int sub_array_one=mid-lb+1, sub_array_two=ub-mid;

    int left_array[sub_array_one],right_array[sub_array_two];
 
   for (int i=0; i<sub_array_one; i++)
         left_array[i]=*(a+lb+i);

    for (int j = 0; j < sub_array_two; j++)
        right_array[j]=*(a+mid+1+j);
  
    int one=0,two=0,merged_array = lb; 
  
    while (one < sub_array_one && two < sub_array_two)
    {
      if (left_array[one] <= right_array[two])
       {
         *(a+merged_array) = left_array[one];
          one++;
       }
      else
       {
         *(a+merged_array)= right_array[two];
          two++;
       }
        merged_array++;
    }

    while(one<sub_array_one)
    {
      *(a+merged_array)=left_array[one];
       one++;
      merged_array++;
    }
    while(two<sub_array_two)
    {
      *(a+merged_array)=right_array[two];
       two++;
      merged_array++;
    }
}
void merge_sort(int *a, int lb, int ub)
{
      if (lb>=ub)
        return;
  
    int mid=lb+(ub-lb)/2;
    merge_sort(a, lb, mid);
    merge_sort(a, mid + 1,ub);
    merge(a,lb, mid, ub);
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

  int lb=0,ub=n-1;
  merge_sort(a, lb, ub);

printf("\n-------------------------------");

 printf("\nSorted Array :\n"); 
  print_array(n, a);

printf("\n-------------------------------\n");

return 0;
}
