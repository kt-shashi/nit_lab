// Assignment 4 Program 2
// Shashi Kant | 2021PGCACA050

#include <iostream>
#include <climits>
using namespace std;
#define MAXSIZE 10

class Queue
{

private:
    int q[MAXSIZE];
    int front;
    int rear;

public:
    Queue()
    {
        front = -1, rear = -1;
    }

    bool isEmpty()
    {
        if ((front == rear && front == -1) || (front > rear))
            return true;
        return false;
    }

    bool isFull()
    {
        if (rear == MAXSIZE - 1)
            return true;
        return false;
    }

    void enQueue(int data)
    {
        if (isFull())
        {
            cout << "Overflow of data" << endl;
            return;
        }
        if (front == -1)
            front = 0;
        q[++rear] = data;

        cout << "Element added successfully: " << q[rear] << endl;
    }

    int deQueue()
    {
        if (isEmpty())
        {
            cout << "Underflow of Data" << endl;
            return INT_MIN;
        }

        return q[front++];
    }

    int countElements()
    {
        if (isEmpty())
            return 0;
        else
            return rear - front + 1;
        }

    void displayQueue()
    {
        if (isEmpty())
        {
            cout << "Underflow of Data" << endl;
            return;
        }
        cout << "Display the queue" << endl;
        for (int i = front; i <= rear; i++)
            cout << q[i] << " ";
        cout << endl;
    }
};

int main()
{

    Queue *q = new Queue();

    int n = 1;
    while (n)
    {

        // Menu
        cout << endl;
        cout << "QUEUE OPERATIONS-" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl
             << endl;
        cout << "Enter your choice: " << endl;

        int choice;
        cin >> choice;
        int element, returnValue;

        switch (choice)
        {

        case 1:
            cout << "Enter element to insert: ";
            cin >> element;
            q->enQueue(element);
            cout << "New size: " << q->countElements() << endl;
            break;
        case 2:
            returnValue = q->deQueue();
            if (returnValue != INT_MIN)
                cout << "Element dequed: " << returnValue << endl;
            cout << "New size: " << q->countElements() << endl;
            break;

        case 3:
            q->displayQueue();
            break;

        case 4:
            n = 0;
            break;

        default:
            if (n == 0)
                n = 1;
            cout << "Invalid input" << endl;
        }
    }
}