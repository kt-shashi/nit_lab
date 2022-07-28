// Assignment 5 Program 3
// Shashi Kant | 2021PGCACA050

#include <iostream>
#include <climits>
using namespace std;
#define MAXSIZE 10

class Queue
{

private:
    int q[MAXSIZE];
    int front;
    int rear;

public:
    Queue()
    {
        front = 0, rear = 0;
    }

    void enQueue(int seats)
    {
        if (rear + seats > MAXSIZE)
        {
            if (MAXSIZE - rear - 1 >= 0)
                cout << "Only " << MAXSIZE - rear << " seat(s) available" << endl;
            else
                cout << "No more seat available" << endl;
            return;
        }

        int copy = seats;
        while (copy--)
            q[++rear] = 1;

        cout << seats << " seats have been alloted to you" << endl;
    }
};

int main()
{

    Queue *q = new Queue();

    int n = 1;
    while (n)
    {
        cout << endl;
        cout << "Hello Passenger, enter amount of seats you want?" << endl;
        int seats;
        cin >> seats;

        q->enQueue(seats);

        cout << "Enter 0 to exit, 1 to continue." << endl;
        cin >> n;
    }
}