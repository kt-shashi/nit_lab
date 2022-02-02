#include<stdio.h>
int main()
{
   int i,j,r,c;   
   printf("Enter number of row and column : ");
   scanf("%d %d",&r,&c);
   int a1[r][c],a2[r][c],multiply[r][c];   

printf("\n-------------------------------\n");
  printf("Enter first Matrix : \n");
  for(i=0;i<r;i++)
   for(j=0;j<c;j++)
   scanf("%d",&a1[i][j]);
 
printf("-------------------------------\n");
  printf("Enter second Matrix : \n");  
  for(i=0;i<r;i++)
   for(j=0;j<c;j++)
   scanf("%d",&a2[i][j]);
  
  int sum;
  	for(int i=0; i<r; ++i)
		for(int j=0; j<c; ++j)
    {
			sum = 0;
			for(int k=0; k<r; ++k) {
				sum=sum + *(*(a1+i)+k)* *(*(a2+k)+j);
			}
			*(*(multiply+i)+j)=sum;
		}

printf("-------------------------------\n");
   printf("Multiplication of matrices is : \n");
   for(i=0; i<r; i++)
   {
    for(j=0; j<c; j++)
     printf("%d ",*(*(multiply+i)+j));
    printf("\n");
   }
printf("-------------------------------");
  return 0;
} 
