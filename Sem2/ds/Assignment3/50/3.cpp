// Assignment 3 Program 3
// Shashi Kant | 2021PGCACA050

#include <iostream>
#include <stack>
#include <climits>
using namespace std;
#define MAXSIZE 1000

class StackInt
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
    StackInt()
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
    }

    // Pop an element from the stack
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow! Please insert some elements." << endl;
            return 0;
        }
        return a[top--];
    }

    // Returns top element
    int topElement()
    {
        if (isEmpty())
        {
            cout << "Stack underflow! Please insert some elements." << endl;
            return 0;
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

class StackChar
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
    StackChar()
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

// Helper function to check precedence of operators
int prec(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '/' || ch == '*')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return -1;
}

// Helper function to perform arithmetic operation
int applyOperation(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return (a + b);
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    }
    return 0;
}

int main()
{

    StackChar *operators = new StackChar();
    StackInt *values = new StackInt();

    // User Input
    cout << "Enter an Infix expression: " << endl;
    string infix;
    cin >> infix;

    for (char ch : infix)
    {

        if (ch == '(')
            operators->push(ch);

        else if (isdigit(ch))
            values->push(ch - '0');

        else if (ch == ')')
        {
            while (!operators->isEmpty() && operators->topElement() != '(')
            {
                int val2 = values->topElement();
                values->pop();

                int val1 = values->topElement();
                values->pop();

                char op = operators->topElement();
                operators->pop();

                values->push(applyOperation(val1, val2, op));
            }

            // pop opening brace.
            if (!operators->isEmpty())
                operators->pop();
        }
        else
        {
            while (!operators->isEmpty() && prec(operators->topElement()) >= prec(ch))
            {
                int val2 = values->topElement();
                values->pop();

                int val1 = values->topElement();
                values->pop();

                char op = operators->topElement();
                operators->pop();

                values->push(applyOperation(val1, val2, op));
            }

            // Push current token to 'ops'.
            operators->push(ch);
        }
    }

    while (!operators->isEmpty())
    {
        int val2 = values->topElement();
        values->pop();

        int val1 = values->topElement();
        values->pop();

        char op = operators->topElement();
        operators->pop();

        values->push(applyOperation(val1, val2, op));
    }

    // Output
    cout << values->topElement() << endl;
}
