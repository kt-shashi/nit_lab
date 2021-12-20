// 17. A department store chain has 6 stores and each store has the same 
// 10 departments. The weekly sales of the chain are stored in a 6X10 
// array SALES. Write down the program which
// (i) Prints the total weekly sales of each store.
// (ii) Prints the total weekly sales of each department.
// (iii) Prints the total weekly sales of the chain
#include<stdio.h>
int r=2,c=2,sum;
int WeeklySalesOfEachStore(int a[r][c])
{ 
    printf("\nTotal weekly sales of stores - ");
     for(int i=0;i<r;i++)
      {  
        sum=0;

        for(int j=0;j<c;j++)
         sum=sum+a[i][j];
        
        printf("\nStore %d : %d",i+1,sum);
      }
}

int  WeeklySalesOfEachDepartment(int a[r][c])
{ 
    printf("\nTotal weekly sales of departments - ");
     for (int j=0;j<c;j++)
      {
        sum=0;
       
        for(int i=0;i<r;i++)
          sum=sum+a[i][j];

        printf("\nDepartment %d : %d",j+1,sum);      
      }
}

int WeeklySalesOfTheChain(int a[r][c])
{
    sum=0;
     
    for(int i=0;i<r;i++)
     for(int j=0;j<c;j++)
      sum=sum+a[i][j];
 
   printf("\nTotal weekly sales of the chain : %d",sum); 
}

void main()
{
    int a[r][c];
    
     for(int i=0;i<r;i++)
      {   
        printf("\nFor store no.%d sales\n",i+1);
         for(int j=0;j<c;j++)
         {
          printf("Input weekly sale of department %d :",j+1);
          scanf("%d",&a[i][j]);
         }
      }
  
   printf("\n-----------------------------------");
    WeeklySalesOfEachStore(a);
   printf("\n-----------------------------------");
    WeeklySalesOfEachDepartment(a);
   printf("\n-----------------------------------");
    WeeklySalesOfTheChain(a);
   printf("\n-----------------------------------");
}
