#include <iostream>
using namespace std;
#define MAX 5

class queue
{
private:
    int queue_arr[MAX];
    int front = -1;
    int rear = -1;
    int size = 0;

public:
    void choose();
    void insert();
    void deletion();
    void display();
};

void queue::choose()
{
    int choice = 1;

    while (choice != 4)
    {
        cout << "--------------------\n";
        cout << "1 - Insert\n";
        cout << "2 - Delete\n";
        cout << "3 - Display\n";
        cout << "4 - Quit\n";
        cout << "--------------------\n";
        cout << "Enter your choice : ";
        cin >> choice;
        cout << "--------------------\n";
        switch (choice)
        {

        case 1:
            insert();
            break;

        case 2:
            deletion();
            break;

        case 3:
            display();
            break;

        case 4:
            cout << "Exiting program....\n";
            break;

        default:
            cout << "This is not the choice, try again!\n";
        }
    }
}

void queue::insert()
{
    int item;
    if (rear == MAX - 1)
    {
        cout << "Queue is full!\n";
        return;
    }

    else
    {
        cout << "Input the element for insertion in queue : ";
        cin >> item;

        if (front == -1)
            front = 0;
        rear++;
        size++;
        queue_arr[rear] = item;
        cout << "Size of the queue is " << size;
        cout << "\nElement insert successfully!";
    }
    cout << "\n";
}

void queue::deletion()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty!\n";
        return;
    }
    else
    {
        cout << "Element deleted from queue is : " << queue_arr[front];
        front++;
        size--;
        cout << "\nSize of the queue is " << size;
        cout << "\n";
    }
}

void queue::display()
{
    int front_pos = front, rear_pos = rear;
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty!\n";
        return;
    }

    else
    {
        cout << "Queue elements : ";
        for (int index = front; index <= rear; index++)
            cout << queue_arr[index] << " ";
        cout << "\nSize of the queue is " << size;
    }
    cout << "\n";
}

int main()
{
    queue arr;
    arr.choose();
    cout << "Program ended!";
    return 0;
}
