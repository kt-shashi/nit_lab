#include<stdio.h>

void printArray(int n,int *a){
	int i;
  	for( i=0;i<n;i++)
		printf("%d ",*(a+i)); 
}

void sectionsort(int n,int *a)
{
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		int min_index=i;
	    for(j=i+1;j<n;j++)
		    if(*(a+j)<*(a+min_index))
	      		min_index=j;
	    int temp=*(a+i);
	    *(a+i)=*(a+min_index);
	    *(a+min_index)=temp;
	}
}

int main()
{
    // user input
  	int n, a[n],i;
	printf("Enter number of elements: ");
  	scanf("%d",&n);
	printf("Enter elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	// Sort
	sectionsort(n,a);
	
	// Output
	printf("\nSorted Array :\n"); 
	printArray(n,a);
}

