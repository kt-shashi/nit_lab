#include <iostream>
using namespace std;
#define MAX 5
class cqueue
{
private:
    int cqueue_arr[MAX];
    int front = -1;
    int rear = -1;

public:
    void choose();
    void insert();
    void deletion();
    void display();
};

void cqueue::choose()
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

void cqueue::insert()
{
    int item;
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        cout << "Queue is full!\n";
        return;
    }

    else
    {
        cout << "Input the element for insertion in queue : ";
        cin >> item;

        if (front == -1)
            front = 0, rear = 0;
        else
        {
            if (rear == MAX - 1)
                rear = 0;
            else
                rear = rear + 1;
        }

        cqueue_arr[rear] = item;

        cout << "Element insert successfully!";
    }
    cout << "\n";
}

void cqueue::deletion()
{
    if (front == -1)
    {
        cout << "Queue is empty!\n";
        return;
    }

    cout << "Element deleted from queue is : " << cqueue_arr[front];
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        if (front == MAX - 1)
            front = 0;
        else
            front = front + 1;
    }
}
void cqueue::display()
{
    int front_pos = front, rear_pos = rear;
    if (front == -1)
    {
        cout << "Queue is empty!\n";
        return;
    }
    cout << "Queue elements : ";

    if (front_pos <= rear_pos)
        while (front_pos <= rear_pos)
        {
            cout << cqueue_arr[front_pos] << " ";
            front_pos++;
        }

    else
    {
        while (front_pos <= MAX - 1)
        {
            cout << cqueue_arr[front_pos];
            front_pos++;
        }
        front_pos = 0;
        while (front_pos <= rear_pos)
        {
            cout << cqueue_arr[front_pos];
            front_pos++;
        }
    }

    cout << "\n";
}

int main()
{   cqueue queue;
    queue.choose();
    cout << "Program ended!";
    return 0;
}
