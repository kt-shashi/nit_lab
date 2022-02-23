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

Node *createList(Node *head)
{

    Node *tail = NULL;
    int no_of_element;
    cout << "Enter number of element : ";
    cin >> no_of_element;
    cout << "Enter elements : ";
    for (int i = 0; i < no_of_element; i++)
    {
        int data;
        cin >> data;
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
    return head;
}

Node *insertNodeAtIndex(Node *head)
{
    int data;
    cout << "Enter element : ";
    cin >> data;

    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return head;
}

void printList(Node *head)
{

    cout << "Linked list : ";
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << "\n";
}

int main()
{

    Node *head = NULL;

    int choice = 1;
    while (choice != 4)
    {

        cout << "-----------------------\n";
        cout << "1 - Create List\n";
        cout << "2 - Insert element\n";
        cout << "3 - Display list\n";
        cout << "4 - Exit\n";
        cout << "-----------------------\n";

        cout << "Enter your choice : ";
        cin >> choice;
        
        cout << "-----------------------\n";
        
        switch (choice)
        {
        case 1:
            head = createList(NULL);
            break;

        case 2:
            head = insertNodeAtIndex(head);
            break;

        case 3:
            printList(head);
            break;

        case 4:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "This is not the choice! Try again...\n";
            break;
        }
    }
    
    cout << "Program Ended!";
    return 0;
}
