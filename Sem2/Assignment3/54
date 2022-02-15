#include <bits/stdc++.h>
using namespace std;
#define max 100
void push(string str, int top, char stack[], int i)
{
      if (top == max - 1)
        cout << "We don't have that much space!";
      else
        stack[top] = str[i];
}

void pop(int top, char stack[], string &str)
{
      str[top] = stack[top];
}
int main()
{
      string str;
      cout << "Enter your string : ";
      getline(cin, str);
      char stack[max];
      int top = 0;

      for (int i = str.length() - 1; i >= 0; i--)
            push(str, top++, stack, i);

      for (int i = 0; i < str.length(); i++)
            pop(--top, stack, str);

      cout << "Reverse string : " << str;
  return 0;
}
