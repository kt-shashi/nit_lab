// 7.Write a program to find the maximum score, average score and the number of students whose score is greater than the class average for a class of n students with the given scores.
#include<stdio.h>
void main()
{ 
  int n,sum=0,max=0,c=0;
  float avg;
   printf("Input the number of student in the class : ");
    scanf("%d",&n);
   int a[n];
    
    for(int i=0;i<n;i++)
     {
        printf("Inpute marks of %d student : ",i+1);
         scanf("%d",&a[i]);
        sum=sum+a[i];
         if(max<a[i])
           max=a[i];
     }
    avg=(float)sum/n;
    
    for(int i=0;i<n;i++)
     {
       if(avg<a[i])
         c++;
     }
    printf("-------------------------------------\n");     
     printf("Maximum score : %d\nAverage score : %.2f\nNumber of students score more than average score : %d",max,avg,c);
    printf("\n-------------------------------------"); 
    
}
