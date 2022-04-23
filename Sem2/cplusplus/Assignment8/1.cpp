// Assignment 8
// Question 1
// 2021pgcaca050

#include <iostream>
#include <climits>

using namespace std;

void checkForError(int x)
{
    try
    {
        if (x < 0)
            throw x;
        else if (x > INT_MAX)
            throw 'x';
        else if (x == 0)
            throw 1.4f;
    }
    catch (int x)
    {
        cout << "Cannot divide by negative number";
    }
    catch (char x)
    {
        cout << "Divisor cannot be this large";
    }
    catch (float x)
    {
        cout << "Divisor cannot be zero";
    }
}

int main()
{

    int a, c;
    long b;

    cout << "Enter divident: ";
    cin >> a;
    cout << "Enter divisor: ";
    cin >> b;

    checkForError(b);

    c = a / b;
    cout << c;

    return 0;
}
