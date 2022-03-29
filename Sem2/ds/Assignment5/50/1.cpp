// Assignment 5 Program 1
// Shashi Kant | 2021PGCACA050

#include <iostream>
using namespace std;

class Node
{

public:
    int rollNumber;
    string name;
    string fatherName;
    string address;
    Node *next;

    Node(int rollNumber, string name, string fatherName, string address)
    {
        this->rollNumber = rollNumber;
        this->name = name;
        this->fatherName = fatherName;
        this->address = address;
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

            int rollNumber;
            string name, fatherName, address;

            cout << "Enter roll number: " << endl;
            cin >> rollNumber;
            cout << "Enter Student's name: " << endl;
            cin.ignore();
            getline(cin, name);
            cout << "Enter Father's Name: " << endl;
            cin.ignore();
            getline(cin, fatherName);
            cout << "Enter address: " << endl;
            cin.ignore();
            getline(cin, address);

            // Create a new Node
            Node *newNode = new Node(rollNumber, name, fatherName, address);

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

Node *insertNodeAtIndex(Node *head, int rollNumber, string name, string fatherName, string address, int i)
{

    Node *newNode = new Node(rollNumber, name, fatherName, address);

    if (i == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node *ptr = head;
        int count = 1;
        while (count < i && ptr != NULL)
        {
            ptr = ptr->next;
            count++;
        }

        if (ptr != NULL)
        {
            newNode->next = ptr->next;
            ptr->next = newNode;
        }
        else
            cout << "Out of range" << endl;
    }

    return head;
}

Node *deleteAtIndex(Node *head, int i)
{

    if (i == 0 && head->next != NULL)
    {
        Node *p = head;
        head = head->next;
        delete p;
        return head;
    }
    else if (i == 0 && head->next == NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node *p = head, *q;

        int count = 0;
        while (count < i - 1)
        {
            p = p->next;
            count++;
        }

        q = p->next;
        p->next = q->next;

        // de allocate
        delete q;

        return head;
    }
}

void printList(Node *head)
{

    cout << "--Linked list--" << endl;
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << "Roll Number: " << ptr->rollNumber << endl;
        cout << "Name: " << ptr->name << endl;
        cout << "Father Name: " << ptr->fatherName << endl;
        cout << "Address: " << ptr->address << endl;
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;
    int rollNumber;
    string name, fatherName, address;

    int n;
    while (1)
    {

        cout << endl
             << "--MENU for Linked List--" << endl;
        cout << "1. Create List" << endl;
        cout << "2. Insert element" << endl;
        cout << "3. Delete element" << endl;
        cout << "4. Print list" << endl;
        cout << "5. End" << endl
             << endl;
        cout << "Enter choice: " << endl;
        cin >> n;

        int i;
        switch (n)
        {
        case 1:
            head = createList(NULL);
            break;
        case 2:

            cout << "(Assuming first element has index 0)" << endl;
            cout << "Enter index where you want to insert:" << endl;
            cin >> i;

            cout << "Enter roll number: " << endl;
            cin >> rollNumber;
            cout << "Enter Student's name: " << endl;
            cin.ignore();
            getline(cin, name);
            cout << "Enter Father's Name: " << endl;
            cin.ignore();
            getline(cin, fatherName);
            cout << "Enter address: " << endl;
            cin.ignore();
            getline(cin, address);

            head = insertNodeAtIndex(head, rollNumber, name, fatherName, address, i);
            break;

        case 3:
            cout << "(Assuming first element has index 0)" << endl;
            cout << "Enter index which you want to delete:" << endl;
            cin >> i;
            head = deleteAtIndex(head, i);
            break;

        case 4:
            printList(head);
            break;

        case 5:
            exit(1);
            break;

        default:
            cout << "Invalid input" << endl
                 << endl;
            break;
        }
    }

    return 0;
}
