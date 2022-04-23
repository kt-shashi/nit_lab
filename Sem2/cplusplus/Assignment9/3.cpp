// Assignment 9 Program 3
// Shashi Kant | 2021PGCACA050

#include <bits/stdc++.h>
using namespace std;

vector<int> q;
static int front = 0, rear = 0;

void enqueue(int data)
{
    if (rear == 20)
    {
        cout << "Data overflow" << endl;
    }
    else
    {
        q.push_back(data);
        rear++;
    }
}

int dequeue()
{
    if (rear == 0)
    {
        cout << "Data underflow" << endl;
        return 0;
    }
    else
    {
        int data = q[front++];
        return data;
    }
}

void display()
{
    for (int i = front; i < rear; i++)
        cout << q[i] << endl;
}

int main()
{
    int choice, data, returnValue, n = 1;
    while (n)
    {
        cout << "1. Insert element in queue " << endl;
        cout << "2. Delete element in queue " << endl;
        cout << "3. Display element in queue " << endl;
        cout << "4. Exit " << endl;
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the element to insert : ";
            cin >> data;
            enqueue(data);
            break;
        case 2:
            returnValue = dequeue();
            cout << "deleted element is : " << returnValue << endl;
            break;
        case 3:
            cout << "Display: " << endl;
            display();
            break;
        case 4:
            n = 0;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
        }
    }
}
