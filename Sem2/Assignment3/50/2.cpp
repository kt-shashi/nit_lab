// Assignment 3 Program 2
// Shashi Kant | 2021PGCACA050

#include <iostream>
using namespace std;
#define MAXSIZE 10

class Stack
{

private:
    // Stack using array
    string a;
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
    void push(char data)
    {
        if (isFull())
        {
            cout << "Stack overflow! Cannot add more elements." << endl;
            return;
        }
        this->top = this->top + 1;
        a[top] = data;
    }

    // Pop an element from the stack
    char pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow! Please insert some elements." << endl;
            return '0';
        }
        return a[top--];
    }

    // Returns top element
    char topElement()
    {
        if (isEmpty())
        {
            cout << "Stack underflow! Please insert some elements." << endl;
            return '0';
        }
        return a[top];
    }
};

// Helper function to check precedence of operators
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

int main()
{

    Stack *s = new Stack();

    // User Input
    cout << "Enter an Infix expression: ";
    string infix, postfix;
    cin >> infix;

    for (char ch : infix)
    {

        if (isalpha(ch))
            postfix.push_back(ch);
        else if (ch == '(')
            s->push('(');
        else if (ch == ')')
        {
            while (s->topElement() != '(')
            {
                postfix.push_back(s->topElement());
                s->pop();
            }
            s->pop();
        }
        else
        {
            while (!s->isEmpty() && prec(ch) <= prec(s->topElement()))
            {
                postfix.push_back(s->topElement());
                s->pop();
            }
            s->push(ch);
        }
    }

    // Pop remaining elements
    while (!s->isEmpty())
    {
        postfix.push_back(s->topElement());
        s->pop();
    }

    // Output
    cout << postfix << endl;
}