#include <bits/stdc++.h>
using namespace std;
#define N 100

void enQueue(int queue[], int &front, int &rear)
{
      if (rear == N - 1)
            cout << "Queue is filled!";
      else
      {
            int element;
            if (front == -1)
                  front = 0;
            cout << "Inset the element in queue : ";
            cin >> element;
            rear = rear + 1;
            queue[rear] = element;

            cout << "Element added successfully!";
      }
}

void deQueue(int queue[], int &front, int &rear)
{
      if (front == -1 || front > rear)
      {
            cout << "No element is here!";
            return;
      }
      else
      {
            cout << queue[front] << " is deleted successfully!";
            front = front + 1;
      }
}

void display(int queue[], int &front, int &rear)
{
      if (front == -1 || front > rear)
            cout << "Queue is empty!";
      else
      {
            cout << "Queue : ";
            for (int i = front; i <= rear; i++)
                  cout << queue[i] << " ";
      }
}

int main()
{
      int queue[N], front = -1, rear = -1;
      int choice = 1;
      while (choice)
      {
            cout << "\n------------------------\n";
            cout << "    Choice one option\n";
            cout << " 1- ENQUEUE\n";
            cout << " 2- DEQUEUE\n";
            cout << " 3- DISPLAY\n";
            cout << " 0- Exit\n";
            cout << "------------------------\n";
            cout << "Enter your choice : ";
            cin >> choice;
            switch (choice)
            {
			    
            case (1):
                  enQueue(queue, front, rear);
                  break;

            case (2):
                  deQueue(queue, front, rear);
                  break;

            case (3):
                  display(queue, front, rear);
                  break;

            case (0):
                  cout << "Program is exiting...!";
                  break;

            default:
                  cout << "This is not the choice. Try again!";
                  break;
			    
            }
      }
   cout<<"\nProgram ended!";
  return 0;
}
