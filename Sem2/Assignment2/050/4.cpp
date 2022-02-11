// Assignment 2 Program 4
// Shashi Kant | 2021PGCACA050

#include <iostream>
#include <climits>
using namespace std;
#define MAXSIZE 10

class Stack
{

private:
    // Stack using array
    int a[MAXSIZE];
    // top stores the index to last element pushed to stack
    int top;
    // maximum size of the stack
    int maxSize;

public:
    // Initialize the stack
    Stack()
    {
        top = -1;
        maxSize = MAXSIZE;
    }

    // Check for underflow
    bool isEmpty()
    {
        return top == -1 ? true : false;
    }

    // Check for overflow
    bool isFull()
    {
        return top == (maxSize - 1) ? true : false;
    }

    // Push an element into the stack
    void push(int data)
    {
        if (isFull())
        {
            cout << "Stack overflow! Cannot add more elements." << endl;
            return;
        }
        this->top = this->top + 1;
        a[top] = data;
        cout << "Element added successfully" << endl;
    }

    // Pop an element from the stack
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow! Please insert some elements." << endl;
            return INT_MIN;
        }
        return a[top--];
    }

    // Returns top element
    int topElement()
    {
        if (isEmpty())
        {
            cout << "Stack underflow! Please insert some elements." << endl;
            return INT_MIN;
        }
        return a[top];
    }

    // Print the stack
    void display()
    {
        if (isEmpty())
        {
            cout << "Stack underflow! Please insert some elements." << endl;
            return;
        }
        cout << "--Stack--" << endl;
        for (int i = 0; i <= top; i++)
            cout << a[i] << " ";
        cout << endl;
    }
};

int main()
{

    // Initializing the Stack
    Stack *s = new Stack();

    while (1)
    {
        // Menu
        cout << endl;
        cout << "--STACK OPERATIONS--" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Top" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl
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
            s->push(element);
            break;
        case 2:
            returnValue = s->pop();
            if (returnValue == INT_MIN)
                cout << "Pop unsuccessfull" << endl;
            else
                cout << "Popped element is: " << returnValue << endl;
            break;
        case 3:
            returnValue = s->topElement();
            if (returnValue == INT_MIN)
                cout << "Getting top element was unsuccessfull." << endl;
            else
                cout << "Top element is: " << returnValue << endl;
            break;
        case 4:
            s->display();
            break;
        case 5:
            cout << "Exiting..." << endl;
            exit(0);
        default:
            cout << "Invalid input. Please try again!" << endl;
            break;
        }
    }
}