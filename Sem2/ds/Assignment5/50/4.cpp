#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    void push(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    int peek()
    {
        if (isEmpty())
            return -1;
        return top->data;
    }

    int pop()
    {
        if (isEmpty())
            return -1;
        int data = top->data;
        Node *temp = top;
        top = top->next;
        free(temp);
        return data;
    }

    void display()
    {
        if (isEmpty())
            cout << "Stack Underflow" << endl;
        Node *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{

    Stack *s = new Stack();
    int n = 1;

    while (n)
    {

        int ch;

        cout << endl
             << "Menu: " << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";

        cin >> ch;
        int returnValue, input;
        switch (ch)
        {
        case 1:
            cout << "Enter data to push: ";
            cin >> input;
            s->push(input);
            break;
        case 2:
            returnValue = s->pop();
            if (returnValue == -1)
                cout << "Stack Underflow" << endl;
            else
                cout << "Popped value: " << returnValue << endl;
            break;
        case 3:
            returnValue = s->peek();
            if (returnValue == -1)
                cout << "Stack Underflow" << endl;
            else
                cout << "Top value: " << returnValue << endl;
            break;
        case 4:
            s->display();
            break;
        case 5:
            n = 0;
            break;
        default:

            break;
        }
    }
    return 0;
}
