#include <iostream>
#include <climits>
#define size 50

using namespace std;

int binarySearch(int a[], int n, int x)
{

    int l = 0, h = n - 1;

    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (a[mid] > x)
        {
            h = mid - 1;
        }
        else if (a[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            return mid;
        }
    }

    return INT_MIN;
}

int binarySearchRecursive(int a[], int l, int r, int x)
{

    if (l > r)
        return 0;

    int mid = (l + r) / 2;
    if (a[mid] > x)
        return binarySearchRecursive(a, l, mid - 1, x);
    else if (a[mid] < x)
        return binarySearchRecursive(a, mid + 1, r, x);
    else
        return 1;
}

void bubbleSort(int a[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - 1; j++)
        {

            if (a[j] > a[j + 1])
            {

                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void insertionSort(int a[], int n)
{

    for (int i = 1; i < n; i++)
    {

        int min = a[i];

        while (i != 0 && a[i - 1] > min)
        {
            a[i] = a[i - 1];
            i--;
        }

        a[i] = min;
    }
}

void selectionSort(int a[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {

            if (a[j] < a[minIndex])
            {

                minIndex = j;
            }
        }

        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }
}

void display(int a[], int n)
{

    cout << "Display array" << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{

    int a[size];
    int loop = 1;

    while (loop)
    {

        cout << "1. Binary search " << endl;
        cout << "2. Bubble sort" << endl;
        cout << "3. Insertion sort" << endl;
        cout << "4. Selection sort" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";

        int ch;
        cin >> ch;
        int n, x, i;

        switch (ch)
        {

        case 1:

            cout << "Enter size of array: ";
            cin >> n;

            for (i = 0; i < n; i++)
            {
                cout << "Enter element " << i + 1 << " : ";
                cin >> a[i];
            }

            bubbleSort(a, n);
            display(a, n);

            cout << "Enter key to find: ";
            cin >> x;

            i = binarySearchRecursive(a, 0, n, x);
            if (!i)
                cout << "Element not found." << endl;
            else
                cout << "Element found at index " << i << endl;

            break;

        case 2:
            cout << "Enter size of array: ";
            cin >> n;

            for (i = 0; i < n; i++)
            {
                cout << "Enter element " << i + 1 << " : ";
                cin >> a[i];
            }

            bubbleSort(a, n);

            display(a, n);

            break;

        case 3:
            cout << "Enter size of array: ";
            cin >> n;

            for (i = 0; i < n; i++)
            {
                cout << "Enter element " << i + 1 << " : ";
                cin >> a[i];
            }

            insertionSort(a, n);

            display(a, n);

            break;

        case 4:
            cout << "Enter size of array: ";
            cin >> n;

            for (i = 0; i < n; i++)
            {
                cout << "Enter element " << i + 1 << " : ";
                cin >> a[i];
            }

            selectionSort(a, n);

            display(a, n);

            break;

        case 5:
            loop = 0;
            break;

        default:
            cout << "Invalid input" << endl;
            break;
        }
    }
}
