#include<stdio.h>

void printArray(int n,int *a){
	int i;
  	for( i=0;i<n;i++)
		printf("%d ",*(a+i)); 
}

void bubbleSorT(int n,int *a){
   int i,j,flag=1;
   for(i=0; i<n&&flag==1; i++)
   {
		flag=0;
     	for(j=0; j<n-(i+1); j++)
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
	
	// user input
  	int n, a[n],i;
	printf("Enter number of elements: ");
  	scanf("%d",&n);
	printf("Eenter elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	// Sort
	bubbleSorT(n,a);
	
	// Output
	printf("\nSorted Array :\n"); 
	printArray(n,a);
	
return 0;
}
