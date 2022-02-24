#include<stdio.h>
int main()
{
   int i,j,r,c;   
   printf("Enter number of row and column : ");
   scanf("%d %d",&r,&c);
   int a1[r][c],a2[r][c],add[r][c];   

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
   
  for(i=0;i<r;i++)
   for(j=0;j<c;j++) 
   *(*(add+i)+j)=*(*(a1+i)+j)+*(*(a2+i)+j);
   
printf("-------------------------------\n");
   printf("Addition of matrices is : \n");
   for(i=0; i<r; i++)
   {
    for(j=0; j<c; j++)
     printf("%d ",*(*(add+i)+j));
    printf("\n");
   }
printf("-------------------------------");
  return 0;
} 
