#include <iostream>
using namespace std;
#define MAX 5

class queue
{
private:
    int queue_arr[MAX];
    int front = 0;
    int rear = 0;

public:
    void choose();
    void check();
};

void queue::choose()
{
    int choice = 1;

    while (choice != 2)
    {
        cout << "--------------------\n";
        cout << "1 - Ask for seats\n";
        cout << "2 - Quit\n";
        cout << "--------------------\n";
        cout << "Enter your choice : ";
        cin >> choice;
        cout << "--------------------\n";
        switch (choice)
        {

        case 1:
            check();
            break;

        case 2:
            cout << "Exiting program....\n";
            break;

        default:
            cout << "This is not the choice, try again!\n";
        }
    }
}

void queue::check()
{
    if (rear >= MAX)
    {
        cout << "No seats available!\n";
        return;
    }
    else
    {
        int give_seats;
        cout << "Input number of seats require : ";
        cin >> give_seats;

        if (rear + give_seats > MAX)
            cout << "NO ! That musch seats not avilable.";
        else
        {
            rear = rear + give_seats;
            while (give_seats >= 0)
            {
                queue_arr[--give_seats] = 1;
            }

            cout << "YES ! seats are allocated.";
        }
    }
    cout << "\n";
}

int main()
{
    queue arr;
    arr.choose();
    cout << "Program ended!";
    return 0;
}
