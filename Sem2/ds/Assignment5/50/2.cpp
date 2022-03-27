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

// Returns head
Node *createList(Node *head)
{

    Node *tail = NULL;

    while (1)
    {
        cout << "Press 'y' to add Data and 'n' to go back" << endl;
        char ch;
        cin >> ch;

        if (ch == 'y' || ch == 'Y')
        {

            cout << "Enter data: " << endl;
            int data;
            cin >> data;

            // Create a new Node
            Node *newNode = new Node(data);

            if (head == NULL)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = tail->next;
            }
        }
        else
            break;
    }

    return head;
}

void printList(Node *head)
{

    if (head == NULL)
    {
        cout << "Linked List is empty" << endl;
        return;
    }

    cout << "Reversed Linked list: " << endl;
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

Node *reverseList(Node *head)
{

    Node *c, *n;
    c = n = NULL;
    if (head == NULL)
        return NULL;
    else
    {

        c = head;
        n = c->next;

        head->next = NULL;

        while (n != NULL)
        {

            Node *temp = n->next;

            n->next = c;

            // c->next = p;
            // p = c;

            c = n;
            n = temp;
        }
    }

    return c;
}

int main()
{

    Node *head = NULL;

    head = createList(head);
    head = reverseList(head);

    printList(head);

    return 0;
}
