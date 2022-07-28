#include <bits/stdc++.h>
using namespace std;
#define SIZE 100

int check_exp(char infix[])
{
  int Operator = 0, DigitAlpha = 0;
  for (int i = 0; infix[i] != '\0'; i++)
  {
    if (infix[i] == '^' || infix[i] == '*' || infix[i] == '/' || infix[i] == '+' || infix[i] == '-')
      Operator++;
    if (isdigit(infix[i]) || isalpha(infix[i]))
      DigitAlpha++;
  }

  if (DigitAlpha - 1 == Operator)
    return 1;
  else
    return 0;
}
void push(char item, char stack[], int &top)
{
  if (top >= SIZE - 1)
  {
    cout << "\nWe dont have that much space!";
  }
  else
  {
    top = top + 1;
    stack[top] = item;
  }
}

char pop(char stack[], int &top)
{
  char item;

  if (top < 0)
  {
    cout << "\nThere s no input!";
    getchar();
    exit(1);
  }
  else
  {
    item = stack[top];
    top = top - 1;
    return (item);
  }
}

int is_operator(char symbol)
{
  if (symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol == '-')
    return 1;
  else
    return 0;
}

int precedence(char symbol)
{
  if (symbol == '^')
    return (3);
  else if (symbol == '*' || symbol == '/')
    return (2);
  else if (symbol == '+' || symbol == '-')
    return (1);
  else
    return (0);
}

void InfixToPostfix(char infix_exp[], char postfix_exp[], char stack[], int &top)
{
  int i, j;
  char item;
  char x;

  push('(', stack, top);
  strcat(infix_exp, ")");

  i = 0;
  j = 0;
  item = infix_exp[i];

  while (item != '\0')
  {
    if (item == '(')
      push(item, stack, top);

    if (item == ' ')
    {
    }
    else if (isdigit(item) || isalpha(item))
    {
      postfix_exp[j] = item;
      j++;
    }

    else if (is_operator(item) == 1)
    {
      x = pop(stack, top);
      while (is_operator(x) == 1 && precedence(x) >= precedence(item))
      {
        postfix_exp[j] = x;
        j++;
        x = pop(stack, top);
      }
      push(x, stack, top);
      push(item, stack, top);
    }
    else if (item == ')')
    {
      x = pop(stack, top);
      while (x != '(')
      {
        postfix_exp[j] = x;
        j++;
        x = pop(stack, top);
      }
    }
    i++;
    item = infix_exp[i];
  }
  postfix_exp[j] = '\0';
}

int main()
{

  char stack[SIZE];

  int top = -1;

  char infix[SIZE], postfix[SIZE];
  cout << "----------------------------\n";
  cout << "Enter Infix Expression : ";
  gets(infix);
  cout << "----------------------------";

  int flag = check_exp(infix);

  if (flag == 1)
  {
    InfixToPostfix(infix, postfix, stack, top);
    cout << "\nPostfix Expression: ";
    cout << postfix;
  }
  else
    cout << "\nInvalid infix Expression!";
  
  cout << "\n----------------------------";
  return 0;
}
