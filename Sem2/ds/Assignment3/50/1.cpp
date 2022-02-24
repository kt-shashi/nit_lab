// Assignment 3 Program 1
// Shashi Kant | 2021PGCACA050

#include <iostream>
#include <climits>
using namespace std;
#define MAXSIZE 100

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
};

int main()
{

    cout << "Enter a string" << endl;
    string str;
    cin >> str;

    Stack *stk = new Stack();
    for (char ch : str)
        stk->push(ch);

    str = "";
    while (!(stk->isEmpty()))
        str += stk->pop();

    cout << "String afte reverse: " << str << endl;
}