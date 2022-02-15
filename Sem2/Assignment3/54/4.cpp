#include <bits/stdc++.h>
using namespace std;
#define SIZE 5
void enQueue(int queue[], int &front, int &rear)
{
	if (rear == SIZE - 1)
		printf("Queue is Full!");
	
	else{
     	int value;
     	printf("Enter the value to be insert: ");
     	scanf("%d", &value);
     	 if (front == -1)
     	     front = 0;
     	    rear++;
     	    queue[rear] = value;
     	 printf("Insert element successfully!");
	}
}
void deQueue(int queue[], int &front, int &rear)
{
	if (front == rear)
	   printf("Queue is Empty!");
	else{   
		printf("Deleted : %d", queue[front]);
		front++;
		if (front == rear)
			front = rear = -1;
	}		
}
void display(int queue[], int &front, int &rear)
{
	if (rear == front && front==-1)
		printf("Queue is Empty!");
	else{   	
		printf("Queue elements are: ");
		for (int i = front; i <= rear; i++)
			printf("%d ", queue[i]);
	}		
}
int main()
{
	int queue[SIZE], front = -1, rear = -1;
	int value, choice = 1;
	while (choice)
	{
		printf("\n-------------------------\n");
		printf("\tChoose one option");
		printf("\n1- Insertion"
			   "\n2- Deletion"
			   "\n3- Display"
			   "\n0- Exit");
		printf("\n-------------------------");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			enQueue(queue, front, rear);
			break;

		case 2:
			deQueue(queue, front, rear);
			break;

		case 3:
			display(queue, front, rear);
			break;

		case 0:
			printf("Program Exiting...");
			break;

		default:
			printf("This is not the choice !Try again...");
		}
	}
}
