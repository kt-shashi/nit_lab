#include <bits/stdc++.h>

using namespace std;

#define MAX 50
char postfix[50];
char infix[50];
char opstack[50]; /* operator stack */
int i, j, top = 0;

int lesspriority(char op, char op_at_stack)
{
    int k;
    int pv1;
    int pv2;
    char operators[] = {'+', '-', '*', '/', '%', '^', '('};
    int priority_value[] = {0, 0, 1, 1, 2, 3, 4};
    if (op_at_stack == '(')
        return 0;
    for (k = 0; k < 6; k++)
    {
        if (op == operators[k])
            pv1 = priority_value[k];
    }
    for (k = 0; k < 6; k++)
    {
        if (op_at_stack == operators[k])
            pv2 = priority_value[k];
    }
    if (pv1 <= pv2)
        return 1;
    else
        return 0;
}

void push(char op) /* op - operator */
{
    if (top == 0)
    {
        opstack[top] = op;
        top++;
    }
    else
    {
        if (op != '(')
        {
            while (lesspriority(op, opstack[top - 1]) == 1 && top > 0)
            {
                postfix[j] = opstack[--top];
                j++;
            }
        }
        opstack[top] = op; /* pushing onto stack */
        top++;
    }
}
void pop()
{
    while (opstack[--top] != '(') /* pop until '(' comes */
    {
        postfix[j] = opstack[top];
        j++;
    }
}

class node
{
public:
    char value;
    node *left;
    node *right;
    node *next = NULL;
    node(char c)
    {
        this->value = c;
        left = NULL;
        right = NULL;
    }
    node()
    {
        left = NULL;
        right = NULL;
    }
    friend class Stack;
    friend class expression_tree;
};
class Stack
{
    node *head = NULL;

public:
    void push(node *);
    node *pop();
    friend class expression_tree;
};
class expression_tree
{
public:
    void inorder(node *x)
    {
        // cout<<"Tree in InOrder Traversal is: "<<endl;
        if (x == NULL)
            return;
        else
        {
            inorder(x->left);
            cout << x->value << "  ";
            inorder(x->right);
        }
    }
};

void Stack::push(node *x)
{
    if (head == NULL)
    {
        head = x;
    }
    // We are inserting here nodes at the top of the stack [following LIFO principle]
    else
    {
        x->next = head;
        head = x;
    }
}
node *Stack::pop()
{
    // Popping out the top most[ pointed with head] element
    node *p = head;
    head = head->next;
    return p;
}
int main()
{
    char ch;
    cout << "ENTER INFIX EXPRESSION =";
    cin >> infix;
    while ((ch = infix[i++]) != '\0')
    {
        switch (ch)
        {
        case ' ':
        case '(':
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
        case '%':
            push(ch);
            break;
        case ')':
            pop();
            break;
        default:
            postfix[j] = ch;
            j++;
        }
    }
    while (top >= 0)
    {
        postfix[j] = opstack[--top];
        j++;
    }
    postfix[j] = '\0';
    cout << "\nPOSTFIX EXPRESSION =" << postfix << "\n";
    Stack e;
    expression_tree a;
    node *x, *y, *z;
    int l = strlen(postfix);
    for (int i = 0; i < l; i++)
    {

        if (postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/' || postfix[i] == '^')
        {
            z = new node(postfix[i]);
            x = e.pop();
            y = e.pop();
            z->left = y;
            z->right = x;
            e.push(z);
        }
        else
        {
            z = new node(postfix[i]);
            e.push(z);
        }
    }
    cout << " The Inorder Traversal of Expression Tree: ";
    a.inorder(z);

    return 0;
}