// Assignment 4
// Question 1
// Roll: 2021PGCACA050

#include <iostream>
#include <climits>

using namespace std;

class IntStack
{

private:
    int top;
    int *p;

public:
    // 1. Default constructor
    IntStack()
    {
        p = new int[10];
        top = -1;
    }

    // 2. Parameterized constructor
    IntStack(int size)
    {
        p = new int[size];
        top = -1;
    }

    // 3. copy constructor
    IntStack(const IntStack &obj)
    {
        int size = obj.top + 1;
        p = new int[size];

        for (int i = 0; i < size; i++)
            p[i] = obj.p[i];

        top = size - 1;
    }

    // Returns true if Stack is empty
    // Helper function
    bool isEmpty()
    {
        return (top == -1);
    }

    // 4. Pop function
    int pop()
    {
        if (isEmpty())
            return INT_MIN;
        return p[top--];
    }

    // 5. Push function
    void push(int val)
    {

        ++top;
        p[top] = val;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return;
        }
        for (int i = 0; i <= top; i++)
            cout << p[i] << " ";
        cout << endl;
    }
};

int main()
{

    IntStack s1;
    IntStack s2(15);

    int n = 1;
    while (n)
    {

        int ch, input, poppedValue;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> ch;

        switch (ch)
        {

        case 1:
            cout << "Enter data: ";
            cin >> input;
            s1.push(input);
            break;
        case 2:
            poppedValue = s1.pop();
            if (poppedValue == INT_MIN)
                cout << "Stack underflow" << endl;
            else
                cout << "Popped item: " << poppedValue << endl;
            break;
        case 3:
            s1.display();
            break;
        case 4:
            n = 0;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
        }
    }

    IntStack s3(s1);
    s3.display();
}