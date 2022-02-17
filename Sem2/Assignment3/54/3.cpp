#include <bits/stdc++.h>
using namespace std;
#define SIZE 100

class infix
{
private:
  string expression;
  int numbers[SIZE];
  char operators[SIZE];
  int top_number = -1, top_operator = -1;

public:
  void enter_expression();
  void push_number(int);
  void push_operator(char);
  char pop_operator();
  int  pop_number();
  int  check_operator(char);
  int  precedence(char);
  int  operation(int[], char[]);
  int  calculate();
};

void infix::enter_expression()
{
  cout << "Enter expresion : ";
  getline(cin, expression);
}

void infix::push_number(int n)
{
  numbers[++top_number] = n;
}

void infix::push_operator(char ch)
{
  operators[++top_operator] = ch;
}

int infix::pop_number()
{
  return numbers[top_number--];
}

char infix::pop_operator()
{
  return operators[top_operator--];
}

int infix::operation(int numbers[SIZE], char op[SIZE])
{
  int a, b;
  char ope;
  a = pop_number();
  b = pop_number();
  ope = pop_operator();
  switch (ope)
  {
  case '+':
    return a + b;

  case '-':
    return b - a;

  case '*':
    return a * b;

  case '/':
    return b / a;
  }
  return 0;
}

int infix::check_operator(char ch)
{
  return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

int infix::precedence(char c)
{
  if (c == '+' || c == '-')
    return 1;

  if (c == '*' || c == '/')
    return 2;

  if (c == '^')
    return 3;

  return -1;
}

int infix::calculate()
{
  int i, num, output, r;
  char c;
  
  for (i = 0; expression[i] != '\0'; i++)
  {
    c = expression[i];

    if (isdigit(c) != 0)
    {
      num = 0;
      while (isdigit(c))
      {
        num = num * 10 + (c - '0');
        i++;

        if (i < expression.length())
          c = expression[i];

        else
          break;
      }
      i--;

      push_number(num);
    }

    else if (c == '(')
      push_operator(c);

    else if (c == ')')
    {
      while (operators[top_operator] != '(')
      {
        r = operation(numbers, operators);
        push_number(r);
      }
      pop_operator();
    }

    else if (check_operator(c))
    {
      while (top_operator != -1 && precedence(c) <= precedence(operators[top_operator]))
      {
        output = operation(numbers, operators);
        push_number(output);
      }
      push_operator(c);
    }
  }

  while (top_operator != -1)
  {
    output = operation(numbers, operators);
    push_number(output);
  }
  return pop_number();
}

int main()
{
  infix stack;
  cout << "------------------------------\n";
  stack.enter_expression();
  cout << "------------------------------\n";
  cout << "Value : ";
  cout << stack.calculate();
  cout << "\n------------------------------";

  return 0;
}
