// Assignment 9 Program 2
// Shashi Kant | 2021PGCACA050

#include <iostream>
using namespace std;

#define SIZE 50

class Distance
{

private:
    double feet;
    double inch;

public:
    void setValues(double f, double i)
    {
        feet = f, inch = i;
    }

    friend void operator<<(ostream &out, Distance &f);
    friend void operator>>(istream &in, Distance &f);
    friend bool operator>(Distance d1, Distance d2);
};

void operator<<(ostream &out, Distance &f)
{

    out << "Feet: " << f.feet << ", Inch: " << f.inch << endl;
}

void operator>>(istream &in, Distance &f)
{

    cout << "Enter feet: ";
    in >> f.feet;

    cout << "Enter inch: ";
    in >> f.inch;
}

bool operator>(Distance d1, Distance d2)
{
    if (d1.feet > d2.feet)
        return true;
    else if (d1.feet < d2.feet)
        return false;
    else
    {
        if (d1.inch > d2.inch)
            return true;
        else
            return false;
    }
}

template <class T>
void printArray(T a[], int size)
{
    cout << endl
         << "Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i];
        cout << " ";
    }
    cout << endl;
}

template <class T>
void insertionSort(T a[], int size)
{
    for (int i = 1; i < size; i++)
    {
        T current = a[i];
        int j;

        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] > current)
                a[j + 1] = a[j];
            else
                break;
        }

        a[++j] = current;
    }
}

int main()
{

    int n = 1;
    while (n)
    {

        int choice;
        cout << endl
             << "Menu" << endl;
        cout << "1. Sort Integer" << endl;
        cout << "2. Sort Double" << endl;
        cout << "3. Sort Distance class" << endl;
        cout << "4. Exit" << endl;
        cout << endl
             << "Enter choice: ";
        cin >> choice;

        int ai[SIZE], size;
        double ad[SIZE];
        Distance aDist[SIZE];

        switch (choice)
        {
        case 1:

            cout << "Enter size of array: ";
            cin >> size;

            for (int i = 0; i < size; i++)
            {
                cout << "Enter element " << i + 1 << " : ";
                cin >> ai[i];
            }

            insertionSort(ai, size);
            printArray(ai, size);

            break;

        case 2:

            cout << "Enter size of array: ";
            cin >> size;

            for (int i = 0; i < size; i++)
            {
                cout << "Enter element " << i + 1 << " : ";
                cin >> ad[i];
            }
            insertionSort(ad, size);
            printArray(ad, size);

            break;

        case 3:

            cout << "Enter size of array: ";
            cin >> size;

            for (int i = 0; i < size; i++)
            {
                cout << "Enter element " << i + 1 << " : " << endl;
                cin >> aDist[i];
            }
            insertionSort(aDist, size);
            printArray(aDist, size);

            break;

        case 4:
            n = 0;
            break;

        default:
            cout << "Invalid input" << endl;
            break;
        }
    }
}