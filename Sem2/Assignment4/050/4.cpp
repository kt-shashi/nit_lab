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

Node *insertNodeAtIndex(Node *head, int data, int i)
{

    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return head;
}

void printList(Node *head)
{

    cout << "Linked list: " << endl;
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;

    int n = 1;
    while (n)
    {

        cout << endl
             << "MENU for Linked List: " << endl;
        cout << "1. Create List" << endl;
        cout << "2. Insert element at first index" << endl;
        cout << "3. Print list" << endl;
        cout << "4. End" << endl
             << endl;
        cout << "Enter choice: " << endl;
        int choice;
        cin >> choice;

        int i;
        switch (choice)
        {
        case 1:
            head = createList(NULL);
            break;
        case 2:
            int data;
            cout << "Enter data you want to insert: " << endl;
            cin >> data;
            head = insertNodeAtIndex(head, data, 0);
            break;
        case 3:
            printList(head);
            break;
        case 4:
            n = 0;
            break;
        default:
            cout << "Invalid input" << endl
                 << endl;
            break;
        }
    }

    return 0;
}
