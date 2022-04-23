// Assignment 9 Program 1
// Shashi Kant | 2021PGCACA050

#include <iostream>
using namespace std;
#define SIZE 50

class Complex
{

private:
    int real;
    int imaginary;

public:
    void setValues(int r, int i)
    {
        real = r, imaginary = i;
    }

    friend void operator<<(ostream &out, Complex &f);
    friend void operator>>(istream &in, Complex &f);
};

void operator<<(ostream &out, Complex &f)
{
    out << f.real << " + " << f.imaginary << "i" << endl;
}

void operator>>(istream &in, Complex &f)
{
    cout << "Enter real part: ";
    in >> f.real;

    cout << "Enter imaginary part: ";
    in >> f.imaginary;
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

int main()
{

    int n = 1;
    while (n)
    {

        int choice;
        cout << endl
             << "Menu" << endl;
        cout << "1. Print array of Integer" << endl;
        cout << "2. Print array of Double" << endl;
        cout << "3. Print array of String" << endl;
        cout << "4. Print array of Complex class" << endl;
        cout << "5. Exit" << endl;
        cout << endl
             << "Enter choice: ";
        cin >> choice;

        int ai[SIZE], size;
        double ad[SIZE];
        string as[SIZE];
        Complex ac[SIZE];

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

            printArray(ad, size);

            break;

        case 3:

            cout << "Enter size of array: ";
            cin >> size;

            for (int i = 0; i < size; i++)
            {
                cout << "Enter element " << i + 1 << " : ";
                cin >> as[i];
            }

            printArray(as, size);

            break;

        case 4:

            cout << "Enter size of array: ";
            cin >> size;

            for (int i = 0; i < size; i++)
            {
                cout << "Enter element " << i + 1 << " : " << endl;
                cin >> ac[i];
            }

            printArray(ac, size);

            break;

        case 5:
            n = 0;
            break;

        default:
            cout << "Invalid input" << endl;
            break;
        }
    }

    return 0;
}