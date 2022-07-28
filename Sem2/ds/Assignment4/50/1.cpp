// Assignment 4 Program 1
// Shashi Kant | 2021PGCACA050

#include <iostream>
#include <climits>
#define MAXSIZE 6

using namespace std;

class CircularQueue
{

private:
    int q[MAXSIZE];
    int front;
    int rear;
    int maxSize;

public:
    CircularQueue()
    {
        front = -1;
        rear = -1;
        maxSize = MAXSIZE;
    }

    bool isEmpty()
    {
        return (front == -1);
    }

    bool isFull()
    {
        return ((rear + 1) % maxSize == front);
    }

    // Enter data into queue
    void enQueue(int data)
    {
        if (isFull())
        {
            cout << "Queue overflow. Cannot add more elements." << endl;
            return;
        }

        // Circular increment
        rear = (rear + 1) % maxSize;
        q[rear] = data;
        cout << q[rear] << " had been added." << endl;

        if (front == -1)
            front = rear;
    }

    // Delete data from queue
    int deQueue()
    {
        if (isEmpty())
        {
            cout << "Queue underflow. " << endl;
            return INT_MIN;
        }

        int data = q[front];

        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % maxSize;

        return data;
    }

    // Display the Queue
    void displayQueue()
    {

        if (isEmpty())
        {
            cout << "Queue underflow. " << endl;
            return;
        }

        cout << "Displaying: " << endl;
        int i = front;
        while (i != rear)
        {
            cout << q[i] << " ";
            i = (i + 1) % maxSize;
        }
        cout << q[rear];
        cout << endl;
    }
};

int main()
{

    CircularQueue *cq = new CircularQueue();

    int n = 1;
    while (n)
    {
        // Menu
        cout << endl;
        cout << "Circular QUEUE OPERATIONS-" << endl;
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
            cq->enQueue(element);
            break;
        case 2:
            returnValue = cq->deQueue();
            if (returnValue != INT_MIN)
                cout << "Element dequed: " << returnValue << endl;
            break;

        case 3:
            cq->displayQueue();
            break;

        case 4:
            n = 0;
            break;

        default:
            cout << "Invalid input" << endl;
        }
    }
}