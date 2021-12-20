// 18. Write a program to multiply two matrices of order A(m x n) and B(p x q).
#include <stdio.h>
void getMatrix(int matrix[][10], int row, int column)
{
    for (int i = 0; i < row; ++i)
      for (int j = 0; j < column; ++j)
       scanf("%d", &matrix[i][j]);  
}

void multiply(int f[][10],int s[][10],int result[][10], int r1, int c1, int r2, int c2)
{

   for (int i = 0; i < r1; ++i)
      for (int j = 0; j < c2; ++j)
         result[i][j] = 0;
   

   for (int i = 0; i < r1; ++i)
      for (int j = 0; j < c2; ++j)
         for (int k = 0; k < c1; ++k)
            result[i][j] += f[i][k] * s[k][j];
      
}
void display(int result[][10], int row, int column)
{
   printf("\nMultiply of two Matrix:\n");
   for (int i = 0; i < row; ++i)
      for (int j = 0; j < column; ++j)
      {
         printf("%d  ", result[i][j]);
         if (j == column - 1)
            printf("\n");
      }
   
}

int main() 
{
   int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;
    printf("Enter rows and column for the first matrix: ");
     scanf("%d %d", &r1, &c1);
    printf("Enter rows and column for the second matrix: ");
     scanf("%d %d", &r2, &c2);

   if(c1 != r2)
   { printf("----------------------------------\n");  
       printf("These matrix can not be Multiply.\n");
     printf("----------------------------------\n");    
      return 0;
   }
   
   printf("\nEnter elements of first matrix :\n"); 
    getMatrix(first, r1, c1);

   printf("\nEnter elements of second matrix :\n"); 
    getMatrix(second, r2, c2);

   multiply(first, second, result, r1, c1, r2, c2);
   
   printf("\n---------------------------------");   
    display(result, r1, c2);
   printf("----------------------------------");   

}
