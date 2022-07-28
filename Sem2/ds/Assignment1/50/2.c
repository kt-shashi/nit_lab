#include<stdio.h>

int insertionsort(int n,int *a)
{
    int i,j,temp;
	for(i=1;i<n;i++)
    {
        temp=*(a+i);
        j=i-1;
        while(temp<*(a+j)&&j>=0)
        {
            *(a+(j+1))=*(a+j);
            j--;
        }
        *(a+(j+1))=temp;
    }
    return 0;
}

void printArray(int n,int *a){
	int i;
  	for( i=0;i<n;i++)
		printf("%d ",*(a+i)); 
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
	insertionsort(n,a);
	
	// Output
	printf("\nSorted Array :\n"); 
	printArray(n,a);
}
